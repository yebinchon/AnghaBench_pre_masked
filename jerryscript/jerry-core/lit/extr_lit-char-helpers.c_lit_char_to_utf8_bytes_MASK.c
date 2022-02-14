
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int ecma_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

size_t
FUNC_0 (uint8_t *VAR_8,
                        ecma_char_t VAR_9)
{
  if (!(VAR_9 & ~VAR_0))
  {

    *VAR_8 = (uint8_t) VAR_9;
    return 1;
  }

  if (!(VAR_9 & ~VAR_1))
  {

    *(VAR_8++) = (uint8_t) (VAR_2 | ((VAR_9 >> 6) & VAR_6));
    *VAR_8 = (uint8_t) (VAR_4 | (VAR_9 & VAR_7));
    return 2;
  }


  *(VAR_8++) = (uint8_t) (VAR_3 | ((VAR_9 >> 12) & VAR_5));
  *(VAR_8++) = (uint8_t) (VAR_4 | ((VAR_9 >> 6) & VAR_7));
  *VAR_8 = (uint8_t) (VAR_4 | (VAR_9 & VAR_7));
  return 3;
}
