
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val_args ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int jerry_value_t ;
typedef int jerry_char_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*) ;

int FUNC_9 (uint32_t VAR_1)
{
  jerry_value_t VAR_2 = FUNC_3 ();
  jerry_value_t VAR_3 = FUNC_2 ((const jerry_char_t *) VAR_0);
  jerry_value_t VAR_4 = FUNC_4 (VAR_2, VAR_3);
  FUNC_5 (VAR_3);

  if (FUNC_6 (VAR_4)) {
    FUNC_8 ("Error: '%s' not defined!!!\r\n", VAR_0);
    FUNC_5 (VAR_4);
    FUNC_5 (VAR_2);
    return -1;
  }

  if (!FUNC_7 (VAR_4)) {
    FUNC_8 ("Error: '%s' is not a function!!!\r\n", VAR_0);
    FUNC_5 (VAR_4);
    FUNC_5 (VAR_2);
    return -2;
  }

  jerry_value_t VAR_5[] = { FUNC_1 (VAR_1) };
  uint16_t VAR_6 = sizeof (VAR_5) / sizeof (jerry_value_t);

  jerry_value_t VAR_7 = FUNC_0 (VAR_4,
                                           VAR_2,
                                           VAR_5,
                                           VAR_6);

  for (uint16_t VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
    FUNC_5 (VAR_5[VAR_8]);
  }

  FUNC_5 (VAR_4);
  FUNC_5 (VAR_2);

  if (FUNC_6 (VAR_7)) {
    FUNC_5 (VAR_7);
    return -3;
  }

  FUNC_5 (VAR_7);

  return 0;
}
