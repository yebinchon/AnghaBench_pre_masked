
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int test_eval_function ;
struct TYPE_3__ {scalar_t__ type_info; int value; } ;
typedef TYPE_1__ test_entry_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_type_t ;
typedef char const jerry_char_t ;
typedef int entries ;


 TYPE_1__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 (char const*,int,int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int VAR_14 ;

int
FUNC_21 (void)
{
  FUNC_2 ();

  FUNC_17 (VAR_2);

  const jerry_char_t VAR_15[] = "function demo(a) { return a + 1; }; demo";

  test_entry_t VAR_16[] =
  {
    FUNC_0 (VAR_9, FUNC_9 (-33.0)),
    FUNC_0 (VAR_9, FUNC_9 (3)),
    FUNC_0 (VAR_9, FUNC_11 ()),
    FUNC_0 (VAR_9, FUNC_10 (0)),
    FUNC_0 (VAR_9, FUNC_10 (1)),

    FUNC_0 (VAR_4, FUNC_5 (1)),
    FUNC_0 (VAR_4, FUNC_5 (0)),

    FUNC_0 (VAR_13, FUNC_15 ()),

    FUNC_0 (VAR_10, FUNC_12 ()),
    FUNC_0 (VAR_10, FUNC_4 (10)),
    FUNC_0 (VAR_5, FUNC_6 (VAR_0, (const jerry_char_t *) "error")),

    FUNC_0 (VAR_8, FUNC_8 ()),

    FUNC_0 (VAR_6, FUNC_16 (VAR_15,
                                            sizeof (VAR_15) - 1,
                                            VAR_3)),
    FUNC_0 (VAR_6, FUNC_7 (VAR_14)),

    FUNC_0 (VAR_11, FUNC_13 (VAR_15)),
    FUNC_0 (VAR_11, FUNC_13 ((jerry_char_t *) "")),
  };

  for (size_t VAR_17 = 0; VAR_17 < sizeof (VAR_16) / sizeof (VAR_16[0]); VAR_17++)
  {
    jerry_type_t VAR_18 = FUNC_20 (VAR_16[VAR_17].value);

    FUNC_1 (VAR_18 != VAR_7);
    FUNC_1 (VAR_18 == VAR_16[VAR_17].type_info);

    FUNC_19 (VAR_16[VAR_17].value);
  }

  if (FUNC_18 (VAR_1))
  {
    jerry_value_t VAR_19 = FUNC_13 ((jerry_char_t *) "foo");
    jerry_value_t VAR_20 = FUNC_14 (VAR_19);
    jerry_type_t VAR_21 = FUNC_20 (VAR_20);

    FUNC_1 (VAR_21 != VAR_7);
    FUNC_1 (VAR_21 == VAR_12);

    FUNC_19 (VAR_20);
    FUNC_19 (VAR_19);
  }

  FUNC_3 ();

  return 0;
}
