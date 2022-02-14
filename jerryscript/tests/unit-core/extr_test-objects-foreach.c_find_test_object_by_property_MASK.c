
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (const jerry_value_t VAR_0,
                              void *VAR_1)
{
  jerry_value_t *VAR_2 = (jerry_value_t *) VAR_1;
  jerry_value_t VAR_3 = FUNC_2 (VAR_0, VAR_2[0]);

  bool VAR_4 = (!FUNC_4 (VAR_3) && FUNC_1 (VAR_3));


  if (VAR_4)
  {
    VAR_2[1] = FUNC_0 (VAR_0);
  }

  FUNC_3 (VAR_3);


  return !VAR_4;
}
