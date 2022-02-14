
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ extra_info; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static jerry_value_t
FUNC_7 (jerryx_arg_js_iterator_t *VAR_1,
                     const jerryx_arg_t *VAR_2)
{
  jerry_value_t VAR_3 = FUNC_6 (VAR_1);
  jerry_value_t VAR_4 = FUNC_5 (VAR_3);

  if (FUNC_4 (VAR_4))
  {
    FUNC_3 (VAR_4);

    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "It can not be converted to a number.");
  }

  int VAR_5 = (int) VAR_2->extra_info;
  int VAR_6 = (int) FUNC_2 (VAR_4);

  if (VAR_6 != VAR_5)
  {
    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "Number value is not expected.");
  }

  return FUNC_1 ();
}
