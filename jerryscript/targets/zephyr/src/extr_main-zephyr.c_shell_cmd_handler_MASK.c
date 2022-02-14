
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8 (char *VAR_2)
{
  jerry_value_t VAR_3;

  VAR_3 = FUNC_2 ((jerry_char_t *) VAR_2,
    FUNC_7 (VAR_2),
    VAR_0);

  if (FUNC_5 (VAR_3))
  {



    FUNC_6 ("Error executing statement: ");


    VAR_3 = FUNC_3 (VAR_3, 1);
  }

  if (!FUNC_5 (VAR_1))
  {
    jerry_value_t VAR_4 = FUNC_0 (VAR_1,
      FUNC_1 (),
      &VAR_3,
      1);
    FUNC_4 (VAR_4);
  }

  FUNC_4 (VAR_3);

  return 0;
}
