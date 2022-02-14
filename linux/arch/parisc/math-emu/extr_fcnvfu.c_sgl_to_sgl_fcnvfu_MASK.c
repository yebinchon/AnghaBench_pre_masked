
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef scalar_t__ boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;



 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int,int) ;
 scalar_t__ FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,int) ;
 scalar_t__ FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int,int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int,int,unsigned int) ;
 scalar_t__ VAR_6 ;

int
FUNC_15(
   sgl_floating_point *VAR_7,
   unsigned int *VAR_8,
   unsigned int *VAR_9,
   unsigned int *VAR_10)
{
 register unsigned int VAR_11, VAR_12;
 register int VAR_13;
 register boolean VAR_14 = VAR_0;

 VAR_11 = *VAR_7;
 VAR_13 = FUNC_6(VAR_11) - VAR_4;




 if (VAR_13 > VAR_5 + 1) {
  if (FUNC_11(VAR_11)) {
   VAR_12 = 0;
  } else {
   VAR_12 = 0xffffffff;
  }
  if (FUNC_1()) {
   return(VAR_2);
  }
  FUNC_4();
  *VAR_9 = VAR_12;
  return(VAR_3);
 }



 if (VAR_13 >= 0) {




  if (FUNC_11(VAR_11)) {
   VAR_12 = 0;
   if (FUNC_1()) {
    return(VAR_2);
   }
   FUNC_4();
   *VAR_9 = VAR_12;
   return(VAR_3);
  }
  FUNC_5(VAR_11);
  FUNC_14(VAR_11,VAR_13,VAR_12);


  if (FUNC_7(VAR_11,VAR_13)) {
   VAR_14 = VAR_6;

   switch (FUNC_2()) {
   case 128:
    VAR_12++;
    break;
   case 130:
    break;
   case 129:
    if (FUNC_10(VAR_11,VAR_13) &&
        (FUNC_12(VAR_11,VAR_13) ||
         (VAR_12 & 1))) {
          VAR_12++;
    }
    break;
   }
  }
 } else {
  VAR_12 = 0;


  if (FUNC_8(VAR_11)) {
   VAR_14 = VAR_6;

   switch (FUNC_2()) {
   case 128:
    if (FUNC_13(VAR_11)) {
     VAR_12++;
    }
    break;
   case 130:
    if (FUNC_11(VAR_11)) {
     VAR_12 = 0;
     if (FUNC_1()) {
      return(VAR_2);
     }
     FUNC_4();
     VAR_14 = VAR_0;
    }
    break;
   case 129:
    if (VAR_13 == -1 &&
        FUNC_9(VAR_11)) {
     if (FUNC_11(VAR_11)) {
      VAR_12 = 0;
      if (FUNC_1()) {
       return(VAR_2);
      }
      FUNC_4();
      VAR_14 = VAR_0;
     }
           else VAR_12++;
    }
    break;
   }
  }
 }
 *VAR_9 = VAR_12;
 if (VAR_14) {
  if (FUNC_0()) return(VAR_1);
  else FUNC_3();
 }
 return(VAR_3);
}
