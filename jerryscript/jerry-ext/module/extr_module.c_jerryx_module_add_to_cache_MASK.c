
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static jerry_value_t
FUNC_3 (jerry_value_t VAR_0,
                            jerry_value_t VAR_1,
                            jerry_value_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);

  if (FUNC_2 (VAR_3))
  {
    FUNC_0 (VAR_2);
  }
  else
  {
    FUNC_0 (VAR_3);
    VAR_3 = VAR_2;
  }

  return VAR_3;
}
