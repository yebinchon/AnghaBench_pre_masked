
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char
FUNC_0(int VAR_0, const char *VAR_1)
{
  char VAR_2;

  switch (VAR_0) {
  case 16:
    if (*VAR_1 == 'X') VAR_2 = 'F';
    else VAR_2 = 'f';
    break;
  case 8:
    VAR_2 = '7'; break;
  case 2:
    VAR_2 = '1'; break;
  default:
    VAR_2 = '.'; break;
  }
  return VAR_2;
}
