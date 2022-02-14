
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
typedef size_t jerry_size_t ;
typedef int jerry_char_t ;
typedef int args ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char const*) ;
 int FUNC_4 (int,int ,int*,size_t) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int const*) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *,TYPE_1__) ;
 TYPE_1__ FUNC_20 (int,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_21 (void)
{
  FUNC_14 (VAR_0);

  const char *VAR_2 = "prop_ok";
  const char *VAR_3 = "prop_err";
  const char *VAR_4 = "prop_not";
  jerry_value_t VAR_5 = FUNC_7 ();
  FUNC_3 (VAR_5, VAR_3);

  jerryx_property_entry VAR_6[] =
  {
    FUNC_0 (VAR_2, VAR_1),
    FUNC_0 (VAR_3, VAR_1),
    FUNC_0 (VAR_4, VAR_1),
    FUNC_1 (),
  };

  jerryx_register_result VAR_7 = FUNC_20 (VAR_5, VAR_6);

  FUNC_2 (VAR_7.registered == 1);
  FUNC_2 (FUNC_16 (VAR_7.result));

  FUNC_19 (VAR_6, VAR_7);
  FUNC_15 (VAR_7.result);

  {

    jerry_value_t VAR_8 = FUNC_8 ((const jerry_char_t *) VAR_2);
    jerry_value_t VAR_9 = FUNC_13 (VAR_5, VAR_8);
    FUNC_2 (FUNC_10 (VAR_9) == 1);
    FUNC_15 (VAR_9);


    jerry_value_t VAR_10 = FUNC_12 (VAR_5, VAR_8);
    FUNC_2 (FUNC_17 (VAR_10) == 1);
    jerry_value_t VAR_11[2] =
    {
      FUNC_6 (22),
      FUNC_6 (-3),
    };
    jerry_size_t VAR_12 = sizeof (VAR_11) / sizeof (jerry_value_t);
    jerry_value_t VAR_13 = FUNC_4 (VAR_10,
                                                     FUNC_9 (),
                                                     VAR_11,
                                                     VAR_12);
    FUNC_2 (FUNC_18 (VAR_13) == 1);
    FUNC_2 ((uint32_t) FUNC_11 (VAR_13) == 2u);
    FUNC_15 (VAR_13);
    for (jerry_size_t VAR_14 = 0; VAR_14 < VAR_12; VAR_14++)
    {
      FUNC_15 (VAR_11[VAR_14]);
    }
    FUNC_15 (VAR_10);
    FUNC_15 (VAR_8);
  }

  {

    jerry_value_t VAR_15 = FUNC_8 ((const jerry_char_t *) VAR_3);
    jerry_value_t VAR_16 = FUNC_13 (VAR_5, VAR_15);
    FUNC_2 (FUNC_10 (VAR_16) == 1);
    FUNC_15 (VAR_16);

    jerry_value_t VAR_17 = FUNC_17 (VAR_15);
    FUNC_2 (FUNC_17 (VAR_17) == 0);
    FUNC_15 (VAR_15);
  }

  {
    jerry_value_t VAR_18 = FUNC_8 ((const jerry_char_t *) VAR_4);
    jerry_value_t VAR_19 = FUNC_13 (VAR_5, VAR_18);
    FUNC_2 (FUNC_10 (VAR_19) == 0);
    FUNC_15 (VAR_19);
    FUNC_15 (VAR_18);
  }

  FUNC_15 (VAR_5);

  FUNC_5 ();
}
