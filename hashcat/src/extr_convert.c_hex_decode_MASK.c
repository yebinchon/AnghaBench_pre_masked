
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const*) ;

int FUNC_1 (const u8 *VAR_0, const int VAR_1, u8 *VAR_2)
{
  for (int VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1; VAR_3 += 2, VAR_4 += 1)
  {
    VAR_2[VAR_4] = FUNC_0 (&VAR_0[VAR_3]);
  }

  return VAR_1 / 2;
}
