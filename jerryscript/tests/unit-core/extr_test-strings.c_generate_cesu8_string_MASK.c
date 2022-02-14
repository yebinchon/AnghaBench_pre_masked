
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_size ;
typedef scalar_t__ lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef scalar_t__ ecma_length_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const,int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static ecma_length_t
FUNC_3 (lit_utf8_byte_t *VAR_2,
                       lit_utf8_size_t VAR_3)
{
  ecma_length_t VAR_4 = 0;

  lit_utf8_size_t VAR_5 = 0;
  while (VAR_5 < VAR_3)
  {
    const utf8_char_size VAR_6 = (((VAR_3 - VAR_5) > VAR_1)
                                      ? VAR_0
                                      : (utf8_char_size) (VAR_3 - VAR_5));

    lit_utf8_size_t VAR_7 = FUNC_1 (VAR_6, VAR_2);

    FUNC_0 (FUNC_2 (VAR_2, VAR_7));

    VAR_5 += VAR_7;
    VAR_2 += VAR_7;
    VAR_4++;
  }

  FUNC_0 (VAR_5 == VAR_3);

  return VAR_4;
}
