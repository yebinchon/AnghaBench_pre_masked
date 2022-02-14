
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_unsigned ;
typedef int dbl_floating_point ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (int *,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 () ;
 int VAR_3 ;



 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_13 (unsigned int,unsigned int,int,unsigned int) ;

int
FUNC_14(
      dbl_unsigned *VAR_4,
      unsigned int *VAR_5,
      dbl_floating_point *VAR_6,
      unsigned int *VAR_7)
{
 register int VAR_8;
 register unsigned int VAR_9, VAR_10, VAR_11 = 0, VAR_12 = 0;

 FUNC_6(VAR_4,VAR_9,VAR_10);


 if (VAR_9 == 0 && VAR_10 ==0) {
         FUNC_5(VAR_11,VAR_12);
         FUNC_0(VAR_11,VAR_12,VAR_6);
         return(VAR_3);
 }



 VAR_8 = 16;
 if (VAR_9 == 0) {





  FUNC_8(VAR_10,VAR_8);

  VAR_9 = VAR_10 << (VAR_8+1);
  VAR_10 = 0;




  VAR_8 += 32;
 }
 else {





  FUNC_8(VAR_9,VAR_8);

  if (VAR_8 >= 0) {
   FUNC_13(VAR_9,VAR_10,(31-VAR_8),
    VAR_9);
   VAR_10 <<= VAR_8+1;
  }
 }
 FUNC_4(VAR_11, VAR_9 >> VAR_1);
 FUNC_12(VAR_9,VAR_10,VAR_1,VAR_12);
 FUNC_3(VAR_11, (62+VAR_0) - VAR_8);


 if (FUNC_7(VAR_10)) {
  switch (FUNC_10()) {
   case 128:
    FUNC_1(VAR_11,VAR_12);
    break;
   case 130:
    break;
   case 129:
    FUNC_2(VAR_10,VAR_11,
    VAR_12);
    break;
  }
  if (FUNC_9()) {
   FUNC_0(VAR_11,VAR_12,VAR_6);
   return(VAR_2);
  }
  else FUNC_11();
 }
 FUNC_0(VAR_11,VAR_12,VAR_6);
 return(VAR_3);
}
