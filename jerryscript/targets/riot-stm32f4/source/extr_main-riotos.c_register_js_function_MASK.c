
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_external_handler_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (char*,char const*) ;

__attribute__((used)) static void
FUNC_4 (const char *VAR_0,
                      jerry_external_handler_t VAR_1)
{
  jerry_value_t VAR_2 = FUNC_2 ((const jerry_char_t *) VAR_0, VAR_1);

  if (FUNC_1 (VAR_2))
  {
    FUNC_3 ("Warning: failed to register '%s' method.", VAR_0);
  }

  FUNC_0 (VAR_2);
}
