
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_display_mode {int hsync_end; int hsync_start; int vsync_end; int vsync_start; int htotal; int hdisplay; int vtotal; int vdisplay; } ;
struct drm_device {struct hibmc_drm_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_display_mode mode; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_device*,struct drm_display_mode*,unsigned int) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_crtc *VAR_15)
{
 unsigned int VAR_16;
 struct drm_display_mode *VAR_17 = &VAR_15->state->mode;
 struct drm_device *VAR_18 = VAR_15->dev;
 struct hibmc_drm_private *VAR_19 = VAR_18->dev_private;
 int VAR_20 = VAR_17->hsync_end - VAR_17->hsync_start;
 int VAR_21 = VAR_17->vsync_end - VAR_17->vsync_start;

 FUNC_5(FUNC_4(), VAR_19->mmio + VAR_8);
 FUNC_5(FUNC_2(VAR_7, VAR_17->htotal - 1) |
        FUNC_2(VAR_6, VAR_17->hdisplay - 1),
        VAR_19->mmio + VAR_5);

 FUNC_5(FUNC_2(VAR_4, VAR_20) |
        FUNC_2(VAR_3, VAR_17->hsync_start - 1),
        VAR_19->mmio + VAR_2);

 FUNC_5(FUNC_2(VAR_14, VAR_17->vtotal - 1) |
        FUNC_2(VAR_13, VAR_17->vdisplay - 1),
        VAR_19->mmio + VAR_12);

 FUNC_5(FUNC_2(VAR_10, VAR_21) |
        FUNC_2(VAR_11, VAR_17->vsync_start - 1),
        VAR_19->mmio + VAR_9);

 VAR_16 = FUNC_2(VAR_1, 0);
 VAR_16 |= FUNC_2(VAR_0, 0);
 VAR_16 |= FUNC_1(1);
 VAR_16 |= FUNC_0(1);

 FUNC_3(VAR_18, VAR_17, VAR_16);
}
