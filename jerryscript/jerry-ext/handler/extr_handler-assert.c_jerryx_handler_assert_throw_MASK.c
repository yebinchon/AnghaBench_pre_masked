
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;

jerry_value_t
FUNC_4 (const jerry_value_t VAR_1,
                             const jerry_value_t VAR_2,
                             const jerry_value_t VAR_3[],
                             const jerry_length_t VAR_4)
{
  (void) VAR_1;
  (void) VAR_2;

  if (VAR_4 == 1
      && FUNC_3 (VAR_3[0])
      && FUNC_2 (VAR_3[0]))
  {
    return FUNC_0 (1);
  }

  return FUNC_1 (VAR_0, (jerry_char_t *) "assertion failed");
}
