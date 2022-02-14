
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int jerryx_arg_t ;
struct TYPE_3__ {int name_cnt; int c_arg_cnt; int * c_arg_p; int const** name_p; } ;
typedef TYPE_1__ jerryx_arg_object_props_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int ,int ) ;
 int FUNC_6 (double*,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (int const*,int const,int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static jerry_value_t
FUNC_9 (const jerry_value_t VAR_4,
                              const jerry_value_t VAR_5,
                              const jerry_value_t VAR_6[],
                              const jerry_length_t VAR_7)
{
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_5);

  bool VAR_8 = 0;
  double VAR_9 = 0;
  double VAR_10 = 3;

  jerryx_arg_object_props_t VAR_11;

  const char *VAR_12[] = { "prop1", "prop2", "prop3" };

  jerryx_arg_t VAR_13[] =
  {
    FUNC_5 (&VAR_8, VAR_0, VAR_2),
    FUNC_6 (&VAR_9, VAR_0, VAR_2),
    FUNC_6 (&VAR_10, VAR_0, VAR_1)
  };

  VAR_11.name_p = (const jerry_char_t **) VAR_12;
  VAR_11.name_cnt = 3;
  VAR_11.c_arg_p = VAR_13;
  VAR_11.c_arg_cnt = 3;

  jerryx_arg_t VAR_14[] =
  {
    FUNC_7 (&VAR_11, VAR_1),
  };

  jerry_value_t VAR_15 = FUNC_8 (VAR_6, VAR_7, VAR_14, FUNC_0 (VAR_14));


  FUNC_2 (!FUNC_4 (VAR_15));

  if (VAR_3 == 1)
  {
    FUNC_2 (VAR_8);
    FUNC_2 (VAR_9 == 1.5);
    FUNC_2 (VAR_10 == 3);
  }

  VAR_3++;

  return FUNC_3 ();
}
