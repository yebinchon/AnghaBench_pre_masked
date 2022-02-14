
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char**) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int
FUNC_5(int VAR_3, char *VAR_4[])
{

 if (VAR_3 == 2 && FUNC_4(VAR_4[1], "boot") == 0)
  return (FUNC_0(VAR_0));
 else if (VAR_3 == 2 && FUNC_4(VAR_4[1], "shutdown") == 0)
  return (FUNC_0(VAR_1));
 else if (VAR_3 >= 3 && FUNC_4(VAR_4[1], "rm") == 0)
  return (FUNC_3(&VAR_4[2]));

 FUNC_2(VAR_2,
     "usage: utx boot\n"
     "       utx shutdown\n"
     "       utx rm identifier ...\n");
 FUNC_1(1);
}
