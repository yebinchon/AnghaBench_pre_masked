
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ jerryx_handle_scope ;
typedef int jerry_value_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  jerryx_handle_scope VAR_3;
  FUNC_5 (&VAR_3);

  for (int VAR_4 = 0; VAR_4 < 2; ++VAR_4)
  {
    jerry_value_t VAR_5 = FUNC_1 (VAR_0 * 2);
    (void) VAR_5;
  }

  FUNC_0 (FUNC_4 () == VAR_3);

  FUNC_2 (VAR_1);
  FUNC_0 (VAR_2 == 0);

  FUNC_3 (VAR_3);
}
