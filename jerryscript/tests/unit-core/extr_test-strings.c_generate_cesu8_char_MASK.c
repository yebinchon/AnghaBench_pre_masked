
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_char_size ;
typedef int lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef int lit_code_point_t ;
typedef int ecma_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static lit_utf8_size_t
FUNC_3 (utf8_char_size VAR_8,
                     lit_utf8_byte_t *VAR_9)
{
  FUNC_0 (VAR_8 >= 0 && VAR_8 <= VAR_0);
  lit_code_point_t VAR_10 = (lit_code_point_t) FUNC_2 ();

  if (VAR_8 == 1)
  {
    VAR_10 %= VAR_3;
  }
  else if (VAR_8 == 2)
  {
    VAR_10 = VAR_5 + VAR_10 % (VAR_4 -
                                                                VAR_5);
  }
  else if (VAR_8 == 3)
  {
    VAR_10 = VAR_7 + VAR_10 % (VAR_6 -
                                                                VAR_7);
  }
  else
  {
    VAR_10 %= VAR_6;
  }

  if (VAR_10 >= VAR_1
      && VAR_10 <= VAR_2)
  {
    VAR_10 = VAR_1 - 1;
  }

  return FUNC_1 ((ecma_char_t) VAR_10, VAR_9);
}
