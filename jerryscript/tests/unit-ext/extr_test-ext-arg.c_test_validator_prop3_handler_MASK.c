
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* jerryx_arg_t ;
typedef int jerry_value_t ;
typedef int jerry_length_t ;
typedef int jerry_char_t ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char const* FUNC_6 (int*,int ,int ) ;
 int FUNC_7 (int const,int const**,int ,char const**,int ) ;
 int VAR_2 ;

__attribute__((used)) static jerry_value_t
FUNC_8 (const jerry_value_t VAR_3,
                              const jerry_value_t VAR_4,
                              const jerry_value_t VAR_5[],
                              const jerry_length_t VAR_6)
{
  FUNC_1 (VAR_3);
  FUNC_1 (VAR_4);
  FUNC_1 (VAR_6);

  bool VAR_7 = 0;
  bool VAR_8 = 1;

  const char *VAR_9[] = { "prop1", "prop2" };

  jerryx_arg_t VAR_10[] =
  {
    FUNC_6 (&VAR_7, VAR_0, VAR_1),
    FUNC_6 (&VAR_8, VAR_0, VAR_1),
  };

  jerry_value_t VAR_11 = FUNC_7 (VAR_5[0],
                                                                (const jerry_char_t **) VAR_9,
                                                                FUNC_0 (VAR_9),
                                                                VAR_10,
                                                                FUNC_0 (VAR_10));

  FUNC_2 (FUNC_5 (VAR_11));
  FUNC_2 (!VAR_7);
  FUNC_2 (VAR_8);

  VAR_2++;
  FUNC_4 (VAR_11);

  return FUNC_3 ();
}
