
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const jerry_value_t ;
typedef scalar_t__ jerry_length_t ;


 int const FUNC_0 () ;
 int const FUNC_1 (int const) ;
 int FUNC_2 (int const) ;

__attribute__((used)) static jerry_value_t
FUNC_3 (const jerry_value_t VAR_0,
                       const jerry_value_t VAR_1,
                       const jerry_value_t VAR_2[],
                       const jerry_length_t VAR_3)
{
  (void) VAR_0;
  (void) VAR_1;

  jerry_value_t VAR_4 = FUNC_0 ();
  jerry_value_t VAR_5 = FUNC_1 (VAR_3 > 0 ? VAR_2[0] : VAR_4);
  FUNC_2 (VAR_4);

  return VAR_5;
}
