
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(char **VAR_0, char **VAR_1)
{
 char *VAR_2;
 char VAR_3 = 0;

 VAR_2 = *VAR_0;
 while (*VAR_2 == ' ' || *VAR_2 == '\t')
  VAR_2++;
 *VAR_0 = VAR_2;
 while (*VAR_2 != '\0') {
  if (VAR_3) {
   if (*VAR_2 == VAR_3)
    VAR_3 = 0;
  } else {
   if (*VAR_2 == '\\' && *(VAR_2 + 1) != '\0')
    VAR_2++;
   else if (*VAR_2 == '\'' || *VAR_2 == '"')
    VAR_3 = *VAR_2;
   else if (*VAR_2 == ' ' || *VAR_2 == '\t')
    break;
  }
  VAR_2++;
 };
 *VAR_1 = VAR_2;
}
