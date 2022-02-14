
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {TYPE_1__* ggtt; struct drm_i915_private* i915; } ;
struct i915_vma {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;
struct TYPE_2__ {int vm; } ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int VAR_1 ;
 struct i915_vma* FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*,int ) ;
 struct i915_vma* FUNC_5 (struct i915_vma*,int *,int *) ;

__attribute__((used)) static struct i915_vma *FUNC_6(struct intel_gt *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->i915;
 struct drm_i915_gem_object *VAR_4;
 struct i915_vma *VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);

 FUNC_4(VAR_4, VAR_0);

 VAR_5 = FUNC_5(VAR_4, &VAR_2->ggtt->vm, ((void*)0));
 if (FUNC_1(VAR_5))
  FUNC_3(VAR_4);

 return VAR_5;
}
