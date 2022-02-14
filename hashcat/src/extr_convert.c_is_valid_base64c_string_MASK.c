
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int const) ;

bool FUNC_1 (const u8 *VAR_0, const size_t VAR_1)
{
  for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
    const u8 VAR_3 = VAR_0[VAR_2];

    if (FUNC_0 (VAR_3) == 0) return 0;
  }

  return 1;
}
