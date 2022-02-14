
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_escapable_handle_scope ;
typedef int jerry_value_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  jerryx_escapable_handle_scope VAR_3 = FUNC_5 ();

  for (int VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
  {
    jerry_value_t VAR_5 = FUNC_4 (FUNC_1 ());
    (void) VAR_5;
    FUNC_3 (VAR_3);
    FUNC_2 (VAR_0);
    FUNC_0 (VAR_1 == (VAR_4 + 1));
  }
}
