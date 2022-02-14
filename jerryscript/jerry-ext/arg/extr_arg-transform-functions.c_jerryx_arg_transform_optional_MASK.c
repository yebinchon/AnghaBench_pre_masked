
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* jerryx_arg_transform_func_t ) (int *,int const*) ;
typedef int jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

jerry_value_t
FUNC_3 (jerryx_arg_js_iterator_t *VAR_0,
                               const jerryx_arg_t *VAR_1,
                               jerryx_arg_transform_func_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_1 (VAR_0);

  if (FUNC_0 (VAR_3))
  {
    return FUNC_2 (VAR_0);
  }

  return VAR_2 (VAR_0, VAR_1);
}
