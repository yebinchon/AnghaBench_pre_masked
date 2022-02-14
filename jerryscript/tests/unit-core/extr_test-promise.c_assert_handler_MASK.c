
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_length_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int const) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static jerry_value_t
FUNC_5 (const jerry_value_t VAR_1,
                const jerry_value_t VAR_2,
                const jerry_value_t VAR_3[],
                const jerry_length_t VAR_4)
{
  FUNC_0 (VAR_1);
  FUNC_0 (VAR_2);

  VAR_0++;

  if (VAR_4 == 1
      && FUNC_4 (VAR_3[0])
      && FUNC_3 (VAR_3[0]))
  {
    return FUNC_2 (1);
  }
  else
  {
    FUNC_1 (0);
  }
}
