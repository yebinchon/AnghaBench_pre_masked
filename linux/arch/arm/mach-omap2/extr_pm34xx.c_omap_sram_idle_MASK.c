
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,int (*) (int)) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 int VAR_8 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ) ;
 int const FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;

void FUNC_26(void)
{






 int VAR_9 = 0;
 int VAR_10 = 129;
 int VAR_11 = 129;
 int VAR_12 = 129;
 u32 VAR_13 = 0;

 VAR_10 = FUNC_20(VAR_5);
 switch (VAR_10) {
 case 129:
 case 128:

  VAR_9 = 0;
  break;
 case 130:
  VAR_9 = 3;
  break;
 default:

  FUNC_17("Invalid mpu state in sram_idle\n");
  return;
 }


 if (FUNC_22(VAR_6) == 129)
  FUNC_23(VAR_6, VAR_10);


 VAR_11 = FUNC_20(VAR_8);
 VAR_12 = FUNC_20(VAR_4);

 FUNC_19(((void*)0));


 if (VAR_11 == 130)
  FUNC_0();


 if (VAR_12 < 129) {
  if (VAR_12 == 130) {
   FUNC_10();
   FUNC_8();
  }
 }


 FUNC_14(VAR_12);

 FUNC_11();







 if (FUNC_2() && FUNC_15() >= VAR_2 &&
     (FUNC_16() == VAR_0 ||
      FUNC_16() == VAR_1) &&
     VAR_12 == 130)
  VAR_13 = FUNC_24(VAR_3);






 if (VAR_9)
  FUNC_6(VAR_7);
 if (VAR_9 == 1 || VAR_9 == 3)
  FUNC_3(VAR_9, FUNC_5);
 else
  FUNC_5(VAR_9);


 if (FUNC_2() && FUNC_15() >= VAR_2 &&
     (FUNC_16() == VAR_0 ||
      FUNC_16() == VAR_1) &&
     VAR_12 == 130)
  FUNC_25(VAR_13, VAR_3);


 if (VAR_12 < 129 &&
     FUNC_21(VAR_4) == 130) {
  FUNC_9();
  FUNC_7();
  FUNC_13();
  FUNC_4();
 } else {





  FUNC_12();
 }

 FUNC_18(((void*)0));


 if (VAR_11 == 130)
  FUNC_1();
}
