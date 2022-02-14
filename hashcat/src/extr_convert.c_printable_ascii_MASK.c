
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static bool FUNC_0 (const u8 *VAR_0, const size_t VAR_1)
{
  for (size_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
    const u8 VAR_3 = VAR_0[VAR_2];

    if (VAR_3 < 0x20) return 0;
    if (VAR_3 > 0x7e) return 0;
  }

  return 1;
}
