
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_overlay {TYPE_1__* regs; int active; struct drm_i915_private* i915; } ;
struct TYPE_5__ {int connection_mutex; } ;
struct TYPE_6__ {TYPE_2__ mode_config; int struct_mutex; } ;
struct drm_i915_private {TYPE_3__ drm; } ;
struct TYPE_4__ {int OCMD; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct intel_overlay*) ;
 int FUNC_3 (struct intel_overlay*) ;
 int FUNC_4 (struct intel_overlay*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct intel_overlay *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;
 int VAR_2;

 FUNC_6(&VAR_1->drm.struct_mutex);
 FUNC_0(!FUNC_1(&VAR_1->drm.mode_config.connection_mutex));

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 != 0)
  return VAR_2;

 if (!VAR_0->active)
  return 0;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2 != 0)
  return VAR_2;

 FUNC_5(0, &VAR_0->regs->OCMD);

 return FUNC_2(VAR_0);
}
