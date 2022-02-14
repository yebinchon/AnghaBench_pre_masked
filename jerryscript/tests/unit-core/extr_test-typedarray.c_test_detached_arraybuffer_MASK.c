
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int types ;
typedef int jerry_value_t ;
typedef int jerry_typedarray_type_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__ const,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ const FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (void)
{
  static jerry_typedarray_type_t VAR_1[] =
  {
    129,
    128,
    132,
    131,
    134,
    130,
    133,
    136,
    135,
  };


  {
    uint8_t VAR_2[1];
    const uint32_t VAR_3 = 1;
    jerry_value_t VAR_4 = FUNC_1 (VAR_3, VAR_2, ((void*)0));
    FUNC_0 (!FUNC_11 (VAR_4));
    FUNC_0 (FUNC_10 (VAR_4));
    FUNC_0 (FUNC_5 (VAR_4) == VAR_3);

    jerry_value_t VAR_5 = FUNC_8 (VAR_4);
    FUNC_0 (!FUNC_11 (VAR_5));
    FUNC_0 (FUNC_6 (VAR_5));
    FUNC_9 (VAR_5);

    jerry_value_t VAR_6 = FUNC_4 (VAR_4);
    FUNC_0 (!FUNC_11 (VAR_6));
    FUNC_9 (VAR_6);

    for (size_t VAR_7 = 0; VAR_7 < (sizeof (VAR_1) / sizeof (VAR_1[0])); VAR_7++)
    {
      jerry_value_t VAR_8 = FUNC_3 (VAR_1[VAR_7], VAR_4, 0, 4);
      FUNC_0 (FUNC_11 (VAR_8));
      FUNC_0 (FUNC_7 (VAR_8) == VAR_0);
      FUNC_9 (VAR_8);
    }

    FUNC_9 (VAR_4);
  }


  {
    uint8_t VAR_9[1];
    const uint32_t VAR_10 = 1;
    jerry_value_t VAR_11 = FUNC_1 (VAR_10, VAR_9, ((void*)0));
    FUNC_0 (!FUNC_11 (VAR_11));
    FUNC_0 (FUNC_10 (VAR_11));
    FUNC_0 (FUNC_5 (VAR_11) == VAR_10);

    jerry_value_t VAR_12 = FUNC_8 (VAR_11);
    FUNC_0 (!FUNC_11 (VAR_12));
    FUNC_0 (FUNC_6 (VAR_12));
    FUNC_9 (VAR_12);

    jerry_value_t VAR_13 = FUNC_4 (VAR_11);
    FUNC_0 (!FUNC_11 (VAR_13));
    FUNC_9 (VAR_13);

    for (size_t VAR_14 = 0; VAR_14 < (sizeof (VAR_1) / sizeof (VAR_1[0])); VAR_14++)
    {
      jerry_value_t VAR_15 = FUNC_2 (VAR_1[VAR_14], VAR_11);
      FUNC_0 (FUNC_11 (VAR_15));
      FUNC_0 (FUNC_7 (VAR_15) == VAR_0);
      FUNC_9 (VAR_15);
    }

    FUNC_9 (VAR_11);
  }
}
