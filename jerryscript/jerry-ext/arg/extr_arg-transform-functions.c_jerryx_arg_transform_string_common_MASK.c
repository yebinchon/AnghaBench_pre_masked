
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_arg_t ;
typedef int jerryx_arg_js_iterator_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int const*,int) ;

__attribute__((used)) static jerry_value_t
FUNC_6 (jerryx_arg_js_iterator_t *VAR_1,
                                    const jerryx_arg_t *VAR_2,
                                    bool VAR_3)
{
  jerry_value_t VAR_4 = FUNC_4 (VAR_1);

  jerry_value_t VAR_5 = FUNC_3 (VAR_4);

  if (FUNC_2 (VAR_5))
  {
    FUNC_1 (VAR_5);

    return FUNC_0 (VAR_0,
                               (jerry_char_t *) "It can not be converted to a string.");
  }

  jerry_value_t VAR_6 = FUNC_5 (VAR_5, VAR_2, VAR_3);
  FUNC_1 (VAR_5);

  return VAR_6;
}
