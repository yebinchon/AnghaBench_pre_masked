
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char) ;

int
FUNC_2(int VAR_6, int VAR_7)
{
 if (VAR_5) {



  if (VAR_7 &&
      ((VAR_3 && (FUNC_1('\n') == VAR_0)) ||
       (FUNC_1('\n') == VAR_0))) {
   FUNC_0();
   return(1);
  }



  if (VAR_4) {
   if (FUNC_1('\f') == VAR_0) {
    FUNC_0();
    return(1);
   }
  }
  return(0);
 }



 if (VAR_3)
  VAR_6 *= 2;




 if (VAR_2)
  ++VAR_6;




 if (VAR_4) {
  if ((VAR_7 && (FUNC_1('\n') == VAR_0)) ||
      (FUNC_1('\f') == VAR_0)) {
   FUNC_0();
   return(1);
  }
  return(0);
 }
 VAR_6 += VAR_1;
 while (--VAR_6 >= 0) {
  if (FUNC_1('\n') == VAR_0) {
   FUNC_0();
   return(1);
  }
 }
 return(0);
}
