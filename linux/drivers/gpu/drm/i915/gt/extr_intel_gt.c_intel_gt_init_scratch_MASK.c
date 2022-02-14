
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {int scratch; TYPE_1__* ggtt; struct drm_i915_private* i915; } ;
struct i915_vma {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;
struct TYPE_2__ {int vm; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct i915_vma*) ;
 struct i915_vma* FUNC_3 (struct drm_i915_private*,unsigned int) ;
 struct i915_vma* FUNC_4 (struct drm_i915_private*,unsigned int) ;
 int FUNC_5 (struct i915_vma*) ;
 struct i915_vma* FUNC_6 (struct i915_vma*,int *,int *) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*,int ,int ,int) ;

int FUNC_9(struct intel_gt *VAR_2, unsigned int VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->i915;
 struct drm_i915_gem_object *VAR_5;
 struct i915_vma *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (FUNC_1(VAR_5)) {
  FUNC_0("Failed to allocate scratch page\n");
  return FUNC_2(VAR_5);
 }

 VAR_6 = FUNC_6(VAR_5, &VAR_2->ggtt->vm, ((void*)0));
 if (FUNC_1(VAR_6)) {
  VAR_7 = FUNC_2(VAR_6);
  goto err_unref;
 }

 VAR_7 = FUNC_8(VAR_6, 0, 0, VAR_0 | VAR_1);
 if (VAR_7)
  goto err_unref;

 VAR_2->scratch = FUNC_7(VAR_6);

 return 0;

err_unref:
 FUNC_5(VAR_5);
 return VAR_7;
}
