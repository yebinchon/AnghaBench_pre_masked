
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_unsigned ;
typedef int dbl_floating_point ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int,int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int,unsigned int,int *) ;
 int FUNC_11 (unsigned int,unsigned int,int,unsigned int,unsigned int) ;
 int FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int,unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 int VAR_5 ;



 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 scalar_t__ VAR_6 ;

int
FUNC_20 (dbl_floating_point * VAR_7, unsigned int *VAR_8,
     dbl_unsigned * VAR_9, unsigned int *VAR_10)
{
 register int VAR_11;
 register unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 register boolean VAR_16 = VAR_2;

 FUNC_1(VAR_7,VAR_12,VAR_13);
 VAR_11 = FUNC_2(VAR_12) - VAR_0;




 if (VAR_11 > VAR_1 + 1) {
  if (FUNC_7(VAR_12)) {
   VAR_14 = VAR_15 = 0;
  } else {
   VAR_14 = VAR_15 = 0xffffffff;
  }
  if (FUNC_16()) {
   return(VAR_4);
  }
  FUNC_19();
      FUNC_10(VAR_14,VAR_15,VAR_9);
  return(VAR_5);
 }




 if (VAR_11 >= 0) {




  if (FUNC_7(VAR_12)) {
   VAR_14 = VAR_15 = 0;
   if (FUNC_16()) {
    return(VAR_4);
   }
   FUNC_19();
       FUNC_10(VAR_14,VAR_15,VAR_9);
   return(VAR_5);
  }
  FUNC_0(VAR_12);
  FUNC_11(VAR_12,VAR_13,VAR_11,VAR_14,
    VAR_15);


  if (FUNC_3(VAR_12,VAR_13,VAR_11)) {
   VAR_16 = VAR_6;

   switch (FUNC_17()) {
   case 128:
    FUNC_12(VAR_14,VAR_15);
    break;
   case 130:
    break;
   case 129:
    if(FUNC_6(VAR_12,VAR_13,VAR_11))
      if(FUNC_8(VAR_12,VAR_13,VAR_11) ||
         FUNC_13(VAR_15))
     FUNC_12(VAR_14,VAR_15);
   }
  }
 } else {
  FUNC_14(VAR_14,VAR_15);


  if (FUNC_4(VAR_12,VAR_13)) {
   VAR_16 = VAR_6;

   switch (FUNC_17()) {
   case 128:
    if (FUNC_9(VAR_12)) {
     FUNC_12(VAR_14,VAR_15);
    }
    break;
   case 130:
    if (FUNC_7(VAR_12)) {
     VAR_14 = VAR_15 = 0;
     if (FUNC_16()) {
      return(VAR_4);
     }
     FUNC_19();
     VAR_16 = VAR_2;
    }
    break;
   case 129:
    if (VAR_11 == -1 &&
        FUNC_5(VAR_12,VAR_13))
     if (FUNC_9(VAR_12)) {
      FUNC_12(VAR_14,VAR_15);
     } else {
      VAR_14 = 0;
      VAR_15 = 0;
      if (FUNC_16()) {
       return(VAR_4);
      }
      FUNC_19();
      VAR_16 = VAR_2;
     }
   }
  }
 }
 FUNC_10(VAR_14,VAR_15,VAR_9);
 if (VAR_16) {
  if (FUNC_15()) return(VAR_3);
  else FUNC_18();
 }
 return(VAR_5);
}
