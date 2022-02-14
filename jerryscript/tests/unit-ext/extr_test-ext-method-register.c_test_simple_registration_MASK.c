
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_4__ {int registered; int result; } ;
typedef TYPE_1__ jerryx_register_result ;
typedef int jerryx_property_entry ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,double) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int const*,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 double FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int *,TYPE_1__) ;
 TYPE_1__ FUNC_20 (int ,int *) ;
 int FUNC_21 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_22 (char const*) ;

__attribute__((used)) static void
FUNC_23 (void)
{
  FUNC_14 (VAR_0);

  jerry_value_t VAR_2 = FUNC_9 ();


  jerryx_property_entry VAR_3[] =
  {
    FUNC_1 ("hello", VAR_1),
    FUNC_3 ("my_number", 42.5),
    FUNC_4 ("my_str", "super_str"),
    FUNC_5 ("my_str_sz", "super_str", 6),
    FUNC_0 ("my_bool", 1),
    FUNC_0 ("my_bool_false", 0),
    FUNC_6 ("my_non_value"),
    FUNC_2 (),
  };

  jerryx_register_result VAR_4 = FUNC_20 (VAR_2, VAR_3);

  FUNC_7 (VAR_4.registered == 7);
  FUNC_7 (FUNC_18 (VAR_4.result));

  FUNC_19 (VAR_3, VAR_4);
  FUNC_15 (VAR_4.result);

  jerry_value_t VAR_5 = FUNC_12 ();
  FUNC_21 (VAR_5, "test", VAR_2);
  FUNC_15 (VAR_2);
  FUNC_15 (VAR_5);

  {
    const char *VAR_6 = "test.my_number";
    jerry_value_t VAR_7 = FUNC_10 ((const jerry_char_t *) VAR_6, FUNC_22 (VAR_6), 0);
    FUNC_7 (FUNC_17 (VAR_7));
    FUNC_7 (FUNC_13 (VAR_7) == 42.5);
    FUNC_15 (VAR_7);
  }

  {
    const char *VAR_8 = "test.my_str_sz === 'super_'";
    jerry_value_t VAR_9 = FUNC_10 ((const jerry_char_t *) VAR_8, FUNC_22 (VAR_8), 0);
    FUNC_7 (FUNC_16 (VAR_9));
    FUNC_7 (FUNC_11 (VAR_9) == 1);
    FUNC_15 (VAR_9);
  }

  {
    const char *VAR_10 = "test.my_str === 'super_str'";
    jerry_value_t VAR_11 = FUNC_10 ((const jerry_char_t *) VAR_10, FUNC_22 (VAR_10), 0);
    FUNC_7 (FUNC_16 (VAR_11));
    FUNC_7 (FUNC_11 (VAR_11) == 1);
    FUNC_15 (VAR_11);
  }

  {
    const char *VAR_12 = "test.my_bool";
    jerry_value_t VAR_13 = FUNC_10 ((const jerry_char_t *) VAR_12, FUNC_22 (VAR_12), 0);
    FUNC_7 (FUNC_16 (VAR_13));
    FUNC_7 (FUNC_11 (VAR_13) == 1);
    FUNC_15 (VAR_13);
  }

  {
    const char *VAR_14 = "test.my_bool_false";
    jerry_value_t VAR_15 = FUNC_10 ((const jerry_char_t *) VAR_14, FUNC_22 (VAR_14), 0);
    FUNC_7 (FUNC_16 (VAR_15));
    FUNC_7 (FUNC_11 (VAR_15) == 0);
    FUNC_15 (VAR_15);
  }

  {
    const char *VAR_16 = "test.my_non_value";
    jerry_value_t VAR_17 = FUNC_10 ((const jerry_char_t *) VAR_16, FUNC_22 (VAR_16), 0);
    FUNC_7 (FUNC_18 (VAR_17));
    FUNC_15 (VAR_17);
  }

  {
    const char *VAR_18 = "test.hello(33, 42, 2);";
    jerry_value_t VAR_19 = FUNC_10 ((const jerry_char_t *) VAR_18, FUNC_22 (VAR_18), 0);
    FUNC_7 (FUNC_17 (VAR_19));
    FUNC_7 ((uint32_t) FUNC_13 (VAR_19) == 3u);
    FUNC_15 (VAR_19);
  }

  {
    const char *VAR_20 = "test.hello();";
    jerry_value_t VAR_21 = FUNC_10 ((const jerry_char_t *) VAR_20, FUNC_22 (VAR_20), 0);
    FUNC_7 (FUNC_17 (VAR_21));
    FUNC_7 ((uint32_t) FUNC_13 (VAR_21) == 0u);
    FUNC_15 (VAR_21);
  }

  FUNC_8 ();
}
