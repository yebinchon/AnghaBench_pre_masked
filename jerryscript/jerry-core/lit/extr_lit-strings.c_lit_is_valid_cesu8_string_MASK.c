
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ lit_utf8_size_t ;
typedef int lit_utf8_byte_t ;
typedef int lit_code_point_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

bool
FUNC_0 (const lit_utf8_byte_t *VAR_14,
                           lit_utf8_size_t VAR_15)
{
  lit_utf8_size_t VAR_16 = 0;

  while (VAR_16 < VAR_15)
  {
    lit_utf8_byte_t VAR_17 = VAR_14[VAR_16++];
    if ((VAR_17 & VAR_1) == VAR_0)
    {
      continue;
    }

    lit_code_point_t VAR_18 = 0;
    lit_code_point_t VAR_19 = 0;
    lit_utf8_size_t VAR_20;
    if ((VAR_17 & VAR_4) == VAR_3)
    {
      VAR_20 = 1;
      VAR_19 = VAR_2;
      VAR_18 = ((uint32_t) (VAR_17 & VAR_12));
    }
    else if ((VAR_17 & VAR_7) == VAR_6)
    {
      VAR_20 = 2;
      VAR_19 = VAR_5;
      VAR_18 = ((uint32_t) (VAR_17 & VAR_11));
    }
    else
    {
      return 0;
    }

    if (VAR_16 + VAR_20 > VAR_15)
    {

      return 0;
    }

    for (lit_utf8_size_t VAR_21 = 0; VAR_21 < VAR_20; ++VAR_21)
    {
      VAR_17 = VAR_14[VAR_16 + VAR_21];
      if ((VAR_17 & VAR_10) != VAR_9)
      {

        return 0;
      }
      VAR_18 <<= VAR_8;
      VAR_18 |= (VAR_17 & VAR_13);
    }

    if (VAR_18 < VAR_19)
    {

      return 0;
    }

    VAR_16 += VAR_20;
  }

  return 1;
}
