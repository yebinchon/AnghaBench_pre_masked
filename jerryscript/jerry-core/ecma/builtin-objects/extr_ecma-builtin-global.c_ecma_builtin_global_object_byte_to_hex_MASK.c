
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lit_utf8_byte_t ;
typedef int ecma_char_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (lit_utf8_byte_t *VAR_1,
                                        uint32_t VAR_2)
{
  FUNC_0 (VAR_2 < 256);

  VAR_1[0] = VAR_0;
  ecma_char_t VAR_3 = (ecma_char_t) (VAR_2 >> 4);
  VAR_1[1] = (lit_utf8_byte_t) ((VAR_3 > 9) ? (VAR_3 + ('A' - 10)) : (VAR_3 + '0'));
  VAR_3 = (lit_utf8_byte_t) (VAR_2 & 0xf);
  VAR_1[2] = (lit_utf8_byte_t) ((VAR_3 > 9) ? (VAR_3 + ('A' - 10)) : (VAR_3 + '0'));
}
