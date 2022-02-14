
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test_values ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_error_t ;
typedef int jerry_char_t ;
typedef int errors ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,int const*) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int
FUNC_13 (void)
{
  FUNC_1 ();

  FUNC_10 (VAR_8);

  jerry_error_t VAR_9[] =
  {
    VAR_0,
    VAR_1,
    VAR_3,
    VAR_4,
    VAR_5,
    VAR_6,
    VAR_7
  };

  for (size_t VAR_10 = 0; VAR_10 < sizeof (VAR_9) / sizeof (VAR_9[0]); VAR_10++)
  {
    jerry_value_t VAR_11 = FUNC_4 (VAR_9[VAR_10], (const jerry_char_t *)"test");
    FUNC_0 (FUNC_12 (VAR_11));
    FUNC_0 (FUNC_8 (VAR_11) == VAR_9[VAR_10]);

    VAR_11 = FUNC_9 (VAR_11, 1);

    FUNC_0 (FUNC_8 (VAR_11) == VAR_9[VAR_10]);

    FUNC_11 (VAR_11);
  }

  jerry_value_t VAR_12[] =
  {
    FUNC_5 (11),
    FUNC_7 ((const jerry_char_t *) "message"),
    FUNC_3 (1),
    FUNC_6 (),
  };

  for (size_t VAR_13 = 0; VAR_13 < sizeof (VAR_12) / sizeof (VAR_12[0]); VAR_13++)
  {
    jerry_error_t VAR_14 = FUNC_8 (VAR_12[VAR_13]);
    FUNC_0 (VAR_14 == VAR_2);
    FUNC_11 (VAR_12[VAR_13]);
  }

  FUNC_2 ();
}
