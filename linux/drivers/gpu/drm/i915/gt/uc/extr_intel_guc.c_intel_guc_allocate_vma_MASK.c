
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_guc {int dummy; } ;
struct intel_gt {TYPE_1__* ggtt; int i915; } ;
struct i915_vma {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;
struct TYPE_2__ {int vm; } ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 struct i915_vma* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct intel_gt* FUNC_3 (struct intel_guc*) ;
 struct i915_vma* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*) ;
 struct i915_vma* FUNC_7 (struct i915_vma*,int *,int *) ;
 struct i915_vma* FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*,int ,int ,int) ;

struct i915_vma *FUNC_10(struct intel_guc *VAR_2, u32 VAR_3)
{
 struct intel_gt *VAR_4 = FUNC_3(VAR_2);
 struct drm_i915_gem_object *VAR_5;
 struct i915_vma *VAR_6;
 u64 VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_4->i915, VAR_3);
 if (FUNC_2(VAR_5))
  return FUNC_0(VAR_5);

 VAR_6 = FUNC_7(VAR_5, &VAR_4->ggtt->vm, ((void*)0));
 if (FUNC_2(VAR_6))
  goto err;

 VAR_7 = VAR_0 | VAR_1 | FUNC_6(VAR_6);
 VAR_8 = FUNC_9(VAR_6, 0, 0, VAR_7);
 if (VAR_8) {
  VAR_6 = FUNC_1(VAR_8);
  goto err;
 }

 return FUNC_8(VAR_6);

err:
 FUNC_5(VAR_5);
 return VAR_6;
}
