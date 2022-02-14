
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, unsigned VAR_1, int VAR_2)
{
  char VAR_3[16];
  int VAR_4 = 0;
  do
    VAR_3[VAR_4++] = (char)('0' + (VAR_1 % 10));
  while (VAR_1 /= 10);

  for (VAR_2 -= VAR_4; VAR_2 > 0; VAR_2--)
    *VAR_0++ = '0';

  do
    *VAR_0++ = VAR_3[--VAR_4];
  while (VAR_4);
  *VAR_0 = '\0';
  return VAR_0;
}
