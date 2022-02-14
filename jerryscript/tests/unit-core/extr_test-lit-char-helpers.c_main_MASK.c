
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char const*,int) ;
 size_t FUNC_7 (int ) ;

int
FUNC_8 (void)
{
  FUNC_1 ();

  FUNC_5 ();
  FUNC_3 ();

  const uint8_t VAR_0[] = "\\u007F";
  const uint8_t VAR_1[] = "\\u0000";
  const uint8_t VAR_2[] = "\\u0065";

  const uint8_t VAR_3[] = "\\u008F";
  const uint8_t VAR_4[] = "\\u00FF";
  const uint8_t VAR_5[] = "\\u07FF";

  const uint8_t VAR_6[] = "\\u08FF";
  const uint8_t VAR_7[] = "\\u0FFF";
  const uint8_t VAR_8[] = "\\uFFFF";

  size_t VAR_9;


  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_0 + 2, 4));
  FUNC_0 (VAR_9 == 1);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_1 + 2, 4));
  FUNC_0 (VAR_9 == 1);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_2 + 2, 4));
  FUNC_0 (VAR_9 == 1);


  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_3 + 2, 4));
  FUNC_0 (VAR_9 == 2);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_4 + 2, 4));
  FUNC_0 (VAR_9 == 2);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_5 + 2, 4));
  FUNC_0 (VAR_9 == 2);


  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_6 + 2, 4));
  FUNC_0 (VAR_9 != 2);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_7 + 2, 4));
  FUNC_0 (VAR_9 == 3);

  VAR_9 = FUNC_7 (FUNC_6 (0, VAR_8 + 2, 4));
  FUNC_0 (VAR_9 == 3);

  FUNC_2 ();
  FUNC_4 ();

  return 0;
}
