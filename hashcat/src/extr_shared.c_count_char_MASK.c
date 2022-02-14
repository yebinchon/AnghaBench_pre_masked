
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



int FUNC_0 (const u8 *VAR_0, const int VAR_1, const u8 VAR_2)
{
  int VAR_3 = 0;

  for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  {
    if (VAR_0[VAR_4] == VAR_2) VAR_3++;
  }

  return VAR_3;
}
