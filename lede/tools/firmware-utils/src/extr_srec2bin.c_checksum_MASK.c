
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(char *VAR_0,int VAR_1)
{
  char *VAR_2;
  int VAR_3;
  int VAR_4;

  VAR_2=VAR_0;
  while(*VAR_2)
  {
    if (!FUNC_2(*VAR_2++))
      return(FUNC_0("Invalid hex digits",VAR_0));
  }
  VAR_2=VAR_0;

  VAR_3=VAR_1;

  while(VAR_1)
  {
    VAR_3 += FUNC_1(VAR_2,2);
    if (VAR_1 == 2)
        VAR_4 = ~VAR_3;
    VAR_2 += 2;
    VAR_1--;
  }
  VAR_3&=0x0ff;

  return(VAR_3==0x0ff);
}
