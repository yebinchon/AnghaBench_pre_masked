
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int rate; int num_lanes; int capabilities; } ;
struct TYPE_3__ {int assr; int scrambler_dis; TYPE_2__ base; scalar_t__ spread; } ;
struct drm_dp_aux {int dummy; } ;
struct tc_data {int assr; struct device* dev; TYPE_1__ link; int regmap; struct drm_dp_aux aux; } ;
struct device {int dummy; } ;


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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct drm_dp_aux*,int*) ;
 int FUNC_4 (struct drm_dp_aux*,int ,int*) ;
 int FUNC_5 (struct drm_dp_aux*,int ,int*,int) ;
 int FUNC_6 (struct drm_dp_aux*,int ,int) ;
 int FUNC_7 (struct drm_dp_aux*,TYPE_2__*) ;
 int FUNC_8 (int ,int ,int*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct tc_data*,int ) ;
 int FUNC_12 (struct tc_data*,int ,int ,int ,int,int) ;
 int FUNC_13 (struct tc_data*) ;
 int FUNC_14 (struct tc_data*) ;
 int FUNC_15 (struct tc_data*) ;
 int* VAR_43 ;
 int* VAR_44 ;
 int FUNC_16 (int,int) ;

__attribute__((used)) static int FUNC_17(struct tc_data *VAR_45)
{
 struct drm_dp_aux *VAR_46 = &VAR_45->aux;
 struct device *VAR_47 = VAR_45->dev;
 u32 VAR_48;
 u32 VAR_49;
 int VAR_50;
 u8 VAR_51[VAR_23];

 FUNC_1(VAR_45->dev, "link enable\n");

 VAR_50 = FUNC_8(VAR_45->regmap, VAR_2, &VAR_49);
 if (VAR_50)
  return VAR_50;

 if (FUNC_0(VAR_49 & VAR_19)) {
  VAR_50 = FUNC_10(VAR_45->regmap, VAR_2, 0);
  if (VAR_50)
   return VAR_50;
 }

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_7, FUNC_14(VAR_45));
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_15,
   (VAR_45->link.spread ? VAR_11 : 0) |
   ((VAR_45->link.base.rate != 162000) ? VAR_9 : 0));
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_13(VAR_45);
 if (VAR_50)
  return VAR_50;


 VAR_48 = VAR_0 | VAR_42 | VAR_37 | VAR_38;
 if (VAR_45->link.base.num_lanes == 2)
  VAR_48 |= VAR_36;

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_24, VAR_48);
 if (VAR_50)
  return VAR_50;


 VAR_50 = FUNC_11(VAR_45, VAR_5);
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_11(VAR_45, VAR_14);
 if (VAR_50)
  return VAR_50;


 VAR_48 |= VAR_25 | VAR_40 | VAR_39;
 VAR_50 = FUNC_10(VAR_45->regmap, VAR_24, VAR_48);
 FUNC_16(100, 200);
 VAR_48 &= ~(VAR_25 | VAR_40 | VAR_39);
 VAR_50 = FUNC_10(VAR_45->regmap, VAR_24, VAR_48);

 VAR_50 = FUNC_12(VAR_45, VAR_24, VAR_41, VAR_41, 1, 1000);
 if (VAR_50) {
  FUNC_2(VAR_47, "timeout waiting for phy become ready");
  return VAR_50;
 }


 VAR_50 = FUNC_9(VAR_45->regmap, VAR_4, VAR_1, VAR_1);
 if (VAR_50)
  return VAR_50;
 if (VAR_45->assr != VAR_45->link.assr) {
  FUNC_1(VAR_47, "Trying to set display to ASSR: %d\n",
   VAR_45->assr);

  VAR_51[0] = VAR_45->assr;
  VAR_50 = FUNC_6(VAR_46, VAR_18, VAR_51[0]);
  if (VAR_50 < 0)
   goto err_dpcd_read;

  VAR_50 = FUNC_4(VAR_46, VAR_18, VAR_51);
  if (VAR_50 < 0)
   goto err_dpcd_read;

  if (VAR_51[0] != VAR_45->assr) {
   FUNC_1(VAR_47, "Failed to switch display ASSR to %d, falling back to unscrambled mode\n",
    VAR_45->assr);

   VAR_45->link.scrambler_dis = 1;
  }
 }


 VAR_50 = FUNC_7(VAR_46, &VAR_45->link.base);
 if (VAR_50 < 0)
  goto err_dpcd_write;


 VAR_51[0] = VAR_45->link.spread ? VAR_27 : 0x00;

 VAR_51[1] = VAR_26;
 VAR_50 = FUNC_5(VAR_46, VAR_17, VAR_51, 2);
 if (VAR_50 < 0)
  goto err_dpcd_write;


 VAR_51[0] = VAR_51[1] = VAR_33 |
     VAR_32;
 VAR_50 = FUNC_5(VAR_46, VAR_28, VAR_51, 2);
 if (VAR_50 < 0)
  goto err_dpcd_write;




 VAR_50 = FUNC_10(VAR_45->regmap, VAR_6,
      VAR_22 |
      VAR_29);
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_3,
      (15 << 28) |
      (15 << 24) |
      (0xd << 0));
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_7,
      FUNC_14(VAR_45) | VAR_10 |
      VAR_8 |
      VAR_12);
 if (VAR_50)
  return VAR_50;


 VAR_50 = FUNC_10(VAR_45->regmap, VAR_2,
      ((VAR_45->link.base.capabilities &
        VAR_21) ? VAR_34 : 0) |
      VAR_19);
 if (VAR_50)
  return VAR_50;



 VAR_50 = FUNC_15(VAR_45);
 if (VAR_50 < 0)
  return VAR_50;

 if (VAR_50) {
  FUNC_2(VAR_45->dev, "Link training phase 1 failed: %s\n",
   VAR_43[VAR_50]);
  return -VAR_35;
 }




 VAR_50 = FUNC_10(VAR_45->regmap, VAR_6,
      VAR_22 |
      VAR_30);
 if (VAR_50)
  return VAR_50;

 VAR_50 = FUNC_10(VAR_45->regmap, VAR_7,
      FUNC_14(VAR_45) | VAR_10 |
      VAR_8 |
      VAR_13);
 if (VAR_50)
  return VAR_50;


 VAR_50 = FUNC_15(VAR_45);
 if (VAR_50 < 0)
  return VAR_50;

 if (VAR_50) {
  FUNC_2(VAR_45->dev, "Link training phase 2 failed: %s\n",
   VAR_44[VAR_50]);
  return -VAR_35;
 }
 VAR_50 = FUNC_10(VAR_45->regmap, VAR_7, FUNC_14(VAR_45) |
      VAR_8);
 if (VAR_50)
  return VAR_50;



 VAR_51[0] = VAR_45->link.scrambler_dis ? VAR_22 : 0x00;
 VAR_50 = FUNC_6(VAR_46, VAR_31, VAR_51[0]);
 if (VAR_50 < 0)
  goto err_dpcd_write;


 VAR_50 = FUNC_3(VAR_46, VAR_51);
 if (VAR_50 < 0)
  goto err_dpcd_read;

 VAR_50 = 0;

 VAR_49 = VAR_51[0] & VAR_16;

 if (VAR_49 != VAR_16) {
  FUNC_2(VAR_45->dev, "Lane 0 failed: %x\n", VAR_49);
  VAR_50 = -VAR_35;
 }

 if (VAR_45->link.base.num_lanes == 2) {
  VAR_49 = (VAR_51[0] >> 4) & VAR_16;

  if (VAR_49 != VAR_16) {
   FUNC_2(VAR_45->dev, "Lane 1 failed: %x\n", VAR_49);
   VAR_50 = -VAR_35;
  }

  if (!(VAR_51[2] & VAR_20)) {
   FUNC_2(VAR_45->dev, "Interlane align failed\n");
   VAR_50 = -VAR_35;
  }
 }

 if (VAR_50) {
  FUNC_2(VAR_47, "0x0202 LANE0_1_STATUS:            0x%02x\n", VAR_51[0]);
  FUNC_2(VAR_47, "0x0203 LANE2_3_STATUS             0x%02x\n", VAR_51[1]);
  FUNC_2(VAR_47, "0x0204 LANE_ALIGN_STATUS_UPDATED: 0x%02x\n", VAR_51[2]);
  FUNC_2(VAR_47, "0x0205 SINK_STATUS:               0x%02x\n", VAR_51[3]);
  FUNC_2(VAR_47, "0x0206 ADJUST_REQUEST_LANE0_1:    0x%02x\n", VAR_51[4]);
  FUNC_2(VAR_47, "0x0207 ADJUST_REQUEST_LANE2_3:    0x%02x\n", VAR_51[5]);
  return VAR_50;
 }

 return 0;
err_dpcd_read:
 FUNC_2(VAR_45->dev, "Failed to read DPCD: %d\n", VAR_50);
 return VAR_50;
err_dpcd_write:
 FUNC_2(VAR_45->dev, "Failed to write DPCD: %d\n", VAR_50);
 return VAR_50;
}
