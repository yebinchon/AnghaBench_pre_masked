
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef scalar_t__ ecma_length_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const) ;

ecma_length_t
FUNC_2 (const lit_utf8_byte_t *VAR_0,
                        lit_utf8_size_t VAR_1)
{
  ecma_length_t VAR_2 = 0;
  lit_utf8_size_t VAR_3 = 0;

  while (VAR_3 < VAR_1)
  {
    VAR_3 += FUNC_1 (*(VAR_0 + VAR_3));
    VAR_2++;
  }

  FUNC_0 (VAR_3 == VAR_1);

  return VAR_2;
}
