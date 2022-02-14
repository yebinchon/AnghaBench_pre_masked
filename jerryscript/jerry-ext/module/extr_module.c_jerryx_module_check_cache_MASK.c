
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (jerry_value_t VAR_0,
                           jerry_value_t VAR_1,
                           jerry_value_t *VAR_2)
{
  bool VAR_3 = 0;


  jerry_value_t VAR_4 = FUNC_2 (VAR_0, VAR_1);


  if (!FUNC_4 (VAR_4))
  {
    bool VAR_5 = FUNC_0 (VAR_4);


    if (VAR_5)
    {
      if (VAR_2 != ((void*)0))
      {
        (*VAR_2) = FUNC_1 (VAR_0, VAR_1);
      }
      VAR_3 = 1;
    }
  }

  FUNC_3 (VAR_4);

  return VAR_3;
}
