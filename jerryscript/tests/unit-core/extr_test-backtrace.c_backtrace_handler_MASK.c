
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int jerry_value_t ;
typedef scalar_t__ jerry_length_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;

__attribute__((used)) static jerry_value_t
FUNC_4 (const jerry_value_t VAR_0,
                   const jerry_value_t VAR_1,
                   const jerry_value_t VAR_2[],
                   const jerry_length_t VAR_3)
{
  FUNC_0 (VAR_0);
  FUNC_0 (VAR_1);

  uint32_t VAR_4 = 0;

  if (VAR_3 > 0 && FUNC_3 (VAR_2[0]))
  {
    VAR_4 = (uint32_t) FUNC_2 (VAR_2[0]);
  }

  return FUNC_1 (VAR_4);
}
