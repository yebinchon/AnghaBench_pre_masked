
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZPOS64_T ;


 int FUNC_0 (char*,...) ;

void FUNC_1(ZPOS64_T VAR_0, int VAR_1)
{

  char VAR_2[21];
  int VAR_3=19;
  int VAR_4 = 19;
  VAR_2[20]=0;
  for (;;) {
      VAR_2[VAR_3]=(char)((VAR_0%10)+'0');
      if (VAR_2[VAR_3] != '0')
          VAR_4=VAR_3;
      VAR_0/=10;
      if (VAR_3==0)
          break;
      VAR_3--;
  }
  {
      int VAR_5 = 19-VAR_4;
      while (VAR_1 > VAR_5)
      {
          VAR_1--;
          FUNC_0(" ");
      }
  }

  FUNC_0("%s",&VAR_2[VAR_4]);
}
