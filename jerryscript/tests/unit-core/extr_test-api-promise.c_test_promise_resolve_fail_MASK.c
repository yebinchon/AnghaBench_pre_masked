
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef scalar_t__ jerry_promise_state_t ;
typedef int jerry_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12 (void)
{
  jerry_value_t VAR_3 = FUNC_3 ();


  {
    jerry_value_t VAR_4 = FUNC_5 (VAR_3);
    FUNC_0 (FUNC_11 (VAR_4));

    jerry_promise_state_t VAR_5 = FUNC_6 (VAR_3);
    FUNC_0 (VAR_5 == VAR_1);

    FUNC_8 (VAR_4);
  }


  {
    jerry_value_t VAR_6 = FUNC_1 (VAR_0, (const jerry_char_t *) "resolve_fail");
    jerry_value_t VAR_7 = FUNC_7 (VAR_6, 1);
    jerry_value_t VAR_8 = FUNC_9 (VAR_3, VAR_7, 0);
    FUNC_8 (VAR_7);

    jerry_value_t VAR_9 = FUNC_5 (VAR_3);

    FUNC_0 (FUNC_10 (VAR_9));
    FUNC_0 (FUNC_4 (VAR_9) == VAR_0);

    jerry_promise_state_t VAR_10 = FUNC_6 (VAR_3);
    FUNC_0 (VAR_10 == VAR_2);

    FUNC_8 (VAR_9);

    FUNC_8 (VAR_8);
  }


  {
    jerry_value_t VAR_11 = FUNC_9 (VAR_3, FUNC_2 (50), 1);

    jerry_value_t VAR_12 = FUNC_5 (VAR_3);
    FUNC_0 (FUNC_10 (VAR_12));
    FUNC_0 (FUNC_4 (VAR_12) == VAR_0);

    jerry_promise_state_t VAR_13 = FUNC_6 (VAR_3);
    FUNC_0 (VAR_13 == VAR_2);

    FUNC_8 (VAR_12);

    FUNC_8 (VAR_11);
  }

  FUNC_8 (VAR_3);
}
