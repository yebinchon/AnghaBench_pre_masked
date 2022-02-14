
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u32 ;
struct v4l2_mbus_framefmt {int width; int height; scalar_t__ field; } ;
struct v4l2_mbus_config {int dummy; } ;
struct ipu_csi_bus_config {int data_width; int data_fmt; int data_pol; int vsync_pol; int hsync_pol; int pixclk_pol; int ext_vsync; int clk_mode; int pack_tight; int force_eof; int data_en_pol; } ;
struct ipu_csi {int lock; TYPE_1__* ipu; } ;
struct TYPE_2__ {int dev; } ;


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
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ipu_csi_bus_config*,struct v4l2_mbus_config const*,struct v4l2_mbus_framefmt const*) ;
 int FUNC_3 (struct ipu_csi*,int ) ;
 int FUNC_4 (struct ipu_csi*,struct v4l2_mbus_framefmt const*,struct v4l2_mbus_framefmt const*,int ) ;
 int FUNC_5 (struct ipu_csi*,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct ipu_csi *VAR_21,
      const struct v4l2_mbus_config *VAR_22,
      const struct v4l2_mbus_framefmt *VAR_23,
      const struct v4l2_mbus_framefmt *VAR_24)
{
 struct ipu_csi_bus_config VAR_25;
 unsigned long VAR_26;
 u32 VAR_27, VAR_28, VAR_29 = 0;
 v4l2_std_id VAR_30;
 int VAR_31;

 VAR_31 = FUNC_2(&VAR_25, VAR_22, VAR_23);
 if (VAR_31 < 0)
  return VAR_31;


 VAR_27 = VAR_23->width;
 VAR_28 = VAR_23->height;
 if (VAR_23->field == VAR_18)
  VAR_28 *= 2;


 VAR_29 |= VAR_25.data_width << VAR_8 |
  VAR_25.data_fmt << VAR_6 |
  VAR_25.data_pol << VAR_7 |
  VAR_25.vsync_pol << VAR_15 |
  VAR_25.hsync_pol << VAR_11 |
  VAR_25.pixclk_pol << VAR_13 |
  VAR_25.ext_vsync << VAR_9 |
  VAR_25.clk_mode << VAR_14 |
  VAR_25.pack_tight << VAR_12 |
  VAR_25.force_eof << VAR_10 |
  VAR_25.data_en_pol << VAR_5;

 FUNC_6(&VAR_21->lock, VAR_26);

 FUNC_5(VAR_21, VAR_29, VAR_4);



 switch (VAR_25.clk_mode) {
 case 130:
  FUNC_5(VAR_21, 0x40030, VAR_1);
  FUNC_5(VAR_21, 0xFF0000, VAR_2);
  break;
 case 131:
  if (VAR_27 == 720 && VAR_28 == 480) {
   VAR_30 = VAR_19;
   VAR_28 = 525;
  } else if (VAR_27 == 720 && VAR_28 == 576) {
   VAR_30 = VAR_20;
   VAR_28 = 625;
  } else {
   FUNC_1(VAR_21->ipu->dev,
    "Unsupported interlaced video mode\n");
   VAR_31 = -VAR_17;
   goto out_unlock;
  }

  VAR_31 = FUNC_4(VAR_21, VAR_23, VAR_24, VAR_30);
  if (VAR_31)
   goto out_unlock;
  break;
 case 133:
 case 132:
 case 135:
 case 134:
  FUNC_5(VAR_21, 0x40030 | VAR_3,
       VAR_1);
  FUNC_5(VAR_21, 0xFF0000, VAR_2);
  break;
 case 129:
 case 128:
  FUNC_5(VAR_21, 0, VAR_1);
  break;
 }


 FUNC_5(VAR_21, (VAR_27 - 1) | ((VAR_28 - 1) << 16),
        VAR_16);

 FUNC_0(VAR_21->ipu->dev, "CSI_SENS_CONF = 0x%08X\n",
  FUNC_3(VAR_21, VAR_4));
 FUNC_0(VAR_21->ipu->dev, "CSI_ACT_FRM_SIZE = 0x%08X\n",
  FUNC_3(VAR_21, VAR_0));

out_unlock:
 FUNC_7(&VAR_21->lock, VAR_26);

 return VAR_31;
}
