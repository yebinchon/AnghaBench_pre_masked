
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static jerry_value_t
FUNC_7 (jerryx_arg_js_iterator_t *VAR_1,
                                    double *VAR_2)
{
  jerry_value_t VAR_3 = FUNC_6 (VAR_1);

  jerry_value_t VAR_4 = FUNC_5 (VAR_3);

  if (FUNC_4 (VAR_4))
  {
    FUNC_3 (VAR_4);

    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "It can not be converted to a number.");
  }

  *VAR_2 = FUNC_2 (VAR_4);
  FUNC_3 (VAR_4);

  return FUNC_1 ();
}
