
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ) ;

int
FUNC_14 (void)
{
  FUNC_1 ();

  FUNC_10 (VAR_0);

  jerry_value_t VAR_1 = FUNC_5 ();
  jerry_value_t VAR_2 = FUNC_6 ((jerry_char_t *) "something");
  jerry_value_t VAR_3 = FUNC_4 (1);
  jerry_value_t VAR_4 = FUNC_5 ();


  FUNC_2 (FUNC_9 (VAR_1, VAR_2), 0);
  FUNC_2 (FUNC_8 (VAR_1, VAR_2), 0);

  FUNC_2 (FUNC_13 (VAR_1, VAR_4), 1);


  FUNC_2 (FUNC_9 (VAR_1, VAR_2), 0);
  FUNC_2 (FUNC_8 (VAR_1, VAR_2), 0);

  FUNC_2 (FUNC_12 (VAR_4, VAR_2, VAR_3), 1);


  FUNC_2 (FUNC_9 (VAR_1, VAR_2), 1);
  FUNC_2 (FUNC_8 (VAR_1, VAR_2), 0);

  FUNC_0 (FUNC_7 (VAR_4, VAR_2));
  FUNC_2 (FUNC_12 (VAR_1, VAR_2, VAR_3), 1);


  FUNC_2 (FUNC_9 (VAR_1, VAR_2), 1);
  FUNC_2 (FUNC_8 (VAR_1, VAR_2), 1);

  FUNC_11 (VAR_1);
  FUNC_11 (VAR_2);
  FUNC_11 (VAR_3);
  FUNC_11 (VAR_4);

  FUNC_3 ();

  return 0;
}
