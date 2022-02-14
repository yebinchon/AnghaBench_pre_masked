
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dpll_mgr {int (* put_dplls ) (struct intel_atomic_state*,struct intel_crtc*) ;} ;
struct intel_crtc {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ base; } ;
struct drm_i915_private {struct intel_dpll_mgr* dpll_mgr; } ;


 int FUNC_0 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

void FUNC_2(struct intel_atomic_state *VAR_0,
    struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0->base.dev);
 const struct intel_dpll_mgr *VAR_3 = VAR_2->dpll_mgr;







 if (!VAR_3)
  return;

 VAR_3->put_dplls(VAR_0, VAR_1);
}
