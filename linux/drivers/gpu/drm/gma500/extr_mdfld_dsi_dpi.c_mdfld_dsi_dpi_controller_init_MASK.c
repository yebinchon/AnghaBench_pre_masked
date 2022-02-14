
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdfld_dsi_dpi_timing {int hsync_count; int hbp_count; int hfp_count; int hactive_count; int vsync_count; int vbp_count; int vfp_count; } ;
struct mdfld_dsi_config {int lane_count; int channel_num; int bpp; int video_mode; struct drm_display_mode* mode; struct drm_device* dev; } ;
struct drm_display_mode {int vtotal; int htotal; int vdisplay; int hdisplay; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (char*,int) ;
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
 int FUNC_23 (int) ;
 int FUNC_24 (int ,int,int ,int ) ;
 int FUNC_25 (int ,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_26 (struct drm_display_mode*,struct mdfld_dsi_dpi_timing*,int,int) ;
 scalar_t__ FUNC_27 (struct drm_device*,int) ;
 int FUNC_28 (struct drm_device*,int ) ;

void FUNC_29(struct mdfld_dsi_config *VAR_11,
        int VAR_12)
{
 struct drm_device *VAR_13 = VAR_11->dev;
 int VAR_14 = VAR_11->lane_count;
 struct mdfld_dsi_dpi_timing VAR_15;
 struct drm_display_mode *VAR_16 = VAR_11->mode;
 u32 VAR_17;


 FUNC_24(FUNC_3(VAR_12), 0, 0, 0);


 FUNC_25(FUNC_2(VAR_12), 0x00000018);


 FUNC_25(FUNC_16(VAR_12), 0xffffffff);


 VAR_17 = VAR_14;
 VAR_17 |= VAR_11->channel_num << VAR_5;

 switch (VAR_11->bpp) {
 case 16:
  VAR_17 |= VAR_0;
  break;
 case 18:
  VAR_17 |= VAR_1;
  break;
 case 24:
  VAR_17 |= VAR_2;
  break;
 default:
  FUNC_0("unsupported color format, bpp = %d\n",
       VAR_11->bpp);
 }
 FUNC_25(FUNC_7(VAR_12), VAR_17);

 FUNC_25(FUNC_14(VAR_12),
   (VAR_16->vtotal * VAR_16->htotal * VAR_11->bpp /
    (8 * VAR_14)) & VAR_6);
 FUNC_25(FUNC_18(VAR_12),
    0xffff & VAR_7);


 FUNC_25(FUNC_19(VAR_12),
    0x14 & VAR_9);


 FUNC_25(FUNC_4(VAR_12),
    0xffff & VAR_8);

 FUNC_25(FUNC_6(VAR_12),
    VAR_16->vdisplay << 16 | VAR_16->hdisplay);


 FUNC_26(VAR_16, &VAR_15,
    VAR_11->lane_count, VAR_11->bpp);

 FUNC_25(FUNC_13(VAR_12),
   VAR_15.hsync_count & VAR_4);
 FUNC_25(FUNC_10(VAR_12),
   VAR_15.hbp_count & VAR_4);
 FUNC_25(FUNC_11(VAR_12),
   VAR_15.hfp_count & VAR_4);
 FUNC_25(FUNC_9(VAR_12),
   VAR_15.hactive_count & VAR_4);
 FUNC_25(FUNC_23(VAR_12),
   VAR_15.vsync_count & VAR_4);
 FUNC_25(FUNC_20(VAR_12),
   VAR_15.vbp_count & VAR_4);
 FUNC_25(FUNC_21(VAR_12),
   VAR_15.vfp_count & VAR_4);

 FUNC_25(FUNC_12(VAR_12), 0x46);


 FUNC_25(FUNC_15(VAR_12), 0x000007d0);


 VAR_17 = VAR_11->video_mode | VAR_3;
 FUNC_25(FUNC_22(VAR_12), VAR_17);

 FUNC_25(FUNC_8(VAR_12), 0x00000000);

 FUNC_25(FUNC_17(VAR_12), 0x00000004);


 if (FUNC_27(VAR_13, VAR_12) == VAR_10)
  FUNC_25(FUNC_5(VAR_12), 0x2A0c6008);
 else
  FUNC_25(FUNC_5(VAR_12), 0x150c3408);

 FUNC_25(FUNC_1(VAR_12), (0xa << 16) | 0x14);

 if (FUNC_27(VAR_13, VAR_12) == VAR_10)
  FUNC_28(VAR_13, 0);


 FUNC_24(FUNC_3(VAR_12), 1, 0, 0);
}
