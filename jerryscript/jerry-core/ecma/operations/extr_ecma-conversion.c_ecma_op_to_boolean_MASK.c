
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ecma_value_t ;
typedef int ecma_string_t ;
typedef int ecma_number_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int * FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

bool
FUNC_18 (ecma_value_t VAR_0)
{
  FUNC_2 (VAR_0);

  if (FUNC_10 (VAR_0))
  {
    FUNC_1 (FUNC_5 (VAR_0)
                  || FUNC_13 (VAR_0)
                  || FUNC_8 (VAR_0));

    return FUNC_12 (VAR_0);
  }

  if (FUNC_7 (VAR_0))
  {
    return (VAR_0 != FUNC_14 (0));
  }

  if (FUNC_6 (VAR_0))
  {
    ecma_number_t VAR_1 = FUNC_3 (VAR_0);

    return (!FUNC_15 (VAR_1) && !FUNC_16 (VAR_1));
  }

  if (FUNC_11 (VAR_0))
  {
    ecma_string_t *VAR_2 = FUNC_4 (VAR_0);

    return !FUNC_17 (VAR_2);
  }

  FUNC_1 (FUNC_9 (VAR_0) || FUNC_0 (VAR_0));

  return 1;
}
