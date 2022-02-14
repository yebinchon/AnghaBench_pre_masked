
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int) ;
 int FUNC_27 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_28 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_29 (struct radeon_device*) ;

u32 FUNC_30(struct radeon_device *VAR_15)
{
 u32 VAR_16 = 0;
 u32 VAR_17;


 VAR_17 = FUNC_28(VAR_14);
 if (VAR_15->family >= VAR_0) {
  if (FUNC_18(VAR_17) | FUNC_20(VAR_17) |
      FUNC_21(VAR_17) | FUNC_23(VAR_17) |
      FUNC_25(VAR_17) | FUNC_26(VAR_17) |
      FUNC_16(VAR_17) | FUNC_12(VAR_17) |
      FUNC_22(VAR_17) | FUNC_27(VAR_17))
   VAR_16 |= VAR_6;
 } else {
  if (FUNC_18(VAR_17) | FUNC_20(VAR_17) |
      FUNC_21(VAR_17) | FUNC_23(VAR_17) |
      FUNC_24(VAR_17) | FUNC_26(VAR_17) |
      FUNC_16(VAR_17) | FUNC_12(VAR_17) |
      FUNC_22(VAR_17) | FUNC_27(VAR_17))
   VAR_16 |= VAR_6;
 }

 if (FUNC_13(VAR_17) | FUNC_19(VAR_17) |
     FUNC_14(VAR_17) | FUNC_15(VAR_17))
  VAR_16 |= VAR_3;

 if (FUNC_17(VAR_17))
  VAR_16 |= VAR_7 | VAR_6 | VAR_3;


 VAR_17 = FUNC_28(VAR_2);
 if (!(VAR_17 & VAR_1))
  VAR_16 |= VAR_5;


 VAR_17 = FUNC_28(VAR_13);
 if (FUNC_9(VAR_17) | FUNC_8(VAR_17))
  VAR_16 |= VAR_10;

 if (FUNC_2(VAR_17))
  VAR_16 |= VAR_8;

 if (FUNC_10(VAR_17))
  VAR_16 |= VAR_11;

 if (FUNC_1(VAR_17))
  VAR_16 |= VAR_7;

 if (FUNC_11(VAR_17))
  VAR_16 |= VAR_12;

 if (FUNC_3(VAR_17) | FUNC_7(VAR_17) |
     FUNC_6(VAR_17) | FUNC_5(VAR_17) |
     FUNC_4(VAR_17))
  VAR_16 |= VAR_9;

 if (FUNC_29(VAR_15))
  VAR_16 |= VAR_4;


 if (VAR_16 & VAR_9) {
  FUNC_0("MC busy: 0x%08X, clearing.\n", VAR_16);
  VAR_16 &= ~VAR_9;
 }

 return VAR_16;
}
