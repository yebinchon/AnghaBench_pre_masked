
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rv515_mc_save {int dummy; } ;
struct radeon_device {scalar_t__ family; int flags; int dev; } ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,char*,int) ;
 int FUNC_25 (int ,char*) ;
 int FUNC_26 (int) ;
 scalar_t__ FUNC_27 (struct radeon_device*) ;
 int FUNC_28 (struct radeon_device*) ;
 int FUNC_29 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_30 (struct radeon_device*,struct rv515_mc_save*) ;
 int FUNC_31 (int) ;

__attribute__((used)) static void FUNC_32(struct radeon_device *VAR_20, u32 VAR_21)
{
 struct rv515_mc_save VAR_22;
 u32 VAR_23 = 0, VAR_24 = 0;
 u32 VAR_25;

 if (VAR_21 == 0)
  return;

 FUNC_24(VAR_20->dev, "GPU softreset: 0x%08X\n", VAR_21);

 FUNC_28(VAR_20);


 if (VAR_20->family >= VAR_0)
  FUNC_23(VAR_17, FUNC_21(1) | FUNC_22(1));
 else
  FUNC_23(VAR_17, FUNC_21(1));


 FUNC_23(VAR_14, 0);

 if (VAR_21 & VAR_6) {

  VAR_25 = FUNC_0(VAR_1);
  VAR_25 &= ~VAR_2;
  FUNC_23(VAR_1, VAR_25);
 }

 FUNC_26(50);

 FUNC_30(VAR_20, &VAR_22);
 if (FUNC_27(VAR_20)) {
  FUNC_25(VAR_20->dev, "Wait for MC idle timedout !\n");
 }

 if (VAR_21 & (VAR_7 | VAR_4)) {
  if (VAR_20->family >= VAR_0)
   VAR_23 |= FUNC_10(1) |
    FUNC_7(1) |
    FUNC_11(1) |
    FUNC_12(1) |
    FUNC_15(1) |
    FUNC_16(1) |
    FUNC_13(1) |
    FUNC_18(1) |
    FUNC_17(1) |
    FUNC_19(1) |
    FUNC_20(1);
  else
   VAR_23 |= FUNC_9(1) |
    FUNC_10(1) |
    FUNC_7(1) |
    FUNC_11(1) |
    FUNC_12(1) |
    FUNC_14(1) |
    FUNC_15(1) |
    FUNC_16(1) |
    FUNC_13(1) |
    FUNC_18(1) |
    FUNC_17(1) |
    FUNC_19(1) |
    FUNC_20(1);
 }

 if (VAR_21 & VAR_5) {
  VAR_23 |= FUNC_8(1) |
   FUNC_20(1);

  VAR_24 |= FUNC_1(1);
 }

 if (VAR_21 & VAR_6) {
  if (VAR_20->family >= VAR_0)
   VAR_24 |= VAR_15;
  else
   VAR_24 |= VAR_18;
 }

 if (VAR_21 & VAR_11)
  VAR_24 |= FUNC_4(1);

 if (VAR_21 & VAR_12)
  VAR_24 |= FUNC_5(1);

 if (VAR_21 & VAR_9)
  VAR_24 |= FUNC_2(1);

 if (VAR_21 & VAR_8)
  VAR_24 |= FUNC_1(1);

 if (!(VAR_20->flags & VAR_3)) {
  if (VAR_21 & VAR_10)
   VAR_24 |= FUNC_3(1);
 }

 if (VAR_21 & VAR_13)
  VAR_24 |= FUNC_6(1);

 if (VAR_23) {
  VAR_25 = FUNC_0(VAR_16);
  VAR_25 |= VAR_23;
  FUNC_24(VAR_20->dev, "R_008020_GRBM_SOFT_RESET=0x%08X\n", VAR_25);
  FUNC_23(VAR_16, VAR_25);
  VAR_25 = FUNC_0(VAR_16);

  FUNC_31(50);

  VAR_25 &= ~VAR_23;
  FUNC_23(VAR_16, VAR_25);
  VAR_25 = FUNC_0(VAR_16);
 }

 if (VAR_24) {
  VAR_25 = FUNC_0(VAR_19);
  VAR_25 |= VAR_24;
  FUNC_24(VAR_20->dev, "SRBM_SOFT_RESET=0x%08X\n", VAR_25);
  FUNC_23(VAR_19, VAR_25);
  VAR_25 = FUNC_0(VAR_19);

  FUNC_31(50);

  VAR_25 &= ~VAR_24;
  FUNC_23(VAR_19, VAR_25);
  VAR_25 = FUNC_0(VAR_19);
 }


 FUNC_26(1);

 FUNC_29(VAR_20, &VAR_22);
 FUNC_31(50);

 FUNC_28(VAR_20);
}
