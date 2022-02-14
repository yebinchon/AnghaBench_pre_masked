
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_3__* info; } ;
struct intel_crtc_state {int has_pch_encoder; int fdi_lanes; int dpll_hw_state; struct intel_shared_dpll* shared_dpll; int cpu_transcoder; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_6__ {TYPE_2__* funcs; } ;
struct TYPE_5__ {int (* get_hw_state ) (struct drm_i915_private*,struct intel_shared_dpll*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct drm_i915_private*,int,struct intel_crtc_state*) ;
 int FUNC_11 (struct drm_i915_private*,int,struct intel_crtc_state*) ;
 int FUNC_12 (struct drm_i915_private*,int,struct intel_crtc_state*) ;
 int FUNC_13 (struct drm_i915_private*,int,struct intel_crtc_state*) ;
 int FUNC_14 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_15 (struct drm_i915_private*,int,struct intel_crtc_state*) ;
 int FUNC_16 (struct drm_i915_private*,struct intel_shared_dpll*,int *) ;
 struct drm_i915_private* FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct intel_crtc *VAR_6,
           struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_17(VAR_6->base.dev);
 struct intel_shared_dpll *VAR_9;
 enum port VAR_10;
 u32 VAR_11;

 VAR_11 = FUNC_1(FUNC_7(VAR_7->cpu_transcoder));

 if (FUNC_2(VAR_8) >= 12)
  VAR_10 = FUNC_6(VAR_11);
 else
  VAR_10 = FUNC_8(VAR_11);

 if (FUNC_2(VAR_8) >= 11)
  FUNC_13(VAR_8, VAR_10, VAR_7);
 else if (FUNC_3(VAR_8))
  FUNC_11(VAR_8, VAR_10, VAR_7);
 else if (FUNC_4(VAR_8))
  FUNC_15(VAR_8, VAR_10, VAR_7);
 else if (FUNC_5(VAR_8))
  FUNC_10(VAR_8, VAR_10, VAR_7);
 else
  FUNC_12(VAR_8, VAR_10, VAR_7);

 VAR_9 = VAR_7->shared_dpll;
 if (VAR_9) {
  FUNC_9(!VAR_9->info->funcs->get_hw_state(VAR_8, VAR_9,
      &VAR_7->dpll_hw_state));
 }






 if (FUNC_2(VAR_8) < 9 &&
     (VAR_10 == VAR_4) && FUNC_1(VAR_2) & VAR_5) {
  VAR_7->has_pch_encoder = 1;

  VAR_11 = FUNC_1(FUNC_0(VAR_3));
  VAR_7->fdi_lanes = ((VAR_0 & VAR_11) >>
       VAR_1) + 1;

  FUNC_14(VAR_6, VAR_7);
 }
}
