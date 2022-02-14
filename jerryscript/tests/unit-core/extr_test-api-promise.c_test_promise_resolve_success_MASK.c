
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef scalar_t__ jerry_promise_state_t ;
typedef int jerry_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17 (void)
{
  jerry_value_t VAR_2 = FUNC_3 ();


  {
    jerry_value_t VAR_3 = FUNC_7 (VAR_2);
    FUNC_0 (FUNC_16 (VAR_3));

    jerry_promise_state_t VAR_4 = FUNC_8 (VAR_2);
    FUNC_0 (VAR_4 == VAR_1);

    FUNC_10 (VAR_3);
  }

  jerry_value_t VAR_5 = FUNC_2 ();
  {
    jerry_value_t VAR_6 = FUNC_4 ((const jerry_char_t *) "key_one");
    jerry_value_t VAR_7 = FUNC_12 (VAR_5, VAR_6, FUNC_1 (3));
    FUNC_0 (FUNC_13 (VAR_7) && (FUNC_5 (VAR_7) == 1));
    FUNC_10 (VAR_7);
    FUNC_10 (VAR_6);
  }


  {
    jerry_value_t VAR_8 = FUNC_11 (VAR_2, VAR_5, 1);


    FUNC_10 (VAR_5);

    jerry_value_t VAR_9 = FUNC_7 (VAR_2);
    {
      FUNC_0 (FUNC_15 (VAR_9));
      jerry_value_t VAR_10 = FUNC_4 ((const jerry_char_t *) "key_one");
      jerry_value_t VAR_11 = FUNC_9 (VAR_9, VAR_10);
      FUNC_0 (FUNC_14 (VAR_11));
      FUNC_0 (FUNC_6 (VAR_11) == 3.0);

      FUNC_10 (VAR_11);
      FUNC_10 (VAR_10);
    }

    jerry_promise_state_t VAR_12 = FUNC_8 (VAR_2);
    FUNC_0 (VAR_12 == VAR_0);

    FUNC_10 (VAR_9);

    FUNC_10 (VAR_8);
  }


  {
    jerry_value_t VAR_13 = FUNC_11 (VAR_2, FUNC_1 (50), 0);

    jerry_value_t VAR_14 = FUNC_7 (VAR_2);
    {
      FUNC_0 (FUNC_15 (VAR_14));
      jerry_value_t VAR_15 = FUNC_4 ((const jerry_char_t *) "key_one");
      jerry_value_t VAR_16 = FUNC_9 (VAR_14, VAR_15);
      FUNC_0 (FUNC_14 (VAR_16));
      FUNC_0 (FUNC_6 (VAR_16) == 3.0);

      FUNC_10 (VAR_16);
      FUNC_10 (VAR_15);
    }

    jerry_promise_state_t VAR_17 = FUNC_8 (VAR_2);
    FUNC_0 (VAR_17 == VAR_0);

    FUNC_10 (VAR_14);

    FUNC_10 (VAR_13);
  }

  FUNC_10 (VAR_2);
}
