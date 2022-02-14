
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef int ecma_char_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int const*,int *) ;

lit_utf8_size_t
FUNC_4 (const lit_utf8_byte_t *VAR_0,
                                   lit_utf8_size_t VAR_1)
{
  lit_utf8_size_t VAR_2 = 0;
  lit_utf8_size_t VAR_3 = VAR_1;
  ecma_char_t VAR_4 = 0;

  while (VAR_2 < VAR_1)
  {
    ecma_char_t VAR_5;
    VAR_2 += FUNC_3 (VAR_0 + VAR_2, &VAR_5);

    if (FUNC_2 (VAR_5) && FUNC_1 (VAR_4))
    {
      VAR_3 -= 2;
    }

    VAR_4 = VAR_5;
  }

  FUNC_0 (VAR_2 == VAR_1);

  return VAR_3;
}
