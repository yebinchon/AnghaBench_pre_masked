
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static jerry_value_t
FUNC_4 (const jerry_char_t *VAR_1,
                          size_t VAR_2,
                          const jerry_char_t *VAR_3,
                          size_t VAR_4,
                          void *VAR_5)
{
  (void) VAR_5;
  jerry_value_t VAR_6 = FUNC_0 (VAR_1,
                                       VAR_2,
                                       VAR_3,
                                       VAR_4,
                                       VAR_0);

  if (!FUNC_3 (VAR_6))
  {
    jerry_value_t VAR_7 = VAR_6;
    VAR_6 = FUNC_2 (VAR_7);
    FUNC_1 (VAR_7);
  }

  return VAR_6;
}
