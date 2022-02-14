
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lit_utf8_size_t ;
typedef scalar_t__ lit_utf8_byte_t ;
typedef unsigned int ecma_char_t ;


 int FUNC_0 (int) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 unsigned int VAR_6 ;

bool
FUNC_1 (const lit_utf8_byte_t *VAR_7,
                             lit_utf8_size_t VAR_8,
                             ecma_char_t *VAR_9)
{
  ecma_char_t VAR_10 = VAR_6;

  FUNC_0 (VAR_8 >= 2 && VAR_8 <= 4);

  for (lit_utf8_size_t VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
  {
    VAR_10 = (ecma_char_t) (VAR_10 << 4u);

    if (*VAR_7 >= VAR_0
        && *VAR_7 <= VAR_1)
    {
      VAR_10 |= (ecma_char_t) (*VAR_7 - VAR_0);
    }
    else if (*VAR_7 >= VAR_2
             && *VAR_7 <= VAR_3)
    {
      VAR_10 |= (ecma_char_t) (*VAR_7 - (VAR_2 - 10));
    }
    else if (*VAR_7 >= VAR_4
             && *VAR_7 <= VAR_5)
    {
      VAR_10 |= (ecma_char_t) (*VAR_7 - (VAR_4 - 10));
    }
    else
    {
      return 0;
    }

    VAR_7++;
  }

  *VAR_9 = VAR_10;
  return 1;
}
