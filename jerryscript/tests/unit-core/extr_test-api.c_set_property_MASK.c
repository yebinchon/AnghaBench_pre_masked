
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int ,int const) ;

__attribute__((used)) static jerry_value_t
FUNC_3 (const jerry_value_t VAR_0,
              const char *VAR_1,
              const jerry_value_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_0 ((const jerry_char_t *) VAR_1);
  jerry_value_t VAR_4 = FUNC_2 (VAR_0, VAR_3, VAR_2);
  FUNC_1 (VAR_3);
  return VAR_4;
}
