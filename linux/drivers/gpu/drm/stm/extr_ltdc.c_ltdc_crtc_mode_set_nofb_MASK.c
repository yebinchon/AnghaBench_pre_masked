
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct videomode {int hactive; int vactive; int hfront_porch; int hback_porch; int hsync_len; int vfront_porch; int vback_porch; int vsync_len; int flags; } ;
struct ltdc_device {int regs; } ;
struct drm_display_mode {int name; } ;
struct drm_device {int dev; } ;
struct TYPE_4__ {int id; } ;
struct drm_crtc {TYPE_2__ base; TYPE_1__* state; struct drm_device* dev; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (char*) ;
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
 struct ltdc_device* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_display_mode*,struct videomode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_crtc *VAR_22)
{
 struct ltdc_device *VAR_23 = FUNC_2(VAR_22);
 struct drm_device *VAR_24 = VAR_22->dev;
 struct drm_display_mode *VAR_25 = &VAR_22->state->adjusted_mode;
 struct videomode VAR_26;
 u32 VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 u32 VAR_35;
 int VAR_36;

 if (!FUNC_4(VAR_24->dev)) {
  VAR_36 = FUNC_5(VAR_24->dev);
  if (VAR_36) {
   FUNC_1("Failed to set mode, cannot get sync\n");
   return;
  }
 }

 FUNC_3(VAR_25, &VAR_26);

 FUNC_0("CRTC:%d mode:%s\n", VAR_22->base.id, VAR_25->name);
 FUNC_0("Video mode: %dx%d", VAR_26.hactive, VAR_26.vactive);
 FUNC_0(" hfp %d hbp %d hsl %d vfp %d vbp %d vsl %d\n",
    VAR_26.hfront_porch, VAR_26.hback_porch, VAR_26.hsync_len,
    VAR_26.vfront_porch, VAR_26.vback_porch, VAR_26.vsync_len);


 VAR_27 = VAR_26.hsync_len - 1;
 VAR_28 = VAR_26.vsync_len - 1;
 VAR_29 = VAR_27 + VAR_26.hback_porch;
 VAR_30 = VAR_28 + VAR_26.vback_porch;
 VAR_31 = VAR_29 + VAR_26.hactive;
 VAR_32 = VAR_30 + VAR_26.vactive;
 VAR_33 = VAR_31 + VAR_26.hfront_porch;
 VAR_34 = VAR_32 + VAR_26.vfront_porch;


 VAR_35 = 0;

 if (VAR_26.flags & VAR_5)
  VAR_35 |= VAR_9;

 if (VAR_26.flags & VAR_7)
  VAR_35 |= VAR_11;

 if (VAR_26.flags & VAR_4)
  VAR_35 |= VAR_8;

 if (VAR_26.flags & VAR_6)
  VAR_35 |= VAR_10;

 FUNC_6(VAR_23->regs, VAR_14,
   VAR_9 | VAR_11 | VAR_8 | VAR_10, VAR_35);


 VAR_35 = (VAR_27 << 16) | VAR_28;
 FUNC_6(VAR_23->regs, VAR_16, VAR_19 | VAR_18, VAR_35);


 VAR_35 = (VAR_29 << 16) | VAR_30;
 FUNC_6(VAR_23->regs, VAR_13, VAR_3 | VAR_2, VAR_35);


 VAR_35 = (VAR_31 << 16) | VAR_32;
 FUNC_6(VAR_23->regs, VAR_12, VAR_1 | VAR_0, VAR_35);


 VAR_35 = (VAR_33 << 16) | VAR_34;
 FUNC_6(VAR_23->regs, VAR_17, VAR_20 | VAR_21, VAR_35);

 FUNC_7(VAR_23->regs, VAR_15, (VAR_32 + 1));
}
