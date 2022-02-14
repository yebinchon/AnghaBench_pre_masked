
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_shared_dpll_state {scalar_t__ crtc_mask; int hw_state; } ;
struct intel_shared_dpll {TYPE_3__* info; int active_mask; } ;
struct intel_dpll_hw_state {int dummy; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {int name; TYPE_1__ base; int dev; } ;
struct intel_crtc {TYPE_2__ base; } ;
struct intel_atomic_state {int base; } ;
struct drm_i915_private {struct intel_shared_dpll* shared_dplls; } ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (char*,int ,int ,int ,...) ;
 struct intel_shared_dpll_state* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct intel_dpll_hw_state const*,int *,int) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static struct intel_shared_dpll *
FUNC_4(struct intel_atomic_state *VAR_0,
         const struct intel_crtc *VAR_1,
         const struct intel_dpll_hw_state *VAR_2,
         enum intel_dpll_id VAR_3,
         enum intel_dpll_id VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_3(VAR_1->base.dev);
 struct intel_shared_dpll *VAR_6, *VAR_7 = ((void*)0);
 struct intel_shared_dpll_state *VAR_8;
 enum intel_dpll_id VAR_9;

 VAR_8 = FUNC_1(&VAR_0->base);

 for (VAR_9 = VAR_3; VAR_9 <= VAR_4; VAR_9++) {
  VAR_6 = &VAR_5->shared_dplls[VAR_9];


  if (VAR_8[VAR_9].crtc_mask == 0) {
   if (!VAR_7)
    VAR_7 = VAR_6;
   continue;
  }

  if (FUNC_2(VAR_2,
      &VAR_8[VAR_9].hw_state,
      sizeof(*VAR_2)) == 0) {
   FUNC_0("[CRTC:%d:%s] sharing existing %s (crtc mask 0x%08x, active %x)\n",
          VAR_1->base.base.id, VAR_1->base.name,
          VAR_6->info->name,
          VAR_8[VAR_9].crtc_mask,
          VAR_6->active_mask);
   return VAR_6;
  }
 }


 if (VAR_7) {
  FUNC_0("[CRTC:%d:%s] allocated %s\n",
         VAR_1->base.base.id, VAR_1->base.name,
         VAR_7->info->name);
  return VAR_7;
 }

 return ((void*)0);
}
