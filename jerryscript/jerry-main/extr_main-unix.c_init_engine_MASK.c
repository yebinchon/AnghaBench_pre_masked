
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int jerry_init_flag_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static void
FUNC_9 (jerry_init_flag_t VAR_4,
             char *VAR_5,
             char *VAR_6,
             uint16_t VAR_7,
             char *VAR_8)
{
  FUNC_1 (VAR_4);
  if (FUNC_8 (VAR_5, ""))
  {
    bool VAR_9 = 0;

    if (!FUNC_8 (VAR_6, "tcp"))
    {
      VAR_9 = FUNC_5 (VAR_7);
    }
    else
    {
      FUNC_0 (!FUNC_8 (VAR_6, "serial"));
      VAR_9 = FUNC_4 (VAR_8);
    }

    if (!FUNC_8 (VAR_5, "rawpacket"))
    {
      FUNC_2 (VAR_9 && FUNC_3 ());
    }
    else
    {
      FUNC_0 (!FUNC_8 (VAR_5, "websocket"));
      FUNC_2 (VAR_9 && FUNC_6 ());
    }
  }

  FUNC_7 ("assert", VAR_0);
  FUNC_7 ("gc", VAR_1);
  FUNC_7 ("print", VAR_2);
  FUNC_7 ("resourceName", VAR_3);
}
