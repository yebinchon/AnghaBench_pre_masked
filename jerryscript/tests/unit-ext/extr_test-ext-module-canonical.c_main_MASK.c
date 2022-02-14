
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerryx_module_resolver_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int const**,int) ;

int
FUNC_10 (int VAR_5, char **VAR_6)
{
  (void) VAR_5;
  (void) VAR_6;

  const jerryx_module_resolver_t *VAR_7 = &VAR_4;

  FUNC_6 (VAR_2);

  jerry_value_t VAR_8 = FUNC_3 ((jerry_char_t *) VAR_0);
  jerry_value_t VAR_9 = FUNC_3 ((jerry_char_t *) VAR_1);


  jerry_value_t VAR_10 = FUNC_9 (VAR_9, &VAR_7, 1);
  jerry_value_t VAR_11 = FUNC_9 (VAR_8, &VAR_7, 1);
  FUNC_7 (VAR_8);
  FUNC_7 (VAR_9);


  jerry_value_t VAR_12 = FUNC_3 ((jerry_char_t *) "something");
  jerry_value_t VAR_13 = FUNC_2 (VAR_3);
  FUNC_7 (FUNC_8 (VAR_11, VAR_12, VAR_13));
  FUNC_7 (VAR_13);

  VAR_13 = FUNC_5 (VAR_10, VAR_12);
  FUNC_0 (FUNC_4 (VAR_13) == VAR_3);
  FUNC_7 (VAR_13);

  FUNC_7 (VAR_12);
  FUNC_7 (VAR_11);
  FUNC_7 (VAR_10);

  FUNC_1 ();

  return 0;
}
