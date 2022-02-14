
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mutex; } ;
struct TYPE_6__ {TYPE_2__ vm; } ;
struct drm_i915_private {int runtime_pm; TYPE_3__ ggtt; } ;
struct TYPE_4__ {int dev; } ;
struct drm_i915_gem_object {int userfault_count; TYPE_1__ base; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(struct drm_i915_gem_object *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_5(VAR_0->base.dev);
 intel_wakeref_t VAR_2;
 VAR_2 = FUNC_1(&VAR_1->runtime_pm);
 FUNC_3(&VAR_1->ggtt.vm.mutex);

 if (!VAR_0->userfault_count)
  goto out;

 FUNC_0(VAR_0);
 FUNC_6();

out:
 FUNC_4(&VAR_1->ggtt.vm.mutex);
 FUNC_2(&VAR_1->runtime_pm, VAR_2);
}
