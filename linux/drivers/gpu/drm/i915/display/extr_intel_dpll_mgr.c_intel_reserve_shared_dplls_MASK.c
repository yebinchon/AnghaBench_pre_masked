
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct intel_dpll_mgr {int (* get_dplls ) (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;} ;
struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_dpll_mgr* dpll_mgr; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

bool FUNC_3(struct intel_atomic_state *VAR_0,
    struct intel_crtc *VAR_1,
    struct intel_encoder *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_0->base.dev);
 const struct intel_dpll_mgr *VAR_4 = VAR_3->dpll_mgr;

 if (FUNC_0(!VAR_4))
  return 0;

 return VAR_4->get_dplls(VAR_0, VAR_1, VAR_2);
}
