
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ lit_code_point_t ;
typedef scalar_t__ ecma_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

uint8_t
FUNC_2 (lit_code_point_t VAR_1,
                             ecma_char_t *VAR_2)
{
  if (VAR_1 <= VAR_0)
  {
    VAR_2[0] = (ecma_char_t) VAR_1;
    return 1;
  }

  VAR_2[0] = FUNC_0 (VAR_1);
  VAR_2[1] = FUNC_1 (VAR_1);
  return 2;
}
