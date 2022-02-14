
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ ecma_char_t ;



__attribute__((used)) static bool
FUNC_0 (ecma_char_t VAR_0,
                               const ecma_char_t *VAR_1,
                               const uint8_t *VAR_2,
                               int VAR_3)
{
  int VAR_4 = 0;
  int VAR_5 = VAR_3 - 1;

  while (VAR_4 <= VAR_5)
  {
    int VAR_6 = (VAR_4 + VAR_5) / 2;
    ecma_char_t VAR_7 = VAR_1[VAR_6];

    if (VAR_7 <= VAR_0 && VAR_0 <= VAR_7 + VAR_2[VAR_6])
    {
      return 1;
    }

    if (VAR_0 > VAR_7)
    {
      VAR_4 = VAR_6 + 1;
    }
    else
    {
      VAR_5 = VAR_6 - 1;
    }
  }

  return 0;
}
