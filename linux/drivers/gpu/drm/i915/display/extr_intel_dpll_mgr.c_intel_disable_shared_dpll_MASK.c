
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct intel_shared_dpll {unsigned int active_mask; int on; TYPE_4__* info; } ;
struct TYPE_6__ {int crtc; } ;
struct intel_crtc_state {struct intel_shared_dpll* shared_dpll; TYPE_1__ base; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_10__ {TYPE_2__ base; int dev; } ;
struct intel_crtc {TYPE_5__ base; } ;
struct drm_i915_private {int dpll_lock; } ;
struct TYPE_9__ {TYPE_3__* funcs; int name; } ;
struct TYPE_8__ {int (* disable ) (struct drm_i915_private*,struct intel_shared_dpll*) ;} ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 unsigned int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_i915_private*,struct intel_shared_dpll*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

void FUNC_10(const struct intel_crtc_state *VAR_0)
{
 struct intel_crtc *VAR_1 = FUNC_9(VAR_0->base.crtc);
 struct drm_i915_private *VAR_2 = FUNC_8(VAR_1->base.dev);
 struct intel_shared_dpll *VAR_3 = VAR_0->shared_dpll;
 unsigned int VAR_4 = FUNC_4(&VAR_1->base);


 if (FUNC_1(VAR_2) < 5)
  return;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_5(&VAR_2->dpll_lock);
 if (FUNC_2(!(VAR_3->active_mask & VAR_4)))
  goto out;

 FUNC_0("disable %s (active %x, on? %d) for crtc %d\n",
        VAR_3->info->name, VAR_3->active_mask, VAR_3->on,
        VAR_1->base.base.id);

 FUNC_3(VAR_2, VAR_3);
 FUNC_2(!VAR_3->on);

 VAR_3->active_mask &= ~VAR_4;
 if (VAR_3->active_mask)
  goto out;

 FUNC_0("disabling %s\n", VAR_3->info->name);
 VAR_3->info->funcs->disable(VAR_2, VAR_3);
 VAR_3->on = 0;

out:
 FUNC_6(&VAR_2->dpll_lock);
}
