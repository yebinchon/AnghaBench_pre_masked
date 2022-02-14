
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct TYPE_4__ {int hdisplay; int vdisplay; int htotal; int hsync_start; int hsync_end; int vtotal; int vsync_start; int vsync_end; int clock; scalar_t__ flags; } ;
struct radeon_encoder_lvds {int panel_vcc_delay; int panel_pwr_delay; int panel_digon_delay; int panel_blon_delay; int panel_ref_divider; int panel_post_divider; int panel_fb_divider; int use_bios_dividers; int lvds_gen_cntl; TYPE_2__ native_mode; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {TYPE_2__ native_mode; TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
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
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 struct radeon_encoder_lvds* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int,int) ;
 struct radeon_encoder_lvds* FUNC_8 (struct radeon_device*) ;
 int VAR_12 ;

struct radeon_encoder_lvds *FUNC_9(struct radeon_encoder
        *VAR_13)
{
 struct drm_device *VAR_14 = VAR_13->base.dev;
 struct radeon_device *VAR_15 = VAR_14->dev_private;
 uint16_t VAR_16;
 uint32_t VAR_17;
 char VAR_18[30];
 int VAR_19, VAR_20;
 struct radeon_encoder_lvds *VAR_21 = ((void*)0);

 VAR_16 = FUNC_4(VAR_14, VAR_0);

 if (VAR_16) {
  VAR_21 = FUNC_6(sizeof(struct radeon_encoder_lvds), VAR_2);

  if (!VAR_21)
   return ((void*)0);

  for (VAR_20 = 0; VAR_20 < 24; VAR_20++)
   VAR_18[VAR_20] = FUNC_3(VAR_16 + VAR_20 + 1);
  VAR_18[24] = 0;

  FUNC_0("Panel ID String: %s\n", VAR_18);

  VAR_21->native_mode.hdisplay = FUNC_1(VAR_16 + 0x19);
  VAR_21->native_mode.vdisplay = FUNC_1(VAR_16 + 0x1b);

  FUNC_0("Panel Size %dx%d\n", VAR_21->native_mode.hdisplay,
    VAR_21->native_mode.vdisplay);

  VAR_21->panel_vcc_delay = FUNC_1(VAR_16 + 0x2c);
  VAR_21->panel_vcc_delay = FUNC_7(VAR_12, VAR_21->panel_vcc_delay, 2000);

  VAR_21->panel_pwr_delay = FUNC_3(VAR_16 + 0x24);
  VAR_21->panel_digon_delay = FUNC_1(VAR_16 + 0x38) & 0xf;
  VAR_21->panel_blon_delay = (FUNC_1(VAR_16 + 0x38) >> 4) & 0xf;

  VAR_21->panel_ref_divider = FUNC_1(VAR_16 + 0x2e);
  VAR_21->panel_post_divider = FUNC_3(VAR_16 + 0x30);
  VAR_21->panel_fb_divider = FUNC_1(VAR_16 + 0x31);
  if ((VAR_21->panel_ref_divider != 0) &&
      (VAR_21->panel_fb_divider > 3))
   VAR_21->use_bios_dividers = 1;

  VAR_17 = FUNC_2(VAR_16 + 0x39);
  VAR_21->lvds_gen_cntl = 0xff00;
  if (VAR_17 & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_10;

  if ((VAR_17 >> 4) & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_11;

  switch ((VAR_17 >> 8) & 0x7) {
  case 0:
   VAR_21->lvds_gen_cntl |= VAR_9;
   break;
  case 1:
   VAR_21->lvds_gen_cntl |= VAR_3;
   break;
  case 2:
   VAR_21->lvds_gen_cntl |= VAR_4;
   break;
  default:
   break;
  }

  if ((VAR_17 >> 16) & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_7;

  if ((VAR_17 >> 17) & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_8;

  if ((VAR_17 >> 18) & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_6;

  if ((VAR_17 >> 23) & 0x1)
   VAR_21->lvds_gen_cntl |= VAR_5;

  VAR_21->lvds_gen_cntl |= (VAR_17 & 0xf0000000);

  for (VAR_20 = 0; VAR_20 < 32; VAR_20++) {
   VAR_19 = FUNC_1(VAR_16 + 64 + VAR_20 * 2);
   if (VAR_19 == 0)
    break;

   if ((FUNC_1(VAR_19) == VAR_21->native_mode.hdisplay) &&
       (FUNC_1(VAR_19 + 2) == VAR_21->native_mode.vdisplay)) {
    u32 VAR_22 = (FUNC_1(VAR_19 + 21) - FUNC_1(VAR_19 + 19) - 1) * 8;

    if (VAR_22 > VAR_21->native_mode.hdisplay)
     VAR_22 = (10 - 1) * 8;

    VAR_21->native_mode.htotal = VAR_21->native_mode.hdisplay +
     (FUNC_1(VAR_19 + 17) - FUNC_1(VAR_19 + 19)) * 8;
    VAR_21->native_mode.hsync_start = VAR_21->native_mode.hdisplay +
     VAR_22;
    VAR_21->native_mode.hsync_end = VAR_21->native_mode.hsync_start +
     (FUNC_3(VAR_19 + 23) * 8);

    VAR_21->native_mode.vtotal = VAR_21->native_mode.vdisplay +
     (FUNC_1(VAR_19 + 24) - FUNC_1(VAR_19 + 26));
    VAR_21->native_mode.vsync_start = VAR_21->native_mode.vdisplay +
     ((FUNC_1(VAR_19 + 28) & 0x7ff) - FUNC_1(VAR_19 + 26));
    VAR_21->native_mode.vsync_end = VAR_21->native_mode.vsync_start +
     ((FUNC_1(VAR_19 + 28) & 0xf800) >> 11);

    VAR_21->native_mode.clock = FUNC_1(VAR_19 + 9) * 10;
    VAR_21->native_mode.flags = 0;

    FUNC_5(&VAR_21->native_mode, VAR_1);

   }
  }
 } else {
  FUNC_0("No panel info found in BIOS\n");
  VAR_21 = FUNC_8(VAR_15);
 }

 if (VAR_21)
  VAR_13->native_mode = VAR_21->native_mode;
 return VAR_21;
}
