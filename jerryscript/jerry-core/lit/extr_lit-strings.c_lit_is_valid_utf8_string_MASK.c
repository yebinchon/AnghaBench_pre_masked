
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

bool
FUNC_0 (const lit_utf8_byte_t *VAR_23,
                          lit_utf8_size_t VAR_24)
{
  lit_utf8_size_t VAR_25 = 0;

  bool VAR_26 = 0;
  while (VAR_25 < VAR_24)
  {
    lit_utf8_byte_t VAR_27 = VAR_23[VAR_25++];
    if ((VAR_27 & VAR_6) == VAR_5)
    {
      VAR_26 = 0;
      continue;
    }

    lit_code_point_t VAR_28 = 0;
    lit_code_point_t VAR_29 = 0;
    lit_utf8_size_t VAR_30;
    if ((VAR_27 & VAR_9) == VAR_8)
    {
      VAR_30 = 1;
      VAR_29 = VAR_7;
      VAR_28 = ((uint32_t) (VAR_27 & VAR_21));
    }
    else if ((VAR_27 & VAR_12) == VAR_11)
    {
      VAR_30 = 2;
      VAR_29 = VAR_10;
      VAR_28 = ((uint32_t) (VAR_27 & VAR_20));
    }
    else if ((VAR_27 & VAR_15) == VAR_14)
    {
      VAR_30 = 3;
      VAR_29 = VAR_13;
      VAR_28 = ((uint32_t) (VAR_27 & VAR_19));
    }
    else
    {

      return 0;
    }

    if (VAR_25 + VAR_30 > VAR_24)
    {

      return 0;
    }

    for (lit_utf8_size_t VAR_31 = 0; VAR_31 < VAR_30; ++VAR_31)
    {
      VAR_27 = VAR_23[VAR_25 + VAR_31];
      if ((VAR_27 & VAR_18) != VAR_17)
      {

        return 0;
      }
      VAR_28 <<= VAR_16;
      VAR_28 |= (VAR_27 & VAR_22);
    }

    if (VAR_28 < VAR_29
        || VAR_28 > VAR_0)
    {

      return 0;
    }

    if (VAR_28 >= VAR_2
        && VAR_28 <= VAR_1)
    {
      VAR_26 = 1;
    }
    else if (VAR_28 >= VAR_4
             && VAR_28 <= VAR_3
             && VAR_26)
    {

      return 0;
    }
    else
    {
      VAR_26 = 0;
    }

    VAR_25 += VAR_30;
  }

  return 1;
}
