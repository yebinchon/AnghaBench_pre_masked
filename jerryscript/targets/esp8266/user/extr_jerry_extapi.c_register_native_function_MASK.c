
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_external_handler_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static bool
FUNC_9 (const char* VAR_0,
                          jerry_external_handler_t VAR_1)
{
  jerry_value_t VAR_2 = FUNC_2 ();
  jerry_value_t VAR_3 = FUNC_0 (VAR_1);
  bool VAR_4 = 1;

  if (!(FUNC_7 (VAR_3)
        && FUNC_5 (VAR_3)))
  {
    FUNC_8 ("!!! create_external_function failed !!!\r\n");
    FUNC_3 (VAR_3);
    FUNC_3 (VAR_2);
    return 0;
  }

  jerry_value_t VAR_5 = FUNC_1 ((const jerry_char_t *) VAR_0);
  jerry_value_t VAR_6 = FUNC_4 (VAR_2, VAR_5, VAR_3);

  FUNC_3 (VAR_3);
  FUNC_3 (VAR_2);
  FUNC_3 (VAR_5);

  if (FUNC_6 (VAR_6))
  {
    FUNC_8 ("!!! register_native_function failed: [%s]\r\n", VAR_0);
    FUNC_3 (VAR_6);
    return 0;
  }

  FUNC_3 (VAR_6);

  return 1;
}
