
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct videomode {int flags; int hactive; int vactive; int vfront_porch; int vsync_len; int vback_porch; int hfront_porch; int hsync_len; int hback_porch; } ;
struct TYPE_6__ {int bus_flags; } ;
struct drm_connector {TYPE_3__ display_info; } ;
struct TYPE_4__ {struct drm_connector base; } ;
struct fsl_dcu_drm_device {int regmap; int pix_clk; TYPE_1__ connector; } ;
struct drm_display_mode {int clock; } ;
struct drm_device {struct fsl_dcu_drm_device* dev_private; } ;
struct drm_crtc {TYPE_2__* state; struct drm_device* dev; } ;
struct TYPE_5__ {struct drm_display_mode mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_6 ;
 unsigned int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_9 (int ) ;
 unsigned int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int VAR_13 ;
 unsigned int FUNC_12 (int ) ;
 unsigned int FUNC_13 (int ) ;
 unsigned int FUNC_14 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct drm_display_mode*,struct videomode*) ;
 int FUNC_17 (int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_18(struct drm_crtc *VAR_17)
{
 struct drm_device *VAR_18 = VAR_17->dev;
 struct fsl_dcu_drm_device *VAR_19 = VAR_18->dev_private;
 struct drm_connector *VAR_20 = &VAR_19->connector.base;
 struct drm_display_mode *VAR_21 = &VAR_17->state->mode;
 unsigned int VAR_22 = 0;
 struct videomode VAR_23;

 FUNC_15(VAR_19->pix_clk, VAR_21->clock * 1000);

 FUNC_16(VAR_21, &VAR_23);


 if (!(VAR_20->display_info.bus_flags & VAR_16))
  VAR_22 |= VAR_10;

 if (VAR_23.flags & VAR_14)
  VAR_22 |= VAR_9;

 if (VAR_23.flags & VAR_15)
  VAR_22 |= VAR_11;

 FUNC_17(VAR_19->regmap, VAR_6,
       FUNC_5(VAR_23.hback_porch) |
       FUNC_7(VAR_23.hsync_len) |
       FUNC_6(VAR_23.hfront_porch));
 FUNC_17(VAR_19->regmap, VAR_13,
       FUNC_12(VAR_23.vback_porch) |
       FUNC_14(VAR_23.vsync_len) |
       FUNC_13(VAR_23.vfront_porch));
 FUNC_17(VAR_19->regmap, VAR_5,
       FUNC_4(VAR_23.vactive) |
       FUNC_3(VAR_23.hactive));
 FUNC_17(VAR_19->regmap, VAR_8, VAR_22);
 FUNC_17(VAR_19->regmap, VAR_3, FUNC_2(0) |
       FUNC_1(0) | FUNC_0(0));
 FUNC_17(VAR_19->regmap, VAR_4,
       FUNC_8(1) | VAR_7);
 FUNC_17(VAR_19->regmap, VAR_12,
       FUNC_9(VAR_0) |
       FUNC_10(VAR_1) |
       FUNC_11(VAR_2));
 return;
}
