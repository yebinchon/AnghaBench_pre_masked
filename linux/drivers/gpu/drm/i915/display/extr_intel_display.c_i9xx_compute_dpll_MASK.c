
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int dpll; int dpll_md; } ;
struct dpll {int p1; int p2; } ;
struct intel_crtc_state {int pixel_multiplier; TYPE_2__ dpll_hw_state; scalar_t__ sdvo_tv_clock; struct dpll dpll; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct intel_crtc*,struct intel_crtc_state*,struct dpll*) ;
 scalar_t__ FUNC_7 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_8 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct intel_crtc *VAR_21,
         struct intel_crtc_state *VAR_22,
         struct dpll *VAR_23)
{
 struct drm_i915_private *VAR_24 = FUNC_10(VAR_21->base.dev);
 u32 VAR_25;
 struct dpll *VAR_26 = &VAR_22->dpll;

 FUNC_6(VAR_21, VAR_22, VAR_23);

 VAR_25 = VAR_12;

 if (FUNC_8(VAR_22, VAR_14))
  VAR_25 |= VAR_3;
 else
  VAR_25 |= VAR_2;

 if (FUNC_3(VAR_24) || FUNC_4(VAR_24) ||
     FUNC_1(VAR_24) || FUNC_5(VAR_24)) {
  VAR_25 |= (VAR_22->pixel_multiplier - 1)
   << VAR_20;
 }

 if (FUNC_8(VAR_22, VAR_15) ||
     FUNC_8(VAR_22, VAR_13))
  VAR_25 |= VAR_10;

 if (FUNC_7(VAR_22))
  VAR_25 |= VAR_10;


 if (FUNC_5(VAR_24))
  VAR_25 |= (1 << (VAR_26->p1 - 1)) << VAR_7;
 else {
  VAR_25 |= (1 << (VAR_26->p1 - 1)) << VAR_6;
  if (FUNC_2(VAR_24) && VAR_23)
   VAR_25 |= (1 << (VAR_23->p1 - 1)) << VAR_8;
 }
 switch (VAR_26->p2) {
 case 5:
  VAR_25 |= VAR_5;
  break;
 case 7:
  VAR_25 |= VAR_1;
  break;
 case 10:
  VAR_25 |= VAR_4;
  break;
 case 14:
  VAR_25 |= VAR_0;
  break;
 }
 if (FUNC_0(VAR_24) >= 4)
  VAR_25 |= (6 << VAR_17);

 if (VAR_22->sdvo_tv_clock)
  VAR_25 |= VAR_19;
 else if (FUNC_8(VAR_22, VAR_14) &&
   FUNC_9(VAR_24))
  VAR_25 |= VAR_16;
 else
  VAR_25 |= VAR_18;

 VAR_25 |= VAR_11;
 VAR_22->dpll_hw_state.dpll = VAR_25;

 if (FUNC_0(VAR_24) >= 4) {
  u32 VAR_27 = (VAR_22->pixel_multiplier - 1)
   << VAR_9;
  VAR_22->dpll_hw_state.dpll_md = VAR_27;
 }
}
