
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dbl_integer ;
typedef int dbl_floating_point ;
typedef scalar_t__ boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_9 (unsigned int) ;
 int FUNC_10 (int,unsigned int,int *) ;
 int FUNC_11 (int,unsigned int) ;
 int FUNC_12 (unsigned int,unsigned int,int,int,unsigned int) ;
 int FUNC_13 (int,unsigned int) ;
 int FUNC_14 (unsigned int) ;
 int FUNC_15 (int,unsigned int) ;
 int FUNC_16 (int,unsigned int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 int VAR_5 ;



 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 scalar_t__ VAR_6 ;

int
FUNC_22(
      dbl_floating_point *VAR_7,
      unsigned int *VAR_8,
      dbl_integer *VAR_9,
      unsigned int *VAR_10)
{
 register int VAR_11, VAR_12;
 register unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 register boolean VAR_18 = VAR_2;

 FUNC_1(VAR_7,VAR_13,VAR_14);
 VAR_11 = FUNC_2(VAR_13) - VAR_0;




 if (VAR_11 > VAR_1) {

  if ((VAR_11 > VAR_1 + 1) ||
  FUNC_5(VAR_13,VAR_14) || FUNC_9(VAR_13)) {
                        if (FUNC_9(VAR_13)) {
                              VAR_12 = 0x7fffffff;
         VAR_17 = 0xffffffff;
   }
                        else {
       VAR_12 = 0x80000000;
       VAR_17 = 0;
   }
                 if (FUNC_18()) {
                            return(VAR_4);
                        }
                        FUNC_21();
              FUNC_10(VAR_12,VAR_17,VAR_9);
   return(VAR_5);
  }
 }




 if (VAR_11 >= 0) {
  VAR_15 = VAR_13;
  VAR_16 = VAR_14;
  FUNC_0(VAR_15);
  FUNC_12(VAR_15,VAR_16,VAR_11,VAR_12,
  VAR_17);
  if (FUNC_7(VAR_13)) {
   FUNC_15(VAR_12,VAR_17);
  }


  if (FUNC_3(VAR_13,VAR_14,VAR_11)) {
                        VAR_18 = VAR_6;

                        switch (FUNC_19()) {
                        case 128:
                             if (FUNC_9(VAR_13)) {
    FUNC_13(VAR_12,VAR_17);
        }
                             break;
                        case 130:
                             if (FUNC_7(VAR_13)) {
    FUNC_11(VAR_12,VAR_17);
        }
                             break;
                        case 129:
                             if (FUNC_6(VAR_13,VAR_14,VAR_11))
                                if (FUNC_8(VAR_13,VAR_14,VAR_11) ||
    (FUNC_14(VAR_17)))
                                   if (FUNC_9(VAR_13)) {
          FUNC_13(VAR_12,VAR_17);
       }
                                   else {
          FUNC_11(VAR_12,VAR_17);
       }
                        }
                }
 }
 else {
  FUNC_16(VAR_12,VAR_17);


  if (FUNC_4(VAR_13,VAR_14)) {
                        VAR_18 = VAR_6;

                        switch (FUNC_19()) {
                        case 128:
                             if (FUNC_9(VAR_13)) {
    FUNC_13(VAR_12,VAR_17);
        }
                             break;
                        case 130:
                             if (FUNC_7(VAR_13)) {
    FUNC_11(VAR_12,VAR_17);
        }
                             break;
                        case 129:
                             if (VAR_11 == -1)
                                if (FUNC_5(VAR_13,VAR_14))
                                   if (FUNC_9(VAR_13)) {
          FUNC_13(VAR_12,VAR_17);
       }
                                   else {
          FUNC_11(VAR_12,VAR_17);
       }
   }
                }
 }
 FUNC_10(VAR_12,VAR_17,VAR_9);
        if (VAR_18) {
                if (FUNC_17()) return(VAR_3);
         else FUNC_20();
        }
 return(VAR_5);
}
