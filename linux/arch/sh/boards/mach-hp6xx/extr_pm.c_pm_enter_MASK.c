
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (void*,int *,int) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_14(void)
{
 u8 VAR_16, VAR_17;
 u16 VAR_18, VAR_19;
 u32 VAR_20, VAR_21;

 FUNC_9();


 VAR_17 = FUNC_10();
 VAR_17 &= ~VAR_13;
 VAR_17 |= VAR_12;
 FUNC_12(VAR_17);
 VAR_17 = FUNC_10();
 FUNC_11(0);


 VAR_18 = FUNC_1(VAR_0);
 VAR_18 &= ~(VAR_1 | VAR_2);
 FUNC_3(VAR_18, VAR_0);


 VAR_16 = FUNC_0(VAR_9);
 FUNC_2(VAR_16 | VAR_11 | VAR_10, VAR_9);


 VAR_19 = FUNC_1(VAR_5);
 FUNC_3(VAR_19 & ~VAR_6, VAR_5);


 asm volatile("stc vbr, %0" : "=r" (VAR_21));
 VAR_20 = FUNC_7(VAR_3);
 FUNC_13(50);
 FUNC_8((void*)(VAR_20 + VAR_4),
        &VAR_15, &VAR_14 - &VAR_15);
 asm volatile("ldc %0, vbr" : : "r" (VAR_20));

 FUNC_3(0, VAR_8);
 FUNC_3(VAR_19 | VAR_6 | VAR_7, VAR_5);

 FUNC_5();

 asm volatile("ldc %0, vbr" : : "r" (VAR_21));

 FUNC_6(VAR_20);


 VAR_18 = FUNC_1(VAR_0);
 VAR_18 |= VAR_2;
 FUNC_3(VAR_18, VAR_0);
 FUNC_13(50);
 VAR_18 |= VAR_1;
 FUNC_3(VAR_18, VAR_0);

 FUNC_2(VAR_16, VAR_9);

 FUNC_4();
}
