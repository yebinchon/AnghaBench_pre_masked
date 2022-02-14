
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8 (jerry_value_t VAR_0,
                 jerry_value_t VAR_1)
{
  jerry_value_t VAR_2 = FUNC_2 (VAR_1, ((void*)0), 0);
  jerry_value_t VAR_3[2] =
  {
    VAR_2, VAR_1
  };

  jerry_value_t VAR_4 = FUNC_3 ();
  jerry_value_t VAR_5 = FUNC_1 (VAR_0, VAR_4, VAR_3, 2);
  FUNC_5 (VAR_4);

  FUNC_0 (!FUNC_7 (VAR_5));
  FUNC_0 (FUNC_6 (VAR_5));

  FUNC_0 (FUNC_4 (VAR_5));

  FUNC_5 (VAR_2);
  FUNC_5 (VAR_5);
}
