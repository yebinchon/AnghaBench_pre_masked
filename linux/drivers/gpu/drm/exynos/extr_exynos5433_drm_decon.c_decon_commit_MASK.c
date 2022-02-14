
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_vsync_start; int crtc_vdisplay; int crtc_vsync_end; int flags; int vdisplay; int crtc_vtotal; scalar_t__ crtc_hsync_start; scalar_t__ crtc_hsync_end; scalar_t__ crtc_hdisplay; scalar_t__ crtc_htotal; scalar_t__ hdisplay; } ;
struct TYPE_2__ {struct drm_display_mode mode; } ;
struct exynos_drm_crtc {scalar_t__ i80_mode; TYPE_1__ base; struct decon_context* ctx; } ;
struct decon_context {int out_type; scalar_t__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct decon_context*,int ,int,int ) ;
 int FUNC_9 (struct decon_context*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct exynos_drm_crtc *VAR_17)
{
 struct decon_context *VAR_18 = VAR_17->ctx;
 struct drm_display_mode *VAR_19 = &VAR_17->base.mode;
 bool VAR_20 = 0;
 u32 VAR_21;

 if (VAR_18->out_type & VAR_9) {
  VAR_19->crtc_hsync_start = VAR_19->crtc_hdisplay + 10;
  VAR_19->crtc_hsync_end = VAR_19->crtc_htotal - 92;
  VAR_19->crtc_vsync_start = VAR_19->crtc_vdisplay + 1;
  VAR_19->crtc_vsync_end = VAR_19->crtc_vsync_start + 1;
  if (VAR_19->flags & VAR_8)
   VAR_20 = 1;
 }

 FUNC_9(VAR_18);


 VAR_21 = VAR_15;
 if (VAR_20)
  VAR_21 |= VAR_14;
 if (VAR_17->i80_mode) {
  VAR_21 |= VAR_13;
 } else {
  VAR_21 |= VAR_16;
 }

 FUNC_10(VAR_21, VAR_18->addr + VAR_2);

 if (VAR_20)
  VAR_21 = FUNC_7(VAR_19->vdisplay / 2 - 1) |
   FUNC_6(VAR_19->hdisplay - 1);
 else
  VAR_21 = FUNC_7(VAR_19->vdisplay - 1) |
   FUNC_6(VAR_19->hdisplay - 1);
 FUNC_10(VAR_21, VAR_18->addr + VAR_7);

 if (!VAR_17->i80_mode) {
  int VAR_22 = VAR_19->crtc_vtotal - VAR_19->crtc_vsync_end;
  int VAR_23 = VAR_19->crtc_vsync_start - VAR_19->crtc_vdisplay;

  if (VAR_20)
   VAR_22 = VAR_22 / 2 - 1;
  VAR_21 = FUNC_0(VAR_22 - 1) | FUNC_1(VAR_23 - 1);
  FUNC_10(VAR_21, VAR_18->addr + VAR_3);

  VAR_21 = FUNC_2(
    VAR_19->crtc_vsync_end - VAR_19->crtc_vsync_start - 1);
  FUNC_10(VAR_21, VAR_18->addr + VAR_4);

  VAR_21 = FUNC_3(
    VAR_19->crtc_htotal - VAR_19->crtc_hsync_end - 1) |
   FUNC_4(
    VAR_19->crtc_hsync_start - VAR_19->crtc_hdisplay - 1);
  FUNC_10(VAR_21, VAR_18->addr + VAR_5);

  VAR_21 = FUNC_5(
    VAR_19->crtc_hsync_end - VAR_19->crtc_hsync_start - 1);
  FUNC_10(VAR_21, VAR_18->addr + VAR_6);
 }


 FUNC_8(VAR_18, VAR_1, VAR_11 | VAR_12, ~0);

 FUNC_8(VAR_18, VAR_0, VAR_10, ~0);
}
