
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int crtc_mask; } ;
struct intel_shared_dpll {int on; TYPE_4__* info; int active_mask; TYPE_2__ state; } ;
struct TYPE_10__ {int crtc; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; TYPE_5__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dpll_lock; } ;
struct TYPE_9__ {TYPE_3__* funcs; int name; } ;
struct TYPE_8__ {int (* prepare ) (struct drm_i915_private*,struct intel_shared_dpll*) ;} ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

void FUNC_8(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_7(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_6(VAR_1->base.dev);
 struct intel_shared_dpll *VAR_3 = VAR_0->shared_dpll;

 if (FUNC_1(VAR_3 == ((void*)0)))
  return;

 FUNC_3(&VAR_2->dpll_lock);
 FUNC_1(!VAR_3->state.crtc_mask);
 if (!VAR_3->active_mask) {
  FUNC_0("setting up %s\n", VAR_3->info->name);
  FUNC_1(VAR_3->on);
  FUNC_2(VAR_2, VAR_3);

  VAR_3->info->funcs->prepare(VAR_2, VAR_3);
 }
 FUNC_4(&VAR_2->dpll_lock);
}
