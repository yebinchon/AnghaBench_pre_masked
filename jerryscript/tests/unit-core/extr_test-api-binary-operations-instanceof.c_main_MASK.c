
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ expected; int rhs; int lhs; } ;
typedef TYPE_1__ test_entry_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;
typedef int error_tests ;
typedef int bool_tests ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (double) ;
 int FUNC_12 () ;
 int FUNC_13 (int const*) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int VAR_2 ;

int
FUNC_20 (void)
{
  FUNC_2 ();

  FUNC_16 (VAR_1);

  jerry_value_t VAR_3 = FUNC_12 ();
  jerry_value_t VAR_4 = FUNC_9 (VAR_2);

  jerry_value_t VAR_5 = FUNC_6 (VAR_4, ((void*)0), 0);

  jerry_value_t VAR_6 = FUNC_13 ((const jerry_char_t *) "prototype");
  jerry_value_t VAR_7 = FUNC_18 (VAR_4, VAR_6, VAR_3);
  FUNC_17 (VAR_6);
  FUNC_1 (!FUNC_19 (VAR_7));
  FUNC_17 (VAR_7);

  jerry_value_t VAR_8 = FUNC_6 (VAR_4, ((void*)0), 0);

  jerry_value_t VAR_9 = FUNC_8 (VAR_3, 0);

  test_entry_t VAR_10[] =
  {
    FUNC_0 (FUNC_3 (VAR_8), FUNC_3 (VAR_4), 1),
    FUNC_0 (FUNC_3 (VAR_5), FUNC_3 (VAR_4), 0),
    FUNC_0 (FUNC_3 (VAR_3), FUNC_3 (VAR_4), 0)
  };

  for (uint32_t VAR_11 = 0; VAR_11 < sizeof (VAR_10) / sizeof (test_entry_t); VAR_11++)
  {
    jerry_value_t VAR_12 = FUNC_4 (VAR_0,
                                                   VAR_10[VAR_11].lhs,
                                                   VAR_10[VAR_11].rhs);
    FUNC_1 (!FUNC_19 (VAR_12));
    FUNC_1 (FUNC_15 (VAR_12) == VAR_10[VAR_11].expected);
    FUNC_17 (VAR_10[VAR_11].lhs);
    FUNC_17 (VAR_10[VAR_11].rhs);
    FUNC_17 (VAR_12);
  }

  test_entry_t VAR_13[] =
  {
    FUNC_0 (FUNC_3 (VAR_4), FUNC_3 (VAR_8), 1),
    FUNC_0 (FUNC_14 (), FUNC_3 (VAR_4), 1),
    FUNC_0 (FUNC_3 (VAR_8), FUNC_14 (), 1),
    FUNC_0 (FUNC_3 (VAR_8), FUNC_3 (VAR_3), 1),
    FUNC_0 (FUNC_3 (VAR_9), FUNC_3 (VAR_4), 1),
    FUNC_0 (FUNC_3 (VAR_8), FUNC_3 (VAR_9), 1),
    FUNC_0 (FUNC_13 ((const jerry_char_t *) ""), FUNC_13 ((const jerry_char_t *) ""), 1),
    FUNC_0 (FUNC_13 ((const jerry_char_t *) ""), FUNC_11 (5.0), 1),
    FUNC_0 (FUNC_11 (5.0), FUNC_13 ((const jerry_char_t *) ""), 1),
    FUNC_0 (FUNC_7 (1), FUNC_7 (1), 1),
    FUNC_0 (FUNC_7 (1), FUNC_12 (), 1),
    FUNC_0 (FUNC_12 (), FUNC_7 (1), 1),
    FUNC_0 (FUNC_10 (), FUNC_12 (), 1),
    FUNC_0 (FUNC_12 (), FUNC_13 ((const jerry_char_t *) ""), 1)
  };

  for (uint32_t VAR_14 = 0; VAR_14 < sizeof (VAR_13) / sizeof (test_entry_t); VAR_14++)
  {
    jerry_value_t VAR_15 = FUNC_4 (VAR_0,
                                                   VAR_13[VAR_14].lhs,
                                                   VAR_13[VAR_14].rhs);
    FUNC_1 (FUNC_19 (VAR_15) == VAR_13[VAR_14].expected);
    FUNC_17 (VAR_13[VAR_14].lhs);
    FUNC_17 (VAR_13[VAR_14].rhs);
    FUNC_17 (VAR_15);
  }

  FUNC_17 (VAR_3);
  FUNC_17 (VAR_4);
  FUNC_17 (VAR_9);
  FUNC_17 (VAR_8);
  FUNC_17 (VAR_5);

  FUNC_5 ();

  return 0;
}
