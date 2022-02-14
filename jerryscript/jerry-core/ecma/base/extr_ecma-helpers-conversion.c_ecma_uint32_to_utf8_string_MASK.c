
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int lit_utf8_size_t ;
typedef scalar_t__ lit_utf8_byte_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

lit_utf8_size_t
FUNC_3 (uint32_t VAR_1,
                            lit_utf8_byte_t *VAR_2,
                            lit_utf8_size_t VAR_3)
{
  lit_utf8_byte_t *VAR_4 = VAR_2 + VAR_3;

  do
  {
    FUNC_0 (VAR_4 >= VAR_2);

    VAR_4--;
    *VAR_4 = (lit_utf8_byte_t) ((VAR_1 % 10) + VAR_0);
    VAR_1 /= 10;
  }
  while (VAR_1 != 0);

  FUNC_0 (VAR_4 >= VAR_2);

  lit_utf8_size_t VAR_5 = (lit_utf8_size_t) (VAR_2 + VAR_3 - VAR_4);

  if (FUNC_1 (VAR_4 != VAR_2))
  {
    FUNC_2 (VAR_2, VAR_4, VAR_5);
  }

  return VAR_5;
}
