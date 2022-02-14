
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int dpll; int fp0; int fp1; } ;
struct dpll {int m; int n; int p1; int p2; } ;
struct intel_crtc_state {int pixel_multiplier; TYPE_3__ dpll_hw_state; struct dpll dpll; scalar_t__ sdvo_tv_clock; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_6__ {int lvds_ssc_freq; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
struct TYPE_8__ {int num_pipes; } ;


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
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 TYPE_4__* FUNC_1 (struct drm_i915_private*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct dpll*) ;
 scalar_t__ FUNC_3 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,int ) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct dpll*,int) ;
 struct drm_i915_private* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct intel_crtc *VAR_18,
      struct intel_crtc_state *VAR_19,
      struct dpll *VAR_20)
{
 struct drm_i915_private *VAR_21 = FUNC_8(VAR_18->base.dev);
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;


 VAR_25 = 21;
 if (FUNC_4(VAR_19, VAR_13)) {
  if ((FUNC_6(VAR_21) &&
       VAR_21->vbt.lvds_ssc_freq == 100000) ||
      (FUNC_0(VAR_21) &&
       FUNC_5(VAR_21)))
   VAR_25 = 25;
 } else if (VAR_19->sdvo_tv_clock) {
  VAR_25 = 20;
 }

 VAR_23 = FUNC_2(&VAR_19->dpll);

 if (FUNC_7(&VAR_19->dpll, VAR_25))
  VAR_23 |= VAR_10;

 if (VAR_20) {
  VAR_24 = FUNC_2(VAR_20);

  if (VAR_20->m < VAR_25 * VAR_20->n)
   VAR_24 |= VAR_10;
 } else {
  VAR_24 = VAR_23;
 }

 VAR_22 = 0;

 if (FUNC_4(VAR_19, VAR_13))
  VAR_22 |= VAR_3;
 else
  VAR_22 |= VAR_2;

 VAR_22 |= (VAR_19->pixel_multiplier - 1)
  << VAR_17;

 if (FUNC_4(VAR_19, VAR_14) ||
     FUNC_4(VAR_19, VAR_12))
  VAR_22 |= VAR_8;

 if (FUNC_3(VAR_19))
  VAR_22 |= VAR_8;
 if (FUNC_1(VAR_21)->num_pipes == 3 &&
     FUNC_4(VAR_19, VAR_11))
  VAR_22 |= VAR_8;


 VAR_22 |= (1 << (VAR_19->dpll.p1 - 1)) << VAR_6;

 VAR_22 |= (1 << (VAR_19->dpll.p1 - 1)) << VAR_7;

 switch (VAR_19->dpll.p2) {
 case 5:
  VAR_22 |= VAR_5;
  break;
 case 7:
  VAR_22 |= VAR_1;
  break;
 case 10:
  VAR_22 |= VAR_4;
  break;
 case 14:
  VAR_22 |= VAR_0;
  break;
 }

 if (FUNC_4(VAR_19, VAR_13) &&
     FUNC_6(VAR_21))
  VAR_22 |= VAR_15;
 else
  VAR_22 |= VAR_16;

 VAR_22 |= VAR_9;

 VAR_19->dpll_hw_state.dpll = VAR_22;
 VAR_19->dpll_hw_state.fp0 = VAR_23;
 VAR_19->dpll_hw_state.fp1 = VAR_24;
}
