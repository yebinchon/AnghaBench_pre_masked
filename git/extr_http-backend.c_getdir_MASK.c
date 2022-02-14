
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 struct strbuf VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct strbuf*,char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*,char*) ;
 char* FUNC_5 (struct strbuf*,int *) ;
 char* FUNC_6 (char*) ;

__attribute__((used)) static char* FUNC_7(void)
{
 struct strbuf VAR_1 = VAR_0;
 char *VAR_2 = FUNC_3("PATH_INFO");
 char *VAR_3 = FUNC_3("GIT_PROJECT_ROOT");
 char *VAR_4 = FUNC_3("PATH_TRANSLATED");

 if (VAR_3 && *VAR_3) {
  if (!VAR_2 || !*VAR_2)
   FUNC_1("GIT_PROJECT_ROOT is set but PATH_INFO is not");
  if (FUNC_0(VAR_2))
   FUNC_1("'%s': aliased", VAR_2);
  FUNC_2(&VAR_1, VAR_3);
  if (VAR_2[0] == '/')
   VAR_2++;
  FUNC_4(&VAR_1, VAR_2);
  return FUNC_5(&VAR_1, ((void*)0));
 } else if (VAR_4 && *VAR_4) {
  return FUNC_6(VAR_4);
 } else
  FUNC_1("No GIT_PROJECT_ROOT or PATH_TRANSLATED from server");
 return ((void*)0);
}
