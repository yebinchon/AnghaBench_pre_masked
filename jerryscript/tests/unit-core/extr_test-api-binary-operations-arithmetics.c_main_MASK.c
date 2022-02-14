
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int tests ;
typedef int test_nans ;
struct TYPE_8__ {int rhs; int lhs; int op; } ;
typedef TYPE_1__ test_nan_entry_t ;
typedef TYPE_1__ test_error_entry_t ;
struct TYPE_9__ {int op; int expected; int rhs; int lhs; } ;
typedef TYPE_3__ test_entry_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;
typedef int error_tests ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__ FUNC_3 (int ,int ) ;
 TYPE_1__ FUNC_4 (int ,int ,int ) ;
 TYPE_1__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int const*) ;
 int FUNC_11 () ;
 int FUNC_12 (double) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int const*) ;
 int FUNC_15 () ;
 int FUNC_16 (int const*,int,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 double FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;

int
FUNC_24 (void)
{
  FUNC_2 ();

  FUNC_19 (VAR_7);

  jerry_value_t VAR_9 = FUNC_16 ((const jerry_char_t *) "o={x:1};o", 9, VAR_8);
  jerry_value_t VAR_10 = FUNC_16 ((const jerry_char_t *) "o={x:1};o", 9, VAR_8);
  jerry_value_t VAR_11 = FUNC_10 (VAR_6, (const jerry_char_t *) "error");

  test_nan_entry_t VAR_12[] =
  {

    FUNC_5 (VAR_0, FUNC_12 (3.1), FUNC_15 ()),
    FUNC_5 (VAR_0, FUNC_15 (), FUNC_15 ()),
    FUNC_5 (VAR_0, FUNC_15 (), FUNC_11 ()),


    FUNC_3 (FUNC_12 (3.1), FUNC_15 ()),
    FUNC_3 (FUNC_14 ((const jerry_char_t *) "foo"), FUNC_14 ((const jerry_char_t *) "bar")),
    FUNC_3 (FUNC_14 ((const jerry_char_t *) "foo"), FUNC_15 ()),
    FUNC_3 (FUNC_14 ((const jerry_char_t *) "foo"), FUNC_11 ()),
    FUNC_3 (FUNC_14 ((const jerry_char_t *) "foo"), FUNC_12 (5.0)),
    FUNC_3 (FUNC_15 (), FUNC_14 ((const jerry_char_t *) "foo")),
    FUNC_3 (FUNC_11 (), FUNC_14 ((const jerry_char_t *) "foo")),
    FUNC_3 (FUNC_12 (5.0), FUNC_14 ((const jerry_char_t *) "foo")),
    FUNC_3 (FUNC_15 (), FUNC_15 ()),
    FUNC_3 (FUNC_15 (), FUNC_11 ()),
    FUNC_3 (FUNC_11 (), FUNC_15 ()),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_6 (VAR_9)),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_6 (VAR_10)),
    FUNC_3 (FUNC_6 (VAR_10), FUNC_6 (VAR_9)),
    FUNC_3 (FUNC_6 (VAR_10), FUNC_15 ()),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_14 ((const jerry_char_t *) "foo")),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_11 ()),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_9 (1)),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_9 (0)),
    FUNC_3 (FUNC_6 (VAR_9), FUNC_12 (5.0)),


    FUNC_5 (VAR_1, FUNC_9 (0), FUNC_9 (0)),
    FUNC_5 (VAR_1, FUNC_12 (0.0), FUNC_12 (0.0)),
    FUNC_5 (VAR_1, FUNC_11 (), FUNC_11 ()),


    FUNC_5 (VAR_3, FUNC_9 (1), FUNC_9 (0)),
    FUNC_5 (VAR_3, FUNC_9 (0), FUNC_9 (0)),
    FUNC_5 (VAR_3, FUNC_12 (0.0), FUNC_12 (0.0)),
    FUNC_5 (VAR_3, FUNC_11 (), FUNC_11 ()),
  };

  for (uint32_t VAR_13 = 0; VAR_13 < sizeof (VAR_12) / sizeof (test_nan_entry_t); VAR_13++)
  {
    jerry_value_t VAR_14 = FUNC_7 (VAR_12[VAR_13].op, VAR_12[VAR_13].lhs, VAR_12[VAR_13].rhs);
    FUNC_1 (FUNC_23 (VAR_14));

    double VAR_15 = FUNC_18 (VAR_14);

    FUNC_1 (VAR_15 != VAR_15);

    FUNC_20 (VAR_12[VAR_13].lhs);
    FUNC_20 (VAR_12[VAR_13].rhs);
    FUNC_20 (VAR_14);
  }

  test_entry_t VAR_16[] =
  {

    FUNC_0 (VAR_0, FUNC_12 (5.0), FUNC_12 (5.0), FUNC_12 (10.0)),
    FUNC_0 (VAR_0, FUNC_12 (3.1), FUNC_12 (10), FUNC_12 (13.1)),
    FUNC_0 (VAR_0, FUNC_12 (3.1), FUNC_9 (1), FUNC_12 (4.1)),
    FUNC_0 (VAR_0,
       FUNC_14 ((const jerry_char_t *) "foo"),
       FUNC_14 ((const jerry_char_t *) "bar"),
       FUNC_14 ((const jerry_char_t *) "foobar")),
    FUNC_0 (VAR_0,
       FUNC_14 ((const jerry_char_t *) "foo"),
       FUNC_15 (),
       FUNC_14 ((const jerry_char_t *) "fooundefined")),
    FUNC_0 (VAR_0,
       FUNC_14 ((const jerry_char_t *) "foo"),
       FUNC_11 (),
       FUNC_14 ((const jerry_char_t *) "foonull")),
    FUNC_0 (VAR_0,
       FUNC_14 ((const jerry_char_t *) "foo"),
       FUNC_12 (5.0),
       FUNC_14 ((const jerry_char_t *) "foo5")),

    FUNC_0 (VAR_0, FUNC_11 (), FUNC_11 (), FUNC_12 (0.0)),
    FUNC_0 (VAR_0, FUNC_9 (1), FUNC_9 (1), FUNC_12 (2.0)),
    FUNC_0 (VAR_0, FUNC_9 (1), FUNC_9 (0), FUNC_12 (1.0)),
    FUNC_0 (VAR_0, FUNC_9 (0), FUNC_9 (1), FUNC_12 (1.0)),
    FUNC_0 (VAR_0, FUNC_9 (0), FUNC_9 (0), FUNC_12 (0.0)),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_6 (VAR_9),
       FUNC_14 ((const jerry_char_t *) "[object Object][object Object]")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_6 (VAR_10),
       FUNC_14 ((const jerry_char_t *) "[object Object][object Object]")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_10),
       FUNC_6 (VAR_9),
       FUNC_14 ((const jerry_char_t *) "[object Object][object Object]")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_11 (),
       FUNC_14 ((const jerry_char_t *) "[object Object]null")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_15 (),
       FUNC_14 ((const jerry_char_t *) "[object Object]undefined")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_9 (1),
       FUNC_14 ((const jerry_char_t *) "[object Object]true")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_9 (0),
       FUNC_14 ((const jerry_char_t *) "[object Object]false")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_12 (5.0),
       FUNC_14 ((const jerry_char_t *) "[object Object]5")),
    FUNC_0 (VAR_0,
       FUNC_6 (VAR_9),
       FUNC_14 ((const jerry_char_t *) "foo"),
       FUNC_14 ((const jerry_char_t *) "[object Object]foo")),


    FUNC_0 (VAR_5, FUNC_12 (5.0), FUNC_12 (5.0), FUNC_12 (0.0)),
    FUNC_0 (VAR_5, FUNC_12 (3.1), FUNC_12 (10), FUNC_12 (-6.9)),
    FUNC_0 (VAR_5, FUNC_12 (3.1), FUNC_9 (1), FUNC_12 (2.1)),
    FUNC_0 (VAR_5, FUNC_9 (1), FUNC_9 (1), FUNC_12 (0.0)),
    FUNC_0 (VAR_5, FUNC_9 (1), FUNC_9 (0), FUNC_12 (1.0)),
    FUNC_0 (VAR_5, FUNC_9 (0), FUNC_9 (1), FUNC_12 (-1.0)),
    FUNC_0 (VAR_5, FUNC_9 (0), FUNC_9 (0), FUNC_12 (0.0)),
    FUNC_0 (VAR_5, FUNC_11 (), FUNC_11 (), FUNC_12 (-0.0)),



    FUNC_0 (VAR_2, FUNC_12 (5.0), FUNC_12 (5.0), FUNC_12 (25.0)),
    FUNC_0 (VAR_2, FUNC_12 (3.1), FUNC_12 (10), FUNC_12 (31)),
    FUNC_0 (VAR_2, FUNC_12 (3.1), FUNC_9 (1), FUNC_12 (3.1)),
    FUNC_0 (VAR_2, FUNC_9 (1), FUNC_9 (1), FUNC_12 (1.0)),
    FUNC_0 (VAR_2, FUNC_9 (1), FUNC_9 (0), FUNC_12 (0.0)),
    FUNC_0 (VAR_2, FUNC_9 (0), FUNC_9 (1), FUNC_12 (0.0)),
    FUNC_0 (VAR_2, FUNC_9 (0), FUNC_9 (0), FUNC_12 (0.0)),
    FUNC_0 (VAR_2, FUNC_11 (), FUNC_11 (), FUNC_12 (0.0)),


    FUNC_0 (VAR_1, FUNC_12 (5.0), FUNC_12 (5.0), FUNC_12 (1.0)),
    FUNC_0 (VAR_1, FUNC_12 (3.1), FUNC_12 (10), FUNC_12 (0.31)),
    FUNC_0 (VAR_1, FUNC_12 (3.1), FUNC_9 (1), FUNC_12 (3.1)),
    FUNC_0 (VAR_1, FUNC_9 (1), FUNC_9 (1), FUNC_12 (1.0)),
    FUNC_0 (VAR_1,
       FUNC_9 (1),
       FUNC_9 (0),
       FUNC_13 (0)),
    FUNC_0 (VAR_1, FUNC_9 (0), FUNC_9 (1), FUNC_12 (0.0)),


    FUNC_0 (VAR_3, FUNC_12 (5.0), FUNC_12 (5.0), FUNC_12 (0.0)),
    FUNC_0 (VAR_3, FUNC_12 (5.0), FUNC_12 (2.0), FUNC_12 (1.0)),
    FUNC_0 (VAR_3, FUNC_12 (3.1), FUNC_12 (10), FUNC_12 (3.1)),
    FUNC_0 (VAR_3,
       FUNC_12 (3.1),
       FUNC_9 (1),
       FUNC_12 (0.10000000000000009)),
    FUNC_0 (VAR_3, FUNC_9 (1), FUNC_9 (1), FUNC_12 (0.0)),
    FUNC_0 (VAR_3, FUNC_9 (0), FUNC_9 (1), FUNC_12 (0.0)),

  };

  for (uint32_t VAR_17 = 0; VAR_17 < sizeof (VAR_16) / sizeof (test_entry_t); VAR_17++)
  {
    jerry_value_t VAR_18 = FUNC_7 (VAR_16[VAR_17].op, VAR_16[VAR_17].lhs, VAR_16[VAR_17].rhs);
    FUNC_1 (!FUNC_22 (VAR_18));

    jerry_value_t VAR_19 = FUNC_7 (VAR_4, VAR_18, VAR_16[VAR_17].expected);
    FUNC_1 (FUNC_21 (VAR_19) && FUNC_17 (VAR_19));
    FUNC_20 (VAR_19);

    FUNC_20 (VAR_16[VAR_17].lhs);
    FUNC_20 (VAR_16[VAR_17].rhs);
    FUNC_20 (VAR_16[VAR_17].expected);
    FUNC_20 (VAR_18);
  }

  jerry_value_t VAR_20 = FUNC_16 ((const jerry_char_t *) "o={valueOf:function(){throw 5}};o", 33, VAR_8);

  test_error_entry_t VAR_21[] =
  {

    FUNC_4 (VAR_0, FUNC_6 (VAR_11), FUNC_6 (VAR_11)),
    FUNC_4 (VAR_0, FUNC_6 (VAR_11), FUNC_15 ()),
    FUNC_4 (VAR_0, FUNC_15 (), FUNC_6 (VAR_11)),


    FUNC_3 (FUNC_6 (VAR_11), FUNC_6 (VAR_11)),
    FUNC_3 (FUNC_6 (VAR_11), FUNC_15 ()),
    FUNC_3 (FUNC_15 (), FUNC_6 (VAR_11)),


    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_15 ()),
    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_11 ()),
    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_9 (1)),
    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_9 (0)),
    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_6 (VAR_10)),
    FUNC_4 (VAR_0, FUNC_6 (VAR_20), FUNC_14 ((const jerry_char_t *) "foo")),


    FUNC_3 (FUNC_6 (VAR_20), FUNC_15 ()),
    FUNC_3 (FUNC_6 (VAR_20), FUNC_11 ()),
    FUNC_3 (FUNC_6 (VAR_20), FUNC_9 (1)),
    FUNC_3 (FUNC_6 (VAR_20), FUNC_9 (0)),
    FUNC_3 (FUNC_6 (VAR_20), FUNC_6 (VAR_10)),
    FUNC_3 (FUNC_6 (VAR_20), FUNC_14 ((const jerry_char_t *) "foo")),
  };

  for (uint32_t VAR_22 = 0; VAR_22 < sizeof (VAR_21) / sizeof (test_error_entry_t); VAR_22++)
  {
    jerry_value_t VAR_23 = FUNC_7 (VAR_16[VAR_22].op, VAR_21[VAR_22].lhs, VAR_21[VAR_22].rhs);
    FUNC_1 (FUNC_22 (VAR_23));
    FUNC_20 (VAR_21[VAR_22].lhs);
    FUNC_20 (VAR_21[VAR_22].rhs);
    FUNC_20 (VAR_23);
  }

  FUNC_20 (VAR_9);
  FUNC_20 (VAR_10);
  FUNC_20 (VAR_20);
  FUNC_20 (VAR_11);

  FUNC_8 ();

  return 0;
}
