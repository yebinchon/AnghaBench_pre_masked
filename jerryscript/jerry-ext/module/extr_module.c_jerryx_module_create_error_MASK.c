
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_error_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int const) ;
 int VAR_0 ;

__attribute__((used)) static jerry_value_t
FUNC_5 (jerry_error_t VAR_1,
                            const jerry_char_t *VAR_2,
                            const jerry_value_t VAR_3)
{
  jerry_value_t VAR_4 = FUNC_0 (VAR_1, VAR_2);

  jerry_value_t VAR_5 = FUNC_2 (VAR_4, 0);
  jerry_value_t VAR_6 = FUNC_1 (VAR_0);

  FUNC_3 (FUNC_4 (VAR_5, VAR_6, VAR_3));

  FUNC_3 (VAR_6);
  FUNC_3 (VAR_5);
  return VAR_4;
}
