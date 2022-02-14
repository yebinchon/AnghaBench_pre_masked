
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_external_handler_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6 (const char *VAR_1,
                      jerry_external_handler_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_4 ((const jerry_char_t *) VAR_1, VAR_2);

  if (FUNC_3 (VAR_3))
  {
    FUNC_1 (VAR_0, "Warning: failed to register '%s' method.", VAR_1);
    VAR_3 = FUNC_0 (VAR_3, 1);
    FUNC_5 (VAR_3);
  }

  FUNC_2 (VAR_3);
}
