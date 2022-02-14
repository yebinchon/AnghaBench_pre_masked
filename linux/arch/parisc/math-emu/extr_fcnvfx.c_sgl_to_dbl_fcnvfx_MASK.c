
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int sgl_floating_point ;
typedef int dbl_integer ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int,int *) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (unsigned int,int,int,unsigned int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 int FUNC_6 (int,unsigned int) ;
 int FUNC_7 (int,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int VAR_4 ;



 int FUNC_10 () ;
 int VAR_5 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (unsigned int) ;
 int FUNC_14 (unsigned int) ;
 scalar_t__ FUNC_15 (unsigned int,int) ;
 scalar_t__ FUNC_16 (unsigned int) ;
 scalar_t__ FUNC_17 (unsigned int) ;
 int FUNC_18 (unsigned int,int) ;
 scalar_t__ FUNC_19 (unsigned int) ;
 int FUNC_20 (unsigned int,int) ;
 scalar_t__ FUNC_21 (unsigned int) ;
 scalar_t__ VAR_6 ;

int
FUNC_22(
  sgl_floating_point *VAR_7,
  unsigned int *VAR_8,
  dbl_integer *VAR_9,
  unsigned int *VAR_10)
{
 register int VAR_11, VAR_12;
 register unsigned int VAR_13, VAR_14, VAR_15;
 register boolean VAR_16 = VAR_1;

 VAR_13 = *VAR_7;
 VAR_11 = FUNC_14(VAR_13) - VAR_5;




 if (VAR_11 > VAR_0) {

  if ((VAR_11 > VAR_0 + 1) ||
  FUNC_17(VAR_13) || FUNC_21(VAR_13)) {
                        if (FUNC_21(VAR_13)) {
                              VAR_12 = 0x7fffffff;
         VAR_15 = 0xffffffff;
   }
                        else {
       VAR_12 = 0x80000000;
       VAR_15 = 0;
   }
                 if (FUNC_9()) {
                            return(VAR_3);
                        }
                        FUNC_12();
              FUNC_0(VAR_12,VAR_15,VAR_9);
   return(VAR_4);
  }
  FUNC_5(VAR_12,VAR_15);
  FUNC_0(VAR_12,VAR_15,VAR_9);
  return(VAR_4);
 }



 if (VAR_11 >= 0) {
  VAR_14 = VAR_13;
  FUNC_13(VAR_14);
  FUNC_2(VAR_14,VAR_11,VAR_12,VAR_15);
  if (FUNC_19(VAR_13)) {
   FUNC_6(VAR_12,VAR_15);
  }


  if (FUNC_15(VAR_13,VAR_11)) {
   VAR_16 = VAR_6;

                        switch (FUNC_10()) {
                        case 128:
                             if (FUNC_21(VAR_13)) {
    FUNC_3(VAR_12,VAR_15);
        }
                             break;
                        case 130:
                             if (FUNC_19(VAR_13)) {
    FUNC_1(VAR_12,VAR_15);
        }
                             break;
                        case 129:
                             if (FUNC_18(VAR_13,VAR_11))
                                if (FUNC_20(VAR_13,VAR_11) ||
    (FUNC_4(VAR_15)))
       if (FUNC_21(VAR_13)) {
          FUNC_3(VAR_12,VAR_15);
       }
                                   else {
          FUNC_1(VAR_12,VAR_15);
       }
                        }
                }
        }
 else {
  FUNC_7(VAR_12,VAR_15);


  if (FUNC_16(VAR_13)) {
   VAR_16 = VAR_6;

                        switch (FUNC_10()) {
                        case 128:
                             if (FUNC_21(VAR_13)) {
    FUNC_3(VAR_12,VAR_15);
        }
                             break;
                        case 130:
                             if (FUNC_19(VAR_13)) {
    FUNC_1(VAR_12,VAR_15);
        }
                             break;
                        case 129:
                             if (VAR_11 == -1)
                                if (FUNC_17(VAR_13))
                                   if (FUNC_21(VAR_13)) {
          FUNC_3(VAR_12,VAR_15);
       }
                                   else {
          FUNC_1(VAR_12,VAR_15);
       }
   }
  }
 }
 FUNC_0(VAR_12,VAR_15,VAR_9);
 if (VAR_16) {
  if (FUNC_8()) return(VAR_2);
  else FUNC_11();
 }
 return(VAR_4);
}
