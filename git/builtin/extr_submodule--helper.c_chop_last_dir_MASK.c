
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char*,char) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char **VAR_0, int VAR_1)
{
 char *VAR_2 = FUNC_2(*VAR_0);
 if (VAR_2) {
  *VAR_2 = '\0';
  return 0;
 }

 VAR_2 = FUNC_5(*VAR_0, ':');
 if (VAR_2) {
  *VAR_2 = '\0';
  return 1;
 }

 if (VAR_1 || !FUNC_4(".", *VAR_0))
  FUNC_1(FUNC_0("cannot strip one component off url '%s'"),
   *VAR_0);

 FUNC_3(*VAR_0);
 *VAR_0 = FUNC_6(".");
 return 0;
}
