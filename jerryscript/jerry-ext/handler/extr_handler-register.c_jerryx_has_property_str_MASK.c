
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool
FUNC_5 (const jerry_value_t VAR_0,
                         const char *VAR_1)
{
  bool VAR_2 = 0;

  jerry_value_t VAR_3 = FUNC_0 ((const jerry_char_t *) VAR_1);
  jerry_value_t VAR_4 = FUNC_2 (VAR_0, VAR_3);

  if (!FUNC_4 (VAR_4))
  {
    VAR_2 = FUNC_1 (VAR_4);
  }

  FUNC_3 (VAR_4);
  FUNC_3 (VAR_3);

  return VAR_2;
}
