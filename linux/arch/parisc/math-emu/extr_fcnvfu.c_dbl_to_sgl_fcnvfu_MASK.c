
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_floating_point ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int VAR_4 ;



 int FUNC_12 () ;
 int VAR_5 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (unsigned int,unsigned int,int,unsigned int) ;
 scalar_t__ VAR_6 ;

int
FUNC_16 (dbl_floating_point * VAR_7, unsigned int *VAR_8,
     unsigned int *VAR_9, unsigned int *VAR_10)
{
 register unsigned int VAR_11, VAR_12, VAR_13;
 register int VAR_14;
 register boolean VAR_15 = VAR_1;

 FUNC_1(VAR_7,VAR_11,VAR_12);
 VAR_14 = FUNC_2(VAR_11) - VAR_0;




 if (VAR_14 > VAR_5 + 1) {
  if (FUNC_7(VAR_11)) {
   VAR_13 = 0;
  } else {
   VAR_13 = 0xffffffff;
  }
  if (FUNC_11()) {
   return(VAR_3);
  }
  FUNC_14();
  *VAR_9 = VAR_13;
  return(VAR_4);
 }



 if (VAR_14 >= 0) {




  if (FUNC_7(VAR_11)) {
   VAR_13 = 0;
   if (FUNC_11()) {
    return(VAR_3);
   }
   FUNC_14();
   *VAR_9 = VAR_13;
   return(VAR_4);
  }
  FUNC_0(VAR_11);
  FUNC_15(VAR_11,VAR_12,VAR_14,VAR_13);


  if (FUNC_3(VAR_11,VAR_12,VAR_14)) {
   VAR_15 = VAR_6;

   switch (FUNC_12()) {
   case 128:
        VAR_13++;
        break;
   case 130:
        break;
   case 129:
        if(FUNC_6(VAR_11,VAR_12,VAR_14) &&
    (FUNC_8(VAR_11,VAR_12,VAR_14)||
     VAR_13&1))
       VAR_13++;
        break;
   }

   if (VAR_13 == 0) {
    VAR_13 = 0xffffffff;
    if (FUNC_11()) {
     return(VAR_3);
    }
    FUNC_14();
    *VAR_9 = VAR_13;
    return(VAR_4);
   }
  }
 } else {
  VAR_13 = 0;


  if (FUNC_4(VAR_11,VAR_12)) {
   VAR_15 = VAR_6;

   switch (FUNC_12()) {
   case 128:
    if (FUNC_9(VAR_11)) VAR_13++;
    break;
   case 130:
    if (FUNC_7(VAR_11)) {
     VAR_13 = 0;
     if (FUNC_11()) {
      return(VAR_3);
     }
     FUNC_14();
     VAR_15 = VAR_1;
    }
    break;
   case 129:
    if (VAR_14 == -1 &&
        FUNC_5(VAR_11,VAR_12))
     if (FUNC_7(VAR_11)) {
      VAR_13 = 0;
      if (FUNC_11()) {
       return(VAR_3);
      }
      FUNC_14();
      VAR_15 = VAR_1;
     }
     else VAR_13++;
   }
  }
 }
 *VAR_9 = VAR_13;
 if (VAR_15) {
  if (FUNC_10()) return(VAR_2);
  else FUNC_13();
 }
 return(VAR_4);
}
