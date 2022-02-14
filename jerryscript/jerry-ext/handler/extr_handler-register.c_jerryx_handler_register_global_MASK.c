
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_external_handler_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

jerry_value_t
FUNC_5 (const jerry_char_t *VAR_0,
                                jerry_external_handler_t VAR_1)
{
  jerry_value_t VAR_2 = FUNC_2 ();
  jerry_value_t VAR_3 = FUNC_1 (VAR_0);
  jerry_value_t VAR_4 = FUNC_0 (VAR_1);

  jerry_value_t VAR_5 = FUNC_4 (VAR_2, VAR_3, VAR_4);

  FUNC_3 (VAR_4);
  FUNC_3 (VAR_3);
  FUNC_3 (VAR_2);

  return VAR_5;
}
