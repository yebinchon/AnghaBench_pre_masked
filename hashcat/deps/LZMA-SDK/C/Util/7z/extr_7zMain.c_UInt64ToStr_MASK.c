
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UInt64 ;



__attribute__((used)) static void FUNC_0(UInt64 VAR_0, char *VAR_1, int VAR_2)
{
  char VAR_3[32];
  int VAR_4 = 0;
  do
  {
    VAR_3[VAR_4++] = (char)('0' + (unsigned)(VAR_0 % 10));
    VAR_0 /= 10;
  }
  while (VAR_0 != 0);

  for (VAR_2 -= VAR_4; VAR_2 > 0; VAR_2--)
    *VAR_1++ = ' ';

  do
    *VAR_1++ = VAR_3[--VAR_4];
  while (VAR_4);
  *VAR_1 = '\0';
}
