
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int dev; } ;
struct evergreen_mc_save {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_5 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct radeon_device *VAR_46, u32 VAR_47)
{
 struct evergreen_mc_save VAR_48;
 u32 VAR_49 = 0, VAR_50 = 0;
 u32 VAR_51;

 if (VAR_47 == 0)
  return;

 FUNC_2(VAR_46->dev, "GPU softreset: 0x%08X\n", VAR_47);

 FUNC_7(VAR_46);
 FUNC_2(VAR_46->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
   FUNC_0(VAR_44));
 FUNC_2(VAR_46->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
   FUNC_0(VAR_45));


 FUNC_9(VAR_46);
 FUNC_8(VAR_46);


 FUNC_10(VAR_46);


 FUNC_1(VAR_1, VAR_2 | VAR_3 | VAR_0);

 if (VAR_47 & VAR_12) {

  VAR_51 = FUNC_0(VAR_6 + VAR_4);
  VAR_51 &= ~VAR_7;
  FUNC_1(VAR_6 + VAR_4, VAR_51);
 }
 if (VAR_47 & VAR_13) {

  VAR_51 = FUNC_0(VAR_6 + VAR_5);
  VAR_51 &= ~VAR_7;
  FUNC_1(VAR_6 + VAR_5, VAR_51);
 }

 FUNC_11(50);

 FUNC_5(VAR_46, &VAR_48);
 if (FUNC_6(VAR_46)) {
  FUNC_3(VAR_46->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_47 & (VAR_14 | VAR_9 | VAR_10)) {
  VAR_49 = VAR_22 |
   VAR_24 |
   VAR_28 |
   VAR_33 |
   VAR_35 |
   VAR_21 |
   VAR_37 |
   VAR_38 |
   VAR_40 |
   VAR_39 |
   VAR_41 |
   VAR_30;
 }

 if (VAR_47 & VAR_10) {
  VAR_49 |= VAR_23 | VAR_41;

  VAR_50 |= VAR_29;
 }

 if (VAR_47 & VAR_12)
  VAR_50 |= VAR_26;

 if (VAR_47 & VAR_13)
  VAR_50 |= VAR_27;

 if (VAR_47 & VAR_11)
  VAR_50 |= VAR_25;

 if (VAR_47 & VAR_18)
  VAR_49 |= VAR_34;

 if (VAR_47 & VAR_19)
  VAR_50 |= VAR_36;

 if (VAR_47 & VAR_16)
  VAR_50 |= VAR_31;

 if (VAR_47 & VAR_15)
  VAR_50 |= VAR_29;

 if (VAR_47 & VAR_20)
  VAR_50 |= VAR_42;

 if (VAR_47 & VAR_17)
  VAR_50 |= VAR_32;

 if (VAR_49) {
  VAR_51 = FUNC_0(VAR_8);
  VAR_51 |= VAR_49;
  FUNC_2(VAR_46->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_51);
  FUNC_1(VAR_8, VAR_51);
  VAR_51 = FUNC_0(VAR_8);

  FUNC_11(50);

  VAR_51 &= ~VAR_49;
  FUNC_1(VAR_8, VAR_51);
  VAR_51 = FUNC_0(VAR_8);
 }

 if (VAR_50) {
  VAR_51 = FUNC_0(VAR_43);
  VAR_51 |= VAR_50;
  FUNC_2(VAR_46->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_51);
  FUNC_1(VAR_43, VAR_51);
  VAR_51 = FUNC_0(VAR_43);

  FUNC_11(50);

  VAR_51 &= ~VAR_50;
  FUNC_1(VAR_43, VAR_51);
  VAR_51 = FUNC_0(VAR_43);
 }


 FUNC_11(50);

 FUNC_4(VAR_46, &VAR_48);
 FUNC_11(50);

 FUNC_7(VAR_46);
}
