
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0, int VAR_1)
{
  char *VAR_2;
  int VAR_3 = 0;
  VAR_2 = VAR_0;

  while (*VAR_2 != ';' && *VAR_2 != ')' && *VAR_2 != '(' && *VAR_2 != '\0') {
    if (*VAR_2 == ' ')
      VAR_3++;
    if (VAR_3 > VAR_1)
      break;
    VAR_2++;
  }
  *VAR_2 = 0;

  return VAR_0;
}
