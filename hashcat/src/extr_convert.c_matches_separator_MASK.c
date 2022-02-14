
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;



__attribute__((used)) static bool FUNC_0 (const u8 *VAR_0, const size_t VAR_1, const char VAR_2)
{
  for (size_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  {
    const char VAR_4 = (char) VAR_0[VAR_3];

    if (VAR_4 == VAR_2) return 1;
  }

  return 0;
}
