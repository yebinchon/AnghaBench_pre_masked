
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* dest; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

jerry_value_t
FUNC_3 (jerryx_arg_js_iterator_t *VAR_0,
                              const jerryx_arg_t *VAR_1)
{
  jerry_value_t VAR_2 = FUNC_2 (VAR_0);

  bool VAR_3 = FUNC_1 (VAR_2);

  bool *VAR_4 = VAR_1->dest;
  *VAR_4 = VAR_3;

  return FUNC_0 ();
}
