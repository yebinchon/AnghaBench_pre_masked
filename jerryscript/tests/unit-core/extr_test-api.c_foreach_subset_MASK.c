
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static bool
FUNC_1 (const jerry_value_t VAR_0,
                const jerry_value_t VAR_1,
                void *VAR_2)
{
  FUNC_0 (VAR_0);
  FUNC_0 (VAR_1);
  int *VAR_3 = (int *) (VAR_2);

  if (*VAR_3 == 3)
  {
    return 0;
  }
  (*VAR_3)++;
  return 1;
}
