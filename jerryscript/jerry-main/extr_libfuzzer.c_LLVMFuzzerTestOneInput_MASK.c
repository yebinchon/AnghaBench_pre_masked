
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int jerry_value_t ;
typedef int jerry_size_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int *,size_t,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9 (const uint8_t *VAR_2, size_t VAR_3)
{
  FUNC_8 (0);
  FUNC_1 (VAR_0);

  if (FUNC_2 ((jerry_char_t *) VAR_2, (jerry_size_t) VAR_3))
  {
    jerry_value_t VAR_4 = FUNC_3 (((void*)0), 0, (jerry_char_t *) VAR_2, VAR_3, VAR_1);

    if (!FUNC_7 (VAR_4))
    {
      jerry_value_t VAR_5 = FUNC_5 (VAR_4);
      FUNC_4 (VAR_5);

      jerry_value_t VAR_6 = FUNC_6 ();
      FUNC_4 (VAR_6);
    }

    FUNC_4 (VAR_4);
  }

  FUNC_0 ();

  return 0;
}
