
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int ,int const*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static jerry_value_t
FUNC_6 (const char *VAR_1,
     const char *VAR_2)
{
  jerry_value_t VAR_3 = FUNC_1 ((const jerry_char_t *) VAR_1,
                                    FUNC_5 (VAR_1),
                                    (const jerry_char_t *) VAR_2,
                                    FUNC_5 (VAR_2),
                                    VAR_0);
  FUNC_0 (!FUNC_4 (VAR_3));

  jerry_value_t VAR_4 = FUNC_3 (VAR_3);
  FUNC_2 (VAR_3);

  return VAR_4;
}
