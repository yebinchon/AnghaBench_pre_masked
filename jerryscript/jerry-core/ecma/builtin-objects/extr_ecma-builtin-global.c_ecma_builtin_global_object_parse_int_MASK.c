
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lit_utf8_size_t ;
typedef scalar_t__ lit_utf8_byte_t ;
typedef int int32_t ;
typedef int ecma_value_t ;
typedef scalar_t__ ecma_number_t ;
typedef scalar_t__ ecma_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__ const**,scalar_t__*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__ const**) ;

__attribute__((used)) static ecma_value_t
FUNC_9 (const lit_utf8_byte_t *VAR_11,

                                      lit_utf8_size_t VAR_12,

                                      ecma_value_t VAR_13)
{
  if (VAR_12 <= 0)
  {
    return FUNC_3 ();
  }

  const lit_utf8_byte_t *VAR_14 = VAR_11;


  FUNC_6 (&VAR_14, &VAR_12);

  const lit_utf8_byte_t *VAR_15 = VAR_14 + VAR_12;
  const lit_utf8_byte_t *VAR_16 = VAR_14;
  const lit_utf8_byte_t *VAR_17 = VAR_15;

  if (VAR_14 >= VAR_15)
  {
    return FUNC_3 ();
  }


  int VAR_18 = 1;


  ecma_char_t VAR_19 = FUNC_8 (&VAR_14);
  if (VAR_19 == VAR_6)
  {
    VAR_18 = -1;
  }


  if (VAR_19 == VAR_6 || VAR_19 == VAR_7)
  {
    VAR_16 = VAR_14;
    if (VAR_14 < VAR_15)
    {
      VAR_19 = FUNC_8 (&VAR_14);
    }
  }


  ecma_number_t VAR_20;
  VAR_13 = FUNC_1 (VAR_13, &VAR_20);

  if (!FUNC_2 (VAR_13))
  {
    return VAR_13;
  }

  int32_t VAR_21 = FUNC_5 (VAR_20);


  bool VAR_22 = 1;


  if (VAR_21 != 0)
  {

    if (VAR_21 < 2 || VAR_21 > 36)
    {
      return FUNC_3 ();
    }

    else if (VAR_21 != 16)
    {
      VAR_22 = 0;
    }
  }

  else
  {
    VAR_21 = 10;
  }


  if (VAR_22
      && ((VAR_17 - VAR_16) >= 2)
      && (VAR_19 == VAR_2))
  {
    ecma_char_t VAR_23 = *VAR_14;
    if (VAR_23 == VAR_4 || VAR_23 == VAR_9)
    {

      VAR_16 = ++VAR_14;
      VAR_21 = 16;
    }
  }


  VAR_14 = VAR_16;
  while (VAR_14 < VAR_15)
  {
    ecma_char_t VAR_24 = *VAR_14++;
    int32_t VAR_25;

    if ((VAR_24 >= VAR_3 && VAR_24 <= VAR_5))
    {
      VAR_25 = VAR_24 - VAR_3 + 10;
    }
    else if ((VAR_24 >= VAR_8 && VAR_24 <= VAR_10))
    {
      VAR_25 = VAR_24 - VAR_8 + 10;
    }
    else if (FUNC_7 (VAR_24))
    {
      VAR_25 = VAR_24 - VAR_2;
    }
    else
    {

      VAR_25 = VAR_21;
    }

    if (!(VAR_25 < VAR_21))
    {
      VAR_17 = --VAR_14;
      break;
    }
  }


  if (VAR_17 == VAR_16)
  {
    return FUNC_3 ();
  }

  ecma_number_t VAR_26 = VAR_1;
  ecma_number_t VAR_27 = 1.0f;


  VAR_14 = VAR_17;

  while (VAR_14 > VAR_16)
  {
    ecma_char_t VAR_28 = *(--VAR_14);
    ecma_number_t VAR_29 = VAR_0;

    if ((VAR_28 >= VAR_3 && VAR_28 <= VAR_5))
    {
      VAR_29 = (ecma_number_t) VAR_28 - VAR_3 + 10;
    }
    else if ((VAR_28 >= VAR_8 && VAR_28 <= VAR_10))
    {
      VAR_29 = (ecma_number_t) VAR_28 - VAR_8 + 10;
    }
    else
    {
      FUNC_0 (FUNC_7 (VAR_28));
      VAR_29 = (ecma_number_t) VAR_28 - VAR_2;
    }

    VAR_26 += VAR_29 * VAR_27;
    VAR_27 *= (ecma_number_t) VAR_21;
  }


  if (VAR_18 < 0)
  {
    VAR_26 *= (ecma_number_t) VAR_18;
  }

  return FUNC_4 (VAR_26);
}
