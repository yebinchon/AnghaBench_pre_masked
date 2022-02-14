
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_object_t ;
typedef int ecma_length_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int const) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int const) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int const) ;

ecma_value_t
FUNC_15 (uint16_t VAR_6,

                                                ecma_value_t VAR_7,
                                                const ecma_value_t VAR_8[],

                                                ecma_length_t VAR_9)
{
  FUNC_2 (VAR_9);


  if (VAR_6 <= VAR_3)
  {
    if (VAR_6 == VAR_2)
    {
      return FUNC_7 (VAR_7);
    }

    FUNC_1 (VAR_6 <= VAR_3);

    return FUNC_8 (VAR_7);
  }

  if (VAR_6 <= VAR_1)
  {
    if (VAR_6 == VAR_1)
    {

      if (!FUNC_12 (VAR_8[0]))
      {
        return VAR_5;
      }
    }

    ecma_value_t VAR_10 = FUNC_13 (VAR_7);

    if (FUNC_0 (VAR_10))
    {
      return VAR_10;
    }

    ecma_object_t *VAR_11 = FUNC_11 (VAR_10);

    ecma_value_t VAR_12;

    if (VAR_6 == VAR_1)
    {
      VAR_12 = FUNC_4 (VAR_11, VAR_8[0]);
    }
    else
    {
      VAR_12 = FUNC_6 (VAR_11);
    }

    FUNC_10 (VAR_11);

    return VAR_12;
  }

  FUNC_1 (VAR_6 >= VAR_0);

  ecma_string_t *VAR_13 = FUNC_14 (VAR_8[0]);

  if (VAR_13 == ((void*)0))
  {
    return VAR_4;
  }

  ecma_value_t VAR_14 = FUNC_13 (VAR_7);

  if (FUNC_0 (VAR_14))
  {
    FUNC_9 (VAR_13);
    return VAR_14;
  }

  ecma_object_t *VAR_15 = FUNC_11 (VAR_14);

  ecma_value_t VAR_16;

  if (VAR_6 == VAR_0)
  {
    VAR_16 = FUNC_3 (VAR_15, VAR_13);
  }
  else
  {
    VAR_16 = FUNC_5 (VAR_15, VAR_13);
  }

  FUNC_9 (VAR_13);
  FUNC_10 (VAR_15);

  return VAR_16;
}
