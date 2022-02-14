
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dpll_mgr {struct dpll_info* dpll_info; } ;
struct drm_i915_private {int num_shared_dpll; int dpll_lock; struct intel_dpll_mgr const* dpll_mgr; TYPE_1__* shared_dplls; } ;
struct drm_device {int dummy; } ;
struct dpll_info {int id; scalar_t__ name; } ;
struct TYPE_2__ {struct dpll_info const* info; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (int) ;
 struct intel_dpll_mgr VAR_1 ;
 struct intel_dpll_mgr VAR_2 ;
 struct intel_dpll_mgr VAR_3 ;
 struct intel_dpll_mgr VAR_4 ;
 struct intel_dpll_mgr VAR_5 ;
 int FUNC_10 (int *) ;
 struct intel_dpll_mgr VAR_6 ;
 struct intel_dpll_mgr VAR_7 ;
 struct intel_dpll_mgr VAR_8 ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;

void FUNC_12(struct drm_device *VAR_9)
{
 struct drm_i915_private *VAR_10 = FUNC_11(VAR_9);
 const struct intel_dpll_mgr *VAR_11 = ((void*)0);
 const struct dpll_info *VAR_12;
 int VAR_13;

 if (FUNC_4(VAR_10) >= 12)
  VAR_11 = &VAR_8;
 else if (FUNC_6(VAR_10))
  VAR_11 = &VAR_3;
 else if (FUNC_4(VAR_10) >= 11)
  VAR_11 = &VAR_5;
 else if (FUNC_5(VAR_10))
  VAR_11 = &VAR_2;
 else if (FUNC_7(VAR_10))
  VAR_11 = &VAR_7;
 else if (FUNC_8(VAR_10))
  VAR_11 = &VAR_1;
 else if (FUNC_1(VAR_10))
  VAR_11 = &VAR_4;
 else if (FUNC_3(VAR_10) || FUNC_2(VAR_10))
  VAR_11 = &VAR_6;

 if (!VAR_11) {
  VAR_10->num_shared_dpll = 0;
  return;
 }

 VAR_12 = VAR_11->dpll_info;

 for (VAR_13 = 0; VAR_12[VAR_13].name; VAR_13++) {
  FUNC_9(VAR_13 != VAR_12[VAR_13].id);
  VAR_10->shared_dplls[VAR_13].info = &VAR_12[VAR_13];
 }

 VAR_10->dpll_mgr = VAR_11;
 VAR_10->num_shared_dpll = VAR_13;
 FUNC_10(&VAR_10->dpll_lock);

 FUNC_0(VAR_10->num_shared_dpll > VAR_0);
}
