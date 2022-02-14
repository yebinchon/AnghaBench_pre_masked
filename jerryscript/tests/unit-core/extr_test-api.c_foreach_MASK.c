
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef size_t jerry_size_t ;
typedef int jerry_char_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const) ;
 double FUNC_2 (int const) ;
 size_t FUNC_3 (int const,int *,int) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static bool
FUNC_9 (const jerry_value_t VAR_0,
         const jerry_value_t VAR_1,
         void *VAR_2)
{
  char VAR_3[128];
  jerry_size_t VAR_4 = FUNC_3 (VAR_0, (jerry_char_t *) VAR_3, 128);
  VAR_3[VAR_4] = '\0';

  FUNC_0 (!FUNC_8 ((const char *) VAR_2, "user_data", 9));
  FUNC_0 (VAR_4 > 0);

  if (!FUNC_8 (VAR_3, "alpha", (size_t) VAR_4))
  {
    FUNC_0 (FUNC_5 (VAR_1));
    FUNC_0 (FUNC_2 (VAR_1) == 32.0);
    return 1;
  }
  else if (!FUNC_8 (VAR_3, "bravo", (size_t) VAR_4))
  {
    FUNC_0 (FUNC_4 (VAR_1));
    FUNC_0 (FUNC_1 (VAR_1) == 0);
    return 1;
  }
  else if (!FUNC_8 (VAR_3, "charlie", (size_t) VAR_4))
  {
    FUNC_0 (FUNC_6 (VAR_1));
    return 1;
  }
  else if (!FUNC_8 (VAR_3, "delta", (size_t) VAR_4))
  {
    FUNC_0 (FUNC_5 (VAR_1));
    FUNC_0 (FUNC_2 (VAR_1) == 123.45);
    return 1;
  }
  else if (!FUNC_8 (VAR_3, "echo", (size_t) VAR_4))
  {
    FUNC_0 (FUNC_7 (VAR_1));
    jerry_size_t VAR_5 = FUNC_3 (VAR_1,
                                                        (jerry_char_t *) VAR_3,
                                                        128);
    VAR_3[VAR_5] = '\0';
    FUNC_0 (!FUNC_8 (VAR_3, "foobar", (size_t) VAR_5));
    return 1;
  }

  FUNC_0 (0);
  return 0;


}
