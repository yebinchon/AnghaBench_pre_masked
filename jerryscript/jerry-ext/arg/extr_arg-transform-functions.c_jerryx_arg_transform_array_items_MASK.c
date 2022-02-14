
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ extra_info; } ;
typedef TYPE_1__ jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
struct TYPE_5__ {int c_arg_cnt; int c_arg_p; } ;
typedef TYPE_2__ jerryx_arg_array_items_t ;
typedef int jerry_value_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;

jerry_value_t
FUNC_2 (jerryx_arg_js_iterator_t *VAR_0,
                                  const jerryx_arg_t *VAR_1)
{
  jerry_value_t VAR_2 = FUNC_0 (VAR_0);

  const jerryx_arg_array_items_t *VAR_3 = (const jerryx_arg_array_items_t *) VAR_1->extra_info;

  return FUNC_1 (VAR_2,
                                     VAR_3->c_arg_p,
                                     VAR_3->c_arg_cnt);
}
