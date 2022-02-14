
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



void FUNC_0 (char *VAR_0, u64 VAR_1, u64 *VAR_2, u64 *VAR_3)
{
  char *VAR_4 = VAR_0;

  for (u64 VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++)
  {
    if (*VAR_4 >= 'a' && *VAR_4 <= 'z') *VAR_4 -= 0x20;

    if (*VAR_4 != '\n') continue;

    *VAR_3 = VAR_5 + 1;

    if ((VAR_5 > 0) && (VAR_0[VAR_5 - 1] == '\r')) VAR_5--;

    *VAR_2 = VAR_5;

    return;
  }

  *VAR_3 = VAR_1;
  *VAR_2 = VAR_1;
}
