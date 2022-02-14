
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef size_t jerry_size_t ;
typedef scalar_t__ jerry_char_t ;


 scalar_t__ FUNC_0 (size_t,int *) ;
 int FUNC_1 (scalar_t__*) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (int ,scalar_t__*,size_t) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,scalar_t__*) ;

void FUNC_9 (jerry_value_t VAR_0)
{
  if (FUNC_6 (VAR_0))
  {
    VAR_0 = FUNC_3 (VAR_0, 1);
    jerry_value_t VAR_1 = FUNC_7 (VAR_0);
    jerry_size_t VAR_2 = FUNC_2 (VAR_1);
    jerry_char_t *VAR_3 = (jerry_char_t *) FUNC_0 (VAR_2, ((void*)0));
    jerry_size_t VAR_4 = FUNC_5 (VAR_1, VAR_3, VAR_2);
    VAR_3[VAR_4] = 0;
    FUNC_8 ("Script Error: unhandled exception: %s\n", VAR_3);
    FUNC_1(VAR_3);
    FUNC_4 (VAR_1);
  }
}
