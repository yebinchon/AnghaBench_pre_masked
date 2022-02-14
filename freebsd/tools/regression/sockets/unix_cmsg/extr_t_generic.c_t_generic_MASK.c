
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

int
FUNC_5(int (*VAR_0)(int), int (*VAR_1)(int))
{
 int VAR_2, VAR_3, VAR_4;

 switch (FUNC_1()) {
 case 0:
  VAR_2 = FUNC_4();
  if (VAR_2 < 0)
   VAR_3 = -2;
  else {
   VAR_3 = VAR_0(VAR_2);
   if (FUNC_3(VAR_2) < 0)
    VAR_3 = -2;
  }
  FUNC_0(VAR_3);
  break;
 case 1:
  VAR_2 = FUNC_4();
  if (VAR_2 < 0)
   VAR_3 = -2;
  else {
   VAR_3 = VAR_1(VAR_2);
   VAR_4 = FUNC_2();
   if (VAR_3 == 0 || (VAR_3 == -2 && VAR_4 != 0))
    VAR_3 = VAR_4;
   if (FUNC_3(VAR_2) < 0)
    VAR_3 = -2;
  }
  break;
 default:
  VAR_3 = -2;
 }
 return (VAR_3);
}
