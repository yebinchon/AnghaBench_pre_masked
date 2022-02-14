
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; char* args; char* description; } ;


 TYPE_1__* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

void FUNC_2 (void) {
  int VAR_2;
  FUNC_1 ("%s\n", VAR_1);
  FUNC_1 ("usage: tlclient [-v] [-r] [-a<hostname>] [-p<port>] [-u<username>] [-b<backlog>] [-c<max-conn>] [-l<log-name>] <scheme.tl>\n"
   "\tParsing SCHEME expressions, sending RPC requests to Kitten PHP, unserialize obtained result.\n"
   "\t-v\toutput statistical and debug information into stderr\n"
    "\t-A<auth_key_id>\tauth_key_id as unsigned long long hex number\n"
    "\t\tif auth_key_id is zero (auth_key_id, session_id, message_id will not sent after req_id)\n"
    "\t-S<session_id>\tsession_id as unsigned long long hex number\n"
  );

  FUNC_1 ("\ntlclient commands:\n");
  for (VAR_2 = 0; VAR_0[VAR_2].name; VAR_2++) {
    FUNC_1 ("%s %s\t%s\n", VAR_0[VAR_2].name, VAR_0[VAR_2].args ? VAR_0[VAR_2].args : "", VAR_0[VAR_2].description);
  }
  FUNC_0 (2);
}
