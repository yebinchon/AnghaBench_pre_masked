
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dest; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

jerry_value_t
FUNC_5 (jerryx_arg_js_iterator_t *VAR_1,
                                     const jerryx_arg_t *VAR_2)
{
  jerry_value_t VAR_3 = FUNC_4 (VAR_1);

  if (!FUNC_3 (VAR_3))
  {
    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "It is not a boolean.");
  }

  bool *VAR_4 = VAR_2->dest;
  *VAR_4 = FUNC_2 (VAR_3);

  return FUNC_1 ();
}
