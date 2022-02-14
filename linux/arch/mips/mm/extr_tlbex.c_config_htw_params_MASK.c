
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 unsigned long VAR_27 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_28 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,unsigned long) ;
 int FUNC_5 () ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (unsigned long) ;

__attribute__((used)) static void FUNC_10(void)
{
 unsigned long VAR_29, VAR_30, VAR_31;
 unsigned int VAR_32;
 VAR_29 = FUNC_6();

 VAR_29 &= ~VAR_5;
 VAR_29 |= VAR_20 << VAR_6;

 VAR_29 &= ~VAR_11;
 VAR_29 |= VAR_19 << VAR_12;
 if (VAR_1 >= 3) {
  VAR_29 &= ~VAR_7;
  VAR_29 |= VAR_22 << VAR_8;
 }

 VAR_31 = VAR_27 << VAR_10;
 VAR_29 |= VAR_31;
 FUNC_8(VAR_29);

 FUNC_1();
 VAR_29 = FUNC_6();
 if (((VAR_29 & VAR_9) << VAR_10)
  != VAR_31) {
  FUNC_4("Unsupported PTEI field value: 0x%lx. HTW will not be enabled",
   VAR_31);




  VAR_28.options &= ~VAR_2;
  return;
 }

 VAR_30 = FUNC_2(VAR_24) << VAR_13;
 VAR_30 |= FUNC_2(VAR_26) << VAR_18;
 if (VAR_1 >= 3)
  VAR_30 |= FUNC_2(VAR_25) << VAR_14;


 if (FUNC_0(VAR_0))
  VAR_30 |= VAR_15;

 VAR_30 |= ((VAR_23 - VAR_21) << VAR_17)
   & VAR_16;

 FUNC_9(VAR_30);


 FUNC_1();





 VAR_32 = 1 << VAR_3;
 if (FUNC_0(VAR_0))
  VAR_32 |= VAR_4;
 FUNC_7(VAR_32);
 FUNC_3("Hardware Page Table Walker enabled\n");

 FUNC_5();
}
