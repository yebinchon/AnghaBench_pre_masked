
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; int dev; } ;
struct evergreen_mc_save {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
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
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_9 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct radeon_device *VAR_39, u32 VAR_40)
{
 struct evergreen_mc_save VAR_41;
 u32 VAR_42 = 0, VAR_43 = 0;
 u32 VAR_44;

 if (VAR_40 == 0)
  return;

 FUNC_6(VAR_39->dev, "GPU softreset: 0x%08X\n", VAR_40);

 FUNC_4(VAR_39);
 FUNC_6(VAR_39->dev, "  VM_CONTEXT1_PROTECTION_FAULT_ADDR   0x%08X\n",
   FUNC_0(VAR_37));
 FUNC_6(VAR_39->dev, "  VM_CONTEXT1_PROTECTION_FAULT_STATUS 0x%08X\n",
   FUNC_0(VAR_38));


 FUNC_3(VAR_39);
 FUNC_2(VAR_39);


 FUNC_5(VAR_39);


 FUNC_1(VAR_2, VAR_3 | VAR_4 | VAR_0);


 FUNC_1(VAR_1, VAR_6 | VAR_7);

 if (VAR_40 & VAR_12) {

  VAR_44 = FUNC_0(VAR_21 + VAR_22);
  VAR_44 |= VAR_24;
  FUNC_1(VAR_21 + VAR_22, VAR_44);
 }
 if (VAR_40 & VAR_13) {

  VAR_44 = FUNC_0(VAR_21 + VAR_23);
  VAR_44 |= VAR_24;
  FUNC_1(VAR_21 + VAR_23, VAR_44);
 }

 FUNC_9(VAR_39, &VAR_41);
 if (FUNC_10(VAR_39)) {
  FUNC_7(VAR_39->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_40 & (VAR_14 | VAR_9 | VAR_10))
  VAR_42 = VAR_25 | VAR_27;

 if (VAR_40 & VAR_10) {
  VAR_42 |= VAR_25;

  VAR_43 |= VAR_28;
 }

 if (VAR_40 & VAR_12)
  VAR_43 |= VAR_32;

 if (VAR_40 & VAR_13)
  VAR_43 |= VAR_33;

 if (VAR_40 & VAR_11)
  VAR_43 |= VAR_26;

 if (VAR_40 & VAR_18)
  VAR_42 |= VAR_31;

 if (VAR_40 & VAR_19)
  VAR_43 |= VAR_34;

 if (VAR_40 & VAR_16)
  VAR_43 |= VAR_29;

 if (VAR_40 & VAR_15)
  VAR_43 |= VAR_28;

 if (VAR_40 & VAR_20)
  VAR_43 |= VAR_35;

 if (!(VAR_39->flags & VAR_8)) {
  if (VAR_40 & VAR_17)
   VAR_43 |= VAR_30;
 }

 if (VAR_42) {
  VAR_44 = FUNC_0(VAR_5);
  VAR_44 |= VAR_42;
  FUNC_6(VAR_39->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_44);
  FUNC_1(VAR_5, VAR_44);
  VAR_44 = FUNC_0(VAR_5);

  FUNC_11(50);

  VAR_44 &= ~VAR_42;
  FUNC_1(VAR_5, VAR_44);
  VAR_44 = FUNC_0(VAR_5);
 }

 if (VAR_43) {
  VAR_44 = FUNC_0(VAR_36);
  VAR_44 |= VAR_43;
  FUNC_6(VAR_39->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_44);
  FUNC_1(VAR_36, VAR_44);
  VAR_44 = FUNC_0(VAR_36);

  FUNC_11(50);

  VAR_44 &= ~VAR_43;
  FUNC_1(VAR_36, VAR_44);
  VAR_44 = FUNC_0(VAR_36);
 }


 FUNC_11(50);

 FUNC_8(VAR_39, &VAR_41);
 FUNC_11(50);

 FUNC_4(VAR_39);
}
