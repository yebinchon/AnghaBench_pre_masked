
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fimd_driver_data {int timing_base; int lcdblk_vt_shift; int lcdblk_bypass_shift; int lcdblk_mic_bypass_shift; scalar_t__ has_clksel; int lcdblk_offset; scalar_t__ has_mic_bypass; scalar_t__ has_vidoutcon; scalar_t__ has_vtsel; } ;
struct fimd_context {int regs; int i80ifcon; int vidcon1; int vidout_con; int vidcon0; int clkdiv; struct fimd_driver_data* driver_data; int dev; scalar_t__ sysreg; scalar_t__ i80_if; scalar_t__ suspended; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct exynos_drm_crtc {TYPE_2__ base; struct fimd_context* ctx; } ;
struct drm_display_mode {scalar_t__ htotal; scalar_t__ vtotal; int flags; int crtc_vsync_end; int crtc_vsync_start; int crtc_vtotal; int crtc_vdisplay; int crtc_hsync_end; int crtc_hsync_start; int crtc_htotal; int crtc_hdisplay; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 void* VAR_13 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 void* VAR_14 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct fimd_context*) ;
 scalar_t__ FUNC_15 (scalar_t__,int ,int,int) ;
 int FUNC_16 (int,void*) ;

__attribute__((used)) static void FUNC_17(struct exynos_drm_crtc *VAR_15)
{
 struct fimd_context *VAR_16 = VAR_15->ctx;
 struct drm_display_mode *VAR_17 = &VAR_15->base.state->adjusted_mode;
 const struct fimd_driver_data *VAR_18 = VAR_16->driver_data;
 void *VAR_19 = VAR_16->regs + VAR_18->timing_base;
 u32 VAR_20;

 if (VAR_16->suspended)
  return;


 if (VAR_17->htotal == 0 || VAR_17->vtotal == 0)
  return;

 if (VAR_16->i80_if) {
  VAR_20 = VAR_16->i80ifcon | VAR_2;
  FUNC_16(VAR_20, VAR_19 + FUNC_1(0));


  FUNC_16(0, VAR_19 + FUNC_2(0));


  if (VAR_18->has_vtsel && VAR_16->sysreg &&
    FUNC_15(VAR_16->sysreg,
     VAR_18->lcdblk_offset,
     0x3 << VAR_18->lcdblk_vt_shift,
     0x1 << VAR_18->lcdblk_vt_shift)) {
   FUNC_0(VAR_16->dev,
          "Failed to update sysreg for I80 i/f.\n");
   return;
  }
 } else {
  int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
  u32 VAR_27;


  VAR_27 = VAR_16->vidcon1;
  if (VAR_17->flags & VAR_1)
   VAR_27 |= VAR_10;
  if (VAR_17->flags & VAR_0)
   VAR_27 |= VAR_9;
  FUNC_16(VAR_27, VAR_16->regs + VAR_18->timing_base + VAR_8);


  VAR_21 = VAR_17->crtc_vsync_end - VAR_17->crtc_vsync_start;
  VAR_22 = VAR_17->crtc_vtotal - VAR_17->crtc_vsync_end;
  VAR_23 = VAR_17->crtc_vsync_start - VAR_17->crtc_vdisplay;

  VAR_20 = FUNC_4(VAR_22 - 1) |
   FUNC_5(VAR_23 - 1) |
   FUNC_6(VAR_21 - 1);
  FUNC_16(VAR_20, VAR_16->regs + VAR_18->timing_base + VAR_12);


  VAR_24 = VAR_17->crtc_hsync_end - VAR_17->crtc_hsync_start;
  VAR_25 = VAR_17->crtc_htotal - VAR_17->crtc_hsync_end;
  VAR_26 = VAR_17->crtc_hsync_start - VAR_17->crtc_hdisplay;

  VAR_20 = FUNC_7(VAR_25 - 1) |
   FUNC_8(VAR_26 - 1) |
   FUNC_9(VAR_24 - 1);
  FUNC_16(VAR_20, VAR_16->regs + VAR_18->timing_base + VAR_13);
 }

 if (VAR_18->has_vidoutcon)
  FUNC_16(VAR_16->vidout_con, VAR_19 + VAR_11);


 if (VAR_16->sysreg && FUNC_15(VAR_16->sysreg,
    VAR_18->lcdblk_offset,
    0x1 << VAR_18->lcdblk_bypass_shift,
    0x1 << VAR_18->lcdblk_bypass_shift)) {
  FUNC_0(VAR_16->dev,
         "Failed to update sysreg for bypass setting.\n");
  return;
 }




 if (VAR_18->has_mic_bypass && VAR_16->sysreg &&
     FUNC_15(VAR_16->sysreg,
    VAR_18->lcdblk_offset,
    0x1 << VAR_18->lcdblk_mic_bypass_shift,
    0x1 << VAR_18->lcdblk_mic_bypass_shift)) {
  FUNC_0(VAR_16->dev,
         "Failed to update sysreg for bypass mic.\n");
  return;
 }


 VAR_20 = FUNC_12(VAR_17->vdisplay - 1) |
        FUNC_10(VAR_17->hdisplay - 1) |
        FUNC_13(VAR_17->vdisplay - 1) |
        FUNC_11(VAR_17->hdisplay - 1);
 FUNC_16(VAR_20, VAR_16->regs + VAR_18->timing_base + VAR_14);

 FUNC_14(VAR_16);





 VAR_20 = VAR_16->vidcon0;
 VAR_20 |= VAR_6 | VAR_7;

 if (VAR_16->driver_data->has_clksel)
  VAR_20 |= VAR_5;

 if (VAR_16->clkdiv > 1)
  VAR_20 |= FUNC_3(VAR_16->clkdiv - 1) | VAR_4;

 FUNC_16(VAR_20, VAR_16->regs + VAR_3);
}
