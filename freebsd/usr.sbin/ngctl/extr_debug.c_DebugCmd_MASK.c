
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_2, char **VAR_3)
{
 int VAR_4;


 switch (VAR_2) {
 case 2:
  if (!FUNC_3(VAR_3[1], "+"))
   VAR_4 = FUNC_0(-1) + 1;
  else if (!FUNC_3(VAR_3[1], "-"))
   VAR_4 = FUNC_0(-1) - 1;
  else if ((VAR_4 = FUNC_1(VAR_3[1])) < 0)
   return (VAR_1);
  FUNC_0(VAR_4);
  break;
 case 1:
  FUNC_2("Current debug level is %d\n", FUNC_0(-1));
  break;
 default:
  return (VAR_1);
 }
 return (VAR_0);
}
