
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* func ) (TYPE_2__*,TYPE_1__ const*) ;} ;
typedef TYPE_1__ jerryx_arg_t ;
struct TYPE_7__ {scalar_t__ const js_arg_cnt; int js_arg_idx; int const* js_arg_p; } ;
typedef TYPE_2__ jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_length_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__ const*) ;

jerry_value_t
FUNC_3 (const jerry_value_t *VAR_0,
                           const jerry_length_t VAR_1,
                           const jerryx_arg_t *VAR_2,
                           jerry_length_t VAR_3)
{
  jerry_value_t VAR_4 = FUNC_0 ();

  jerryx_arg_js_iterator_t VAR_5 =
  {
    .js_arg_p = VAR_0,
    .js_arg_cnt = VAR_1,
    .js_arg_idx = 0
  };

  for (; VAR_3 != 0 && !FUNC_1 (VAR_4); VAR_3--, VAR_2++)
  {
    VAR_4 = VAR_2->func (&VAR_5, VAR_2);
  }

  return VAR_4;
}
