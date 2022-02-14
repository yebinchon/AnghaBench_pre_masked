
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct zx_vou_hw {int dev; scalar_t__ timing; } ;
struct zx_crtc_regs {scalar_t__ timing_pi_shift; scalar_t__ timing_shift; scalar_t__ sec_vtiming; scalar_t__ fir_vtiming; scalar_t__ fir_htiming; scalar_t__ fir_active; } ;
struct zx_crtc_bits {int sec_vactive_shift; int sec_vactive_mask; int polarity_mask; int polarity_shift; int interlace_select; int pi_enable; int tc_enable; } ;
struct zx_crtc {int pixclk; scalar_t__ chnreg; struct zx_crtc_bits* bits; struct zx_crtc_regs* regs; struct zx_vou_hw* vou; } ;
struct videomode {int vactive; int hactive; int flags; scalar_t__ vfront_porch; scalar_t__ vback_porch; scalar_t__ vsync_len; scalar_t__ hfront_porch; scalar_t__ hback_porch; scalar_t__ hsync_len; } ;
struct drm_display_mode {int flags; int clock; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (int) ;
 int VAR_20 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct drm_crtc*) ;
 int FUNC_9 (struct drm_display_mode*,struct videomode*) ;
 struct zx_crtc* FUNC_10 (struct drm_crtc*) ;
 int FUNC_11 (struct zx_crtc*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_15(struct drm_crtc *VAR_21,
      struct drm_crtc_state *VAR_22)
{
 struct drm_display_mode *VAR_23 = &VAR_21->state->adjusted_mode;
 bool VAR_24 = VAR_23->flags & VAR_11;
 struct zx_crtc *VAR_25 = FUNC_10(VAR_21);
 struct zx_vou_hw *VAR_26 = VAR_25->vou;
 const struct zx_crtc_regs *VAR_27 = VAR_25->regs;
 const struct zx_crtc_bits *VAR_28 = VAR_25->bits;
 struct videomode VAR_29;
 u32 VAR_30;
 u32 VAR_31 = 0;
 u32 VAR_32;
 int VAR_33;

 FUNC_9(VAR_23, &VAR_29);


 VAR_32 = FUNC_5((VAR_24 ? VAR_29.vactive / 2 : VAR_29.vactive) - 1);
 VAR_32 |= FUNC_3(VAR_29.hactive - 1);
 FUNC_13(VAR_26->timing + VAR_27->fir_active, VAR_32);

 VAR_32 = FUNC_4(VAR_29.hsync_len - 1);
 VAR_32 |= FUNC_0(VAR_29.hback_porch - 1);
 VAR_32 |= FUNC_2(VAR_29.hfront_porch - 1);
 FUNC_13(VAR_26->timing + VAR_27->fir_htiming, VAR_32);

 VAR_32 = FUNC_4(VAR_29.vsync_len - 1);
 VAR_32 |= FUNC_0(VAR_29.vback_porch - 1);
 VAR_32 |= FUNC_2(VAR_29.vfront_porch - 1);
 FUNC_13(VAR_26->timing + VAR_27->fir_vtiming, VAR_32);

 if (VAR_24) {
  u32 VAR_34 = VAR_28->sec_vactive_shift;
  u32 VAR_35 = VAR_28->sec_vactive_mask;

  VAR_32 = FUNC_12(VAR_26->timing + VAR_17);
  VAR_32 &= ~VAR_35;
  VAR_32 |= ((VAR_29.vactive / 2 - 1) << VAR_34) & VAR_35;
  FUNC_13(VAR_26->timing + VAR_17, VAR_32);

  VAR_32 = FUNC_4(VAR_29.vsync_len - 1);




  VAR_32 |= FUNC_0(VAR_29.vback_porch);
  VAR_32 |= FUNC_2(VAR_29.vfront_porch - 1);
  FUNC_13(VAR_26->timing + VAR_27->sec_vtiming, VAR_32);
 }


 if (VAR_29.flags & VAR_10)
  VAR_31 |= 1 << VAR_15;
 if (VAR_29.flags & VAR_9)
  VAR_31 |= 1 << VAR_14;

 FUNC_14(VAR_26->timing + VAR_18, VAR_28->polarity_mask,
         VAR_31 << VAR_28->polarity_shift);


 VAR_32 = VAR_13;
 if (VAR_24)
  VAR_32 |= VAR_20 << 16;
 FUNC_13(VAR_26->timing + VAR_27->timing_shift, VAR_32);
 FUNC_13(VAR_26->timing + VAR_27->timing_pi_shift, VAR_12);


 VAR_30 = VAR_28->interlace_select | VAR_28->pi_enable;
 FUNC_14(VAR_26->timing + VAR_16, VAR_30,
         VAR_24 ? VAR_30 : 0);


 FUNC_14(VAR_26->timing + VAR_19, VAR_28->tc_enable,
         VAR_28->tc_enable);


 FUNC_14(VAR_25->chnreg + VAR_1, VAR_7,
         VAR_29.hactive << VAR_8);
 FUNC_14(VAR_25->chnreg + VAR_1, VAR_5,
         VAR_29.vactive << VAR_6);


 FUNC_14(VAR_25->chnreg + VAR_3, VAR_4,
         VAR_24 ? VAR_4 : 0);


 FUNC_11(VAR_25);


 FUNC_14(VAR_25->chnreg + VAR_0, VAR_2, VAR_2);

 FUNC_8(VAR_21);

 VAR_33 = FUNC_7(VAR_25->pixclk, VAR_23->clock * 1000);
 if (VAR_33) {
  FUNC_1(VAR_26->dev, "failed to set pixclk rate: %d\n", VAR_33);
  return;
 }

 VAR_33 = FUNC_6(VAR_25->pixclk);
 if (VAR_33)
  FUNC_1(VAR_26->dev, "failed to enable pixclk: %d\n", VAR_33);
}
