
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtab {int command; unsigned int min; scalar_t__ name; } ;


 int CMD_NEXT ;
 int CMD_PLAY ;
 int CMD_PREVIOUS ;
 struct cmdtab* cmdtab ;
 scalar_t__ isdigit (char) ;
 scalar_t__ isspace (char) ;
 int strcasecmp (char*,scalar_t__) ;
 int strncasecmp (char*,scalar_t__,unsigned int) ;
 int warnx (char*) ;

__attribute__((used)) static char *
parse(char *buf, int *cmd)
{
 struct cmdtab *c;
 char *p;
 unsigned int len;

 for (p=buf; isspace (*p); p++)
  continue;

 if (isdigit (*p) || (p[0] == '#' && isdigit (p[1]))) {
  *cmd = CMD_PLAY;
  return (p);
 } else if (*p == '+') {
  *cmd = CMD_NEXT;
  return (p + 1);
 } else if (*p == '-') {
  *cmd = CMD_PREVIOUS;
  return (p + 1);
 }

 for (buf = p; *p && ! isspace (*p); p++)
  continue;

 len = p - buf;
 if (! len)
  return (0);

 if (*p) {
  char *q;

  *p++ = 0;
  for (q=p; *q && *q != '\n' && *q != '\r'; q++)
   continue;
  *q = 0;
 }

 *cmd = -1;
 for (c=cmdtab; c->name; ++c) {

  if (! strcasecmp (buf, c->name)) {
     *cmd = c->command;
     break;
    }


  if (len >= c->min && ! strncasecmp (buf, c->name, len)) {
   if (*cmd != -1 && *cmd != c->command) {
    warnx("ambiguous command");
    return (0);
   }
   *cmd = c->command;
    }
 }

 if (*cmd == -1) {
  warnx("invalid command, enter ``help'' for commands");
  return (0);
 }

 while (isspace (*p))
  p++;
 return p;
}
