
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_lvds_encoder {int init_lvds_val; int a3_power; int reg; scalar_t__ is_dual_link; int init_pps; } ;
struct TYPE_6__ {int dev; } ;
struct intel_encoder {TYPE_3__ base; } ;
struct TYPE_5__ {int lvds_border_bits; } ;
struct drm_display_mode {int flags; } ;
struct TYPE_4__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {int pipe_bpp; scalar_t__ dither; TYPE_2__ gmch_pfit; int shared_dpll; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct drm_i915_private*,int) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,int ) ;
 int FUNC_9 (struct drm_i915_private*,int *) ;
 struct drm_i915_private* FUNC_10 (int ) ;
 struct intel_crtc* FUNC_11 (int ) ;
 struct intel_lvds_encoder* FUNC_12 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_13(struct intel_encoder *VAR_13,
      const struct intel_crtc_state *VAR_14,
      const struct drm_connector_state *VAR_15)
{
 struct intel_lvds_encoder *VAR_16 = FUNC_12(&VAR_13->base);
 struct drm_i915_private *VAR_17 = FUNC_10(VAR_13->base.dev);
 struct intel_crtc *VAR_18 = FUNC_11(VAR_14->base.crtc);
 const struct drm_display_mode *VAR_19 = &VAR_14->base.adjusted_mode;
 int VAR_20 = VAR_18->pipe;
 u32 VAR_21;

 if (FUNC_1(VAR_17)) {
  FUNC_6(VAR_17, VAR_20);
  FUNC_8(VAR_17,
         VAR_14->shared_dpll);
 } else {
  FUNC_7(VAR_17, VAR_20);
 }

 FUNC_9(VAR_17, &VAR_16->init_pps);

 VAR_21 = VAR_16->init_lvds_val;
 VAR_21 |= VAR_11 | VAR_2;

 if (FUNC_0(VAR_17)) {
  VAR_21 &= ~VAR_10;
  VAR_21 |= FUNC_5(VAR_20);
 } else {
  VAR_21 &= ~VAR_9;
  VAR_21 |= FUNC_4(VAR_20);
 }


 VAR_21 &= ~VAR_5;
 VAR_21 |= VAR_14->gmch_pfit.lvds_border_bits;





 if (VAR_16->is_dual_link)
  VAR_21 |= VAR_4 | VAR_6;
 else
  VAR_21 &= ~(VAR_4 | VAR_6);







 VAR_21 &= ~VAR_3;
 VAR_21 |= VAR_16->a3_power;






 if (FUNC_3(VAR_17, 4)) {




  if (VAR_14->dither && VAR_14->pipe_bpp == 18)
   VAR_21 |= VAR_7;
  else
   VAR_21 &= ~VAR_7;
 }
 VAR_21 &= ~(VAR_8 | VAR_12);
 if (VAR_19->flags & VAR_0)
  VAR_21 |= VAR_8;
 if (VAR_19->flags & VAR_1)
  VAR_21 |= VAR_12;

 FUNC_2(VAR_16->reg, VAR_21);
}
