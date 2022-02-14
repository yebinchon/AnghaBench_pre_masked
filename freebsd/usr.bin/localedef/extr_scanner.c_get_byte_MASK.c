
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_2;

 if ((VAR_2 = FUNC_3()) != VAR_1) {
  FUNC_4(VAR_2);
  return (VAR_0);
 }
 VAR_2 = FUNC_3();

 switch (VAR_2) {
 case 'd':
 case 'D':
  return (FUNC_0());
 case 'x':
 case 'X':
  return (FUNC_1());
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':

  FUNC_4(VAR_2);
  return (FUNC_2());
 default:
  FUNC_4(VAR_2);
  FUNC_4(VAR_1);
  return (VAR_0);
 }
}
