
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ecma_char_t ;



__attribute__((used)) static bool
FUNC_0 (ecma_char_t VAR_0,
                           const ecma_char_t *VAR_1,
                           int VAR_2)
{
  int VAR_3 = 0;
  int VAR_4 = VAR_2 - 1;

  while (VAR_3 <= VAR_4)
  {
    int VAR_5 = (VAR_3 + VAR_4) / 2;
    ecma_char_t VAR_6 = VAR_1[VAR_5];

    if (VAR_6 == VAR_0)
    {
      return 1;
    }

    if (VAR_0 < VAR_6)
    {
      VAR_4 = VAR_5 - 1;
    }
    else
    {
      VAR_3 = VAR_5 + 1;
    }
  }

  return 0;
}
