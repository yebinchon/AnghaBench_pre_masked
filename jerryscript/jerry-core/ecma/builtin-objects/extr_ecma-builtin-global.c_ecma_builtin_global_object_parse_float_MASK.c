
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lit_utf8_size_t ;
typedef scalar_t__ lit_utf8_byte_t ;
typedef int ecma_value_t ;
typedef int ecma_number_t ;
typedef scalar_t__ ecma_char_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__ const**,scalar_t__*) ;
 int FUNC_4 (scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__* FUNC_6 (int ) ;

__attribute__((used)) static ecma_value_t
FUNC_7 (const lit_utf8_byte_t *VAR_7,

                                        lit_utf8_size_t VAR_8)

{
  if (VAR_8 <= 0)
  {
    return FUNC_0 ();
  }

  const lit_utf8_byte_t *VAR_9 = VAR_7;


  FUNC_3 (&VAR_9, &VAR_8);

  const lit_utf8_byte_t *VAR_10 = VAR_9 + VAR_8;
  const lit_utf8_byte_t *VAR_11 = VAR_9;
  const lit_utf8_byte_t *VAR_12 = VAR_10;

  bool VAR_13 = 0;
  ecma_char_t VAR_14;

  if (VAR_9 < VAR_10)
  {

    VAR_14 = *VAR_9;
    if (VAR_14 == VAR_3)
    {
      VAR_13 = 1;
    }

    if (VAR_14 == VAR_3 || VAR_14 == VAR_4)
    {

      VAR_11 = ++VAR_9;
    }
  }

  const lit_utf8_byte_t *VAR_15 = FUNC_6 (VAR_6);
  lit_utf8_byte_t *VAR_16 = (lit_utf8_byte_t *) VAR_15;
  lit_utf8_byte_t *VAR_17 = VAR_16 + sizeof (*VAR_15);


  while (VAR_9 < VAR_10
         && *VAR_9++ == *VAR_16++)
  {
    if (VAR_16 == VAR_17)
    {

      return FUNC_1 (FUNC_2 (VAR_13));
    }
  }


  VAR_9 = VAR_11;


  if (VAR_9 >= VAR_10)
  {
    return FUNC_0 ();
  }


  VAR_9 = VAR_11;

  VAR_14 = *VAR_9;

  bool VAR_18 = 0;
  bool VAR_19 = 0;


  if (FUNC_5 (VAR_14))
  {
    VAR_18 = 1;
    VAR_9++;

    while (VAR_9 < VAR_10)
    {
      VAR_14 = *VAR_9++;
      if (!FUNC_5 (VAR_14))
      {
        VAR_9--;
        break;
      }
    }
  }



  VAR_12 = VAR_9;
  if (VAR_9 < VAR_10)
  {
    VAR_14 = *VAR_9;


    if (VAR_14 == VAR_1)
    {
      VAR_9++;

      if (VAR_9 < VAR_10)
      {
        VAR_14 = *VAR_9;

        if (FUNC_5 (VAR_14))
        {
          VAR_19 = 1;


          while (VAR_9 < VAR_10)
          {
            VAR_14 = *VAR_9++;
            if (!FUNC_5 (VAR_14))
            {
              VAR_9--;
              break;
            }
          }


          VAR_12 = VAR_9;
        }
      }
    }
  }


  if (VAR_9 < VAR_10)
  {
    VAR_14 = *VAR_9++;
  }


  if ((VAR_14 == VAR_2 || VAR_14 == VAR_5)
      && (VAR_18 || VAR_19)
      && VAR_9 < VAR_10)
  {
    VAR_14 = *VAR_9++;


    if ((VAR_14 == VAR_4 || VAR_14 == VAR_3)
         && VAR_9 < VAR_10)
    {
      VAR_14 = *VAR_9++;
    }

    if (FUNC_5 (VAR_14))
    {

      while (VAR_9 < VAR_10)
      {
        VAR_14 = *VAR_9++;
        if (!FUNC_5 (VAR_14))
        {
          VAR_9--;
          break;
        }
      }


      VAR_12 = VAR_9;
    }
  }


  if (VAR_11 == VAR_12)
  {
    return FUNC_0 ();
  }


  ecma_number_t VAR_20 = FUNC_4 (VAR_11, (lit_utf8_size_t) (VAR_12 - VAR_11));

  if (VAR_13)
  {
    VAR_20 *= VAR_0;
  }

  return FUNC_1 (VAR_20);
}
