
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* func ) (TYPE_2__*,TYPE_1__ const*) ;} ;
typedef TYPE_1__ jerryx_arg_t ;
struct TYPE_8__ {int js_arg_cnt; int js_arg_idx; int const* js_arg_p; } ;
typedef TYPE_2__ jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_length_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int const*,scalar_t__ const,TYPE_1__ const*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__ const*) ;

jerry_value_t
FUNC_6 (const jerry_value_t VAR_1,
                                    const jerry_value_t *VAR_2,
                                    const jerry_length_t VAR_3,
                                    const jerryx_arg_t *VAR_4,
                                    jerry_length_t VAR_5)
{
  if (VAR_5 == 0)
  {
    return FUNC_1 ();
  }

  jerryx_arg_js_iterator_t VAR_6 =
  {
    .js_arg_p = &VAR_1,
    .js_arg_cnt = 1,
    .js_arg_idx = 0
  };

  jerry_value_t VAR_7 = VAR_4->func (&VAR_6, VAR_4);

  if (FUNC_3 (VAR_7))
  {
    FUNC_2 (VAR_7);

    return FUNC_0 (VAR_0, (jerry_char_t *) "'this' validation failed.");
  }

  return FUNC_4 (VAR_2, VAR_3, VAR_4 + 1, VAR_5 - 1);
}
