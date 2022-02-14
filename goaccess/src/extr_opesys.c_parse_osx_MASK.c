
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *
FUNC_0 (char *VAR_0)
{
  int VAR_1 = 0;
  char *VAR_2;

  VAR_2 = VAR_0;

  while (*VAR_2 != ';' && *VAR_2 != ')' && *VAR_2 != '(' && *VAR_2 != '\0') {
    if (*VAR_2 == '_')
      *VAR_2 = '.';
    if (*VAR_2 == ' ')
      VAR_1++;
    if (VAR_1 > 3)
      break;
    VAR_2++;
  }
  *VAR_2 = 0;

  return VAR_0;
}
