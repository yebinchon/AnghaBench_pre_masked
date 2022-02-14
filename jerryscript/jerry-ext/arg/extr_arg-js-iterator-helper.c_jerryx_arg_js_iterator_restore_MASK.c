
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ js_arg_idx; int * js_arg_p; } ;
typedef TYPE_1__ jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;


 int FUNC_0 () ;

jerry_value_t
FUNC_1 (jerryx_arg_js_iterator_t *VAR_0)
{
  if (VAR_0->js_arg_idx == 0)
  {
    return FUNC_0 ();
  }

  --VAR_0->js_arg_idx;
  --VAR_0->js_arg_p;

  return *VAR_0->js_arg_p;
}
