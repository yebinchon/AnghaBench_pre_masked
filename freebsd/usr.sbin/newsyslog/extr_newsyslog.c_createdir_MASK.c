
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct conf_entry {char* log; scalar_t__ firstcreate; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (char*,struct stat*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*,...) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(const struct conf_entry *VAR_3, char *VAR_4)
{
 int VAR_5;
 char *VAR_6, *VAR_7;
 char VAR_8[VAR_0];
 struct stat VAR_9;

 VAR_6 = VAR_4;
 VAR_7 = VAR_8;

 for (;;) {
  *VAR_7++ = *VAR_6++;
  if (*VAR_6 != '/' && *VAR_6 != '\0')
   continue;
  *VAR_7 = '\0';
  VAR_5 = FUNC_1(VAR_8, &VAR_9);
  if (VAR_5 != 0) {
   if (VAR_1) {
    FUNC_3("\tmkdir %s\n", VAR_8);
   } else {
    VAR_5 = FUNC_2(VAR_8, 0755);
    if (VAR_5 != 0)
     FUNC_0(1, "Error on mkdir(\"%s\") for -a",
         VAR_8);
   }
  }
  if (*VAR_6 == '\0')
   break;
 }
 if (VAR_2) {
  if (VAR_3->firstcreate)
   FUNC_3("Created directory '%s' for new %s\n",
       VAR_4, VAR_3->log);
  else
   FUNC_3("Created directory '%s' for -a\n", VAR_4);
 }
}
