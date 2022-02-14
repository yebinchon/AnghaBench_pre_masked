
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config_parser ;


 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static int FUNC_4(
 char **VAR_0, const char **VAR_1, git_config_parser *VAR_2, const char *VAR_3)
{
 const char *VAR_4 = VAR_3, *VAR_5;

 *VAR_0 = ((void*)0);
 *VAR_1 = ((void*)0);

 while (*VAR_4 && FUNC_2(*VAR_4))
  VAR_4++;

 if (VAR_3 == VAR_4) {
  FUNC_3(VAR_2, 0, "invalid configuration key");
  return -1;
 }

 VAR_5 = VAR_4;

 while (*VAR_5 && FUNC_0(*VAR_5))
  VAR_5++;

 if (*VAR_5 == '=') {
  *VAR_1 = VAR_5 + 1;
 } else if (*VAR_5) {
  FUNC_3(VAR_2, 0, "invalid configuration key");
  return -1;
 }

 if ((*VAR_0 = FUNC_1(VAR_3, VAR_4 - VAR_3)) == ((void*)0))
  return -1;

 return 0;
}
