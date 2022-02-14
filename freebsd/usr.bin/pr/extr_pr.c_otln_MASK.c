
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*,int,int,int ) ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_4 ;

int
FUNC_3(char *VAR_5, int VAR_6, int *VAR_7, int *VAR_8, int VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12 = VAR_3;
 int VAR_13;
 char *VAR_14;

 if (VAR_3) {



  VAR_14 = VAR_5 + VAR_6;
  VAR_10 = *VAR_8;
  VAR_11 = *VAR_7;
  while (VAR_5 < VAR_14) {



   if (*VAR_5 == ' ') {
    ++VAR_11;
    ++VAR_5;
    continue;
   }




   if (*VAR_5 == VAR_2) {
    VAR_11 += VAR_12 - (VAR_11 % VAR_12);
    ++VAR_5;
    continue;
   }




   while (VAR_11 - VAR_10 > 1) {



    if ((VAR_13 = VAR_10 + VAR_12 - (VAR_10 % VAR_12)) > VAR_11)
     break;
    if (FUNC_2(VAR_2) == VAR_0) {
     FUNC_1();
     return(1);
    }
    VAR_10 = VAR_13;
   }

   while (VAR_10 < VAR_11) {



    if (FUNC_2(' ') == VAR_0) {
     FUNC_1();
     return(1);
    }
    ++VAR_10;
   }




   if (FUNC_2(*VAR_5++) == VAR_0) {
    FUNC_1();
    return(1);
   }
   ++VAR_11;
   ++VAR_10;
  }

  if (VAR_9 > 0) {



   *VAR_8 = VAR_10;
   *VAR_7 = VAR_11;
   return(0);
  }

  if (VAR_9 < 0) {
   while (VAR_11 - VAR_10 > 1) {



    if ((VAR_13 = VAR_10 + VAR_12 - (VAR_10 % VAR_12)) > VAR_11)
     break;
    if (FUNC_2(VAR_2) == VAR_0) {
     FUNC_1();
     return(1);
    }
    VAR_10 = VAR_13;
   }
   while (VAR_10 < VAR_11) {



    if (FUNC_2(' ') == VAR_0) {
     FUNC_1();
     return(1);
    }
    ++VAR_10;
   }
   return(0);
  }
 } else {



  if (VAR_6 && (FUNC_0(VAR_5, sizeof(char), VAR_6, VAR_4) <= 0)) {
   FUNC_1();
   return(1);
  }
  if (VAR_9 != 0)
   return(0);
 }




 if ((FUNC_2('\n') == VAR_0) || (VAR_1 && (FUNC_2('\n') == VAR_0))) {
  FUNC_1();
  return(1);
 }
 return(0);
}
