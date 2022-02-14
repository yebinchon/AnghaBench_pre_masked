
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int flags; int dev; } ;
struct evergreen_mc_save {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
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
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct radeon_device*,struct evergreen_mc_save*) ;
 int FUNC_5 (struct radeon_device*,struct evergreen_mc_save*) ;
 scalar_t__ FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct radeon_device *VAR_39, u32 VAR_40)
{
 struct evergreen_mc_save VAR_41;
 u32 VAR_42 = 0, VAR_43 = 0;
 u32 VAR_44;

 if (VAR_40 == 0)
  return;

 FUNC_2(VAR_39->dev, "GPU softreset: 0x%08X\n", VAR_40);

 FUNC_7(VAR_39);


 FUNC_1(VAR_0, VAR_1 | VAR_2);

 if (VAR_40 & VAR_10) {

  VAR_44 = FUNC_0(VAR_3);
  VAR_44 &= ~VAR_4;
  FUNC_1(VAR_3, VAR_44);
 }

 FUNC_8(50);

 FUNC_5(VAR_39, &VAR_41);
 if (FUNC_6(VAR_39)) {
  FUNC_3(VAR_39->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_40 & (VAR_11 | VAR_7)) {
  VAR_42 |= VAR_20 |
   VAR_18 |
   VAR_26 |
   VAR_28 |
   VAR_31 |
   VAR_32 |
   VAR_30 |
   VAR_34 |
   VAR_33 |
   VAR_35 |
   VAR_36;
 }

 if (VAR_40 & VAR_8) {
  VAR_42 |= VAR_19 |
   VAR_36;

  VAR_43 |= VAR_23;
 }

 if (VAR_40 & VAR_10)
  VAR_43 |= VAR_22;

 if (VAR_40 & VAR_9)
  VAR_43 |= VAR_21;

 if (VAR_40 & VAR_15)
  VAR_43 |= VAR_27;

 if (VAR_40 & VAR_16)
  VAR_43 |= VAR_29;

 if (VAR_40 & VAR_13)
  VAR_43 |= VAR_24;

 if (VAR_40 & VAR_12)
  VAR_43 |= VAR_23;

 if (VAR_40 & VAR_17)
  VAR_43 |= VAR_37;

 if (!(VAR_39->flags & VAR_6)) {
  if (VAR_40 & VAR_14)
   VAR_43 |= VAR_25;
 }

 if (VAR_42) {
  VAR_44 = FUNC_0(VAR_5);
  VAR_44 |= VAR_42;
  FUNC_2(VAR_39->dev, "GRBM_SOFT_RESET=0x%08X\n", VAR_44);
  FUNC_1(VAR_5, VAR_44);
  VAR_44 = FUNC_0(VAR_5);

  FUNC_8(50);

  VAR_44 &= ~VAR_42;
  FUNC_1(VAR_5, VAR_44);
  VAR_44 = FUNC_0(VAR_5);
 }

 if (VAR_43) {
  VAR_44 = FUNC_0(VAR_38);
  VAR_44 |= VAR_43;
  FUNC_2(VAR_39->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_44);
  FUNC_1(VAR_38, VAR_44);
  VAR_44 = FUNC_0(VAR_38);

  FUNC_8(50);

  VAR_44 &= ~VAR_43;
  FUNC_1(VAR_38, VAR_44);
  VAR_44 = FUNC_0(VAR_38);
 }


 FUNC_8(50);

 FUNC_4(VAR_39, &VAR_41);
 FUNC_8(50);

 FUNC_7(VAR_39);
}
