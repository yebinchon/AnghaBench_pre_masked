
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jerry_value_t ;
typedef int jerry_char_t ;


 int VAR_0 ;
 int FUNC_0 (int *,size_t const,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3 (const char *VAR_1, const size_t VAR_2)
{
  jerry_value_t VAR_3 = FUNC_0 ((jerry_char_t *) VAR_1,
                                  VAR_2,
                                  VAR_0);
  if (FUNC_2 (VAR_3)) {
    FUNC_1 (VAR_3);
    return -1;
  }

  FUNC_1 (VAR_3);

  return 0;
}
