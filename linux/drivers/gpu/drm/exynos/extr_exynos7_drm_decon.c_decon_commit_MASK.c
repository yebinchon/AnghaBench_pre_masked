
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct exynos_drm_crtc {TYPE_2__ base; struct decon_context* ctx; } ;
struct drm_display_mode {scalar_t__ htotal; scalar_t__ vtotal; int crtc_vsync_end; int crtc_vsync_start; int crtc_vtotal; int crtc_vdisplay; int crtc_hsync_end; int crtc_hsync_start; int crtc_htotal; int crtc_hdisplay; int vdisplay; scalar_t__ hdisplay; } ;
struct decon_context {scalar_t__ regs; int i80_if; scalar_t__ suspended; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_12 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct decon_context*,struct drm_display_mode*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct exynos_drm_crtc *VAR_13)
{
 struct decon_context *VAR_14 = VAR_13->ctx;
 struct drm_display_mode *VAR_15 = &VAR_13->base.state->adjusted_mode;
 u32 VAR_16, VAR_17;

 if (VAR_14->suspended)
  return;


 if (VAR_15->htotal == 0 || VAR_15->vtotal == 0)
  return;

 if (!VAR_14->i80_if) {
  int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;

  VAR_18 = VAR_15->crtc_vsync_end - VAR_15->crtc_vsync_start;
  VAR_19 = VAR_15->crtc_vtotal - VAR_15->crtc_vsync_end;
  VAR_20 = VAR_15->crtc_vsync_start - VAR_15->crtc_vdisplay;

  VAR_16 = FUNC_1(VAR_19 - 1) | FUNC_2(VAR_20 - 1);
  FUNC_11(VAR_16, VAR_14->regs + VAR_8);

  VAR_16 = FUNC_3(VAR_18 - 1);
  FUNC_11(VAR_16, VAR_14->regs + VAR_9);


  VAR_21 = VAR_15->crtc_hsync_end - VAR_15->crtc_hsync_start;
  VAR_22 = VAR_15->crtc_htotal - VAR_15->crtc_hsync_end;
  VAR_23 = VAR_15->crtc_hsync_start - VAR_15->crtc_hdisplay;


  VAR_16 = FUNC_4(VAR_22 - 1) | FUNC_5(VAR_23 - 1);
  FUNC_11(VAR_16, VAR_14->regs + VAR_10);

  VAR_16 = FUNC_6(VAR_21 - 1);
  FUNC_11(VAR_16, VAR_14->regs + VAR_11);
 }


 VAR_16 = FUNC_8(VAR_15->vdisplay - 1) |
        FUNC_7(VAR_15->hdisplay - 1);
 FUNC_11(VAR_16, VAR_14->regs + VAR_12);

 FUNC_11(VAR_15->vdisplay - 1, VAR_14->regs + VAR_2);





 VAR_16 = VAR_6 | VAR_7;
 FUNC_11(VAR_16, VAR_14->regs + VAR_5);

 VAR_17 = FUNC_9(VAR_14, VAR_15);
 if (VAR_17 > 1) {
  VAR_16 = FUNC_0(VAR_17 - 1);
  FUNC_11(VAR_16, VAR_14->regs + VAR_3);
  FUNC_11(VAR_16, VAR_14->regs + VAR_4);
 }

 VAR_16 = FUNC_10(VAR_14->regs + VAR_0);
 VAR_16 |= VAR_1;
 FUNC_11(VAR_16, VAR_14->regs + VAR_0);
}
