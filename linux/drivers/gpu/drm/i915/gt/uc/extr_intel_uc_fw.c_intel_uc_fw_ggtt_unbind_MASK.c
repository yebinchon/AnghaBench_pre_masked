
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct intel_uc_fw {struct drm_i915_gem_object* obj; } ;
struct intel_gt {struct i915_ggtt* ggtt; } ;
struct TYPE_4__ {int (* clear_range ) (TYPE_2__*,int ,int ) ;} ;
struct i915_ggtt {TYPE_2__ vm; } ;
struct TYPE_3__ {int size; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (struct intel_uc_fw*,struct i915_ggtt*) ;

__attribute__((used)) static void FUNC_2(struct intel_uc_fw *VAR_0,
        struct intel_gt *VAR_1)
{
 struct drm_i915_gem_object *VAR_2 = VAR_0->obj;
 struct i915_ggtt *VAR_3 = VAR_1->ggtt;
 u64 VAR_4 = FUNC_1(VAR_0, VAR_3);

 VAR_3->vm.clear_range(&VAR_3->vm, VAR_4, VAR_2->base.size);
}
