
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
 u_int VAR_0;
 int VAR_1, VAR_2, VAR_3;

 switch (FUNC_3()) {
 case 0:
  for (VAR_0 = 1; VAR_0 <= 2; ++VAR_0) {
   FUNC_5("client #%u", VAR_0);
   VAR_1 = FUNC_7();
   if (VAR_1 < 0)
    VAR_2 = -2;
   else {
    VAR_2 = FUNC_0(1, VAR_1);
    if (FUNC_6(VAR_1) < 0)
     VAR_2 = -2;
   }
   if (VAR_2 != 0)
    break;
  }
  FUNC_2(VAR_2);
  break;
 case 1:
  VAR_1 = FUNC_7();
  if (VAR_1 < 0)
   VAR_2 = -2;
  else {
   VAR_2 = FUNC_1(1, VAR_1);
   if (VAR_2 == 0)
    VAR_2 = FUNC_1(3, VAR_1);
   VAR_3 = FUNC_4();
   if (VAR_2 == 0 || (VAR_2 == -2 && VAR_3 != 0))
    VAR_2 = VAR_3;
   if (FUNC_6(VAR_1) < 0)
    VAR_2 = -2;
  }
  break;
 default:
  VAR_2 = -2;
 }

 return (VAR_2);
}
