
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ecma_value_t ;
typedef int ecma_string_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

ecma_value_t
FUNC_14 (ecma_value_t VAR_5,
                                     ecma_value_t VAR_6,
                                     bool VAR_7)
{
  ecma_value_t VAR_8 = VAR_1;


  ecma_value_t VAR_9 = FUNC_13 (VAR_5, VAR_0);
  if (FUNC_0 (VAR_9))
  {
    return VAR_9;
  }

  ecma_value_t VAR_10 = FUNC_13 (VAR_6, VAR_0);
  if (FUNC_0 (VAR_10))
  {
    FUNC_5 (VAR_9);
    return VAR_10;
  }

  const ecma_value_t VAR_11 = VAR_7 ? VAR_9 : VAR_10;
  const ecma_value_t VAR_12 = VAR_7 ? VAR_10 : VAR_9;

  const bool VAR_13 = FUNC_7 (VAR_11);
  const bool VAR_14 = FUNC_7 (VAR_12);

  if (!(VAR_13 && VAR_14))
  {



    FUNC_2 (VAR_3, VAR_11, VAR_8);
    FUNC_2 (VAR_4, VAR_12, VAR_8);


    if (FUNC_10 (VAR_3)
        || FUNC_10 (VAR_4))
    {

      VAR_8 = VAR_2;
    }
    else
    {
      bool VAR_15 = (VAR_3 < VAR_4);


      bool VAR_16;

      if (VAR_3 == VAR_4
          || (FUNC_12 (VAR_3)
              && FUNC_12 (VAR_4)))
      {

        VAR_16 = 0;
      }
      else if (FUNC_9 (VAR_3)
               && !FUNC_11 (VAR_3))
      {

        VAR_16 = 0;
      }
      else if (FUNC_9 (VAR_4)
               && !FUNC_11 (VAR_4))
      {

        VAR_16 = 1;
      }
      else if (FUNC_9 (VAR_4)
               && FUNC_11 (VAR_4))
      {

        VAR_16 = 0;
      }
      else if (FUNC_9 (VAR_3)
               && FUNC_11 (VAR_3))
      {

        VAR_16 = 1;
      }
      else
      {

        FUNC_3 (!FUNC_10 (VAR_3)
                      && !FUNC_9 (VAR_3));
        FUNC_3 (!FUNC_10 (VAR_4)
                      && !FUNC_9 (VAR_4));
        FUNC_3 (!(FUNC_12 (VAR_3)
                        && FUNC_12 (VAR_4)));

        if (VAR_3 < VAR_4)
        {
          VAR_16 = 1;
        }
        else
        {
          VAR_16 = 0;
        }
      }

      FUNC_3 (VAR_16 == VAR_15);


      VAR_8 = FUNC_8 (VAR_15);
    }

    FUNC_1 (VAR_4);
    FUNC_1 (VAR_3);
  }
  else
  {
    FUNC_3 (VAR_13 && VAR_14);

    ecma_string_t *VAR_17 = FUNC_6 (VAR_11);
    ecma_string_t *VAR_18 = FUNC_6 (VAR_12);

    bool VAR_19 = FUNC_4 (VAR_17, VAR_18);

    VAR_8 = FUNC_8 (VAR_19);
  }

  FUNC_5 (VAR_10);
  FUNC_5 (VAR_9);

  return VAR_8;
}
