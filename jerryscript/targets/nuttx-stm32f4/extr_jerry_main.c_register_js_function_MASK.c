
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_external_handler_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_1,
                      jerry_external_handler_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_3 ((const jerry_char_t *) VAR_1, VAR_2);

  if (FUNC_2 (VAR_3))
  {
    FUNC_0 (VAR_0, "Warning: failed to register '%s' method.", VAR_1);
  }

  FUNC_1 (VAR_3);
}
