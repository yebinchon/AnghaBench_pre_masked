
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char**,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (char*,int*) ;
 int FUNC_5 (int,char*) ;

int FUNC_6(int VAR_1,char *VAR_2[],char *VAR_3[])
{

  int VAR_4,VAR_5,VAR_6,VAR_7;
  int VAR_8;
  char *VAR_9,*VAR_10;
  pid_t VAR_11;

  VAR_0 = FUNC_2();

  if ((FUNC_4("A",&VAR_4))
      || (FUNC_4("B",&VAR_5))
      || (FUNC_4("DelayA",&VAR_6))
      || (FUNC_4("DelayB",&VAR_7))
      || (FUNC_3(&VAR_9,VAR_6,VAR_5))
      || (FUNC_3(&VAR_10,VAR_7,VAR_4)))
    FUNC_0(1);

  VAR_11 = FUNC_1();

  if (VAR_11 == 0)
    {
      VAR_8 = FUNC_5(VAR_4,VAR_9);
      FUNC_0(VAR_8);
    }

  if (VAR_11 == -1)
    {
      FUNC_0(1);
    }
  VAR_8 = FUNC_5(VAR_5,VAR_10);
  FUNC_0(VAR_8);

}
