
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int crtc_mask; } ;
struct intel_shared_dpll {unsigned int active_mask; int on; TYPE_5__* info; TYPE_2__ state; } ;
struct TYPE_7__ {int crtc; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; TYPE_1__ base; } ;
struct TYPE_9__ {int id; } ;
struct TYPE_12__ {TYPE_3__ base; int dev; } ;
struct intel_crtc {TYPE_6__ base; } ;
struct drm_i915_private {int dpll_lock; } ;
struct TYPE_11__ {TYPE_4__* funcs; int name; } ;
struct TYPE_10__ {int (* enable ) (struct drm_i915_private*,struct intel_shared_dpll*) ;} ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 unsigned int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

void FUNC_9(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_8(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_7(VAR_1->base.dev);
 struct intel_shared_dpll *VAR_3 = VAR_0->shared_dpll;
 unsigned int VAR_4 = FUNC_3(&VAR_1->base);
 unsigned int VAR_5;

 if (FUNC_1(VAR_3 == ((void*)0)))
  return;

 FUNC_4(&VAR_2->dpll_lock);
 VAR_5 = VAR_3->active_mask;

 if (FUNC_1(!(VAR_3->state.crtc_mask & VAR_4)) ||
     FUNC_1(VAR_3->active_mask & VAR_4))
  goto out;

 VAR_3->active_mask |= VAR_4;

 FUNC_0("enable %s (active %x, on? %d) for crtc %d\n",
        VAR_3->info->name, VAR_3->active_mask, VAR_3->on,
        VAR_1->base.base.id);

 if (VAR_5) {
  FUNC_1(!VAR_3->on);
  FUNC_2(VAR_2, VAR_3);
  goto out;
 }
 FUNC_1(VAR_3->on);

 FUNC_0("enabling %s\n", VAR_3->info->name);
 VAR_3->info->funcs->enable(VAR_2, VAR_3);
 VAR_3->on = 1;

out:
 FUNC_5(&VAR_2->dpll_lock);
}
