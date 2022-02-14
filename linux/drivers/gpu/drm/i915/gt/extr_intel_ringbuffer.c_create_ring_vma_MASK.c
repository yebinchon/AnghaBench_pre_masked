
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;
struct i915_address_space {scalar_t__ has_read_only; struct drm_i915_private* i915; } ;
struct i915_ggtt {struct i915_address_space vm; } ;
struct drm_i915_private {int dummy; } ;
typedef struct i915_vma drm_i915_gem_object ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 struct i915_vma* FUNC_2 (struct drm_i915_private*,int) ;
 struct i915_vma* FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct i915_vma*) ;
 struct i915_vma* FUNC_6 (struct i915_vma*,struct i915_address_space*,int *) ;

__attribute__((used)) static struct i915_vma *FUNC_7(struct i915_ggtt *VAR_0, int VAR_1)
{
 struct i915_address_space *VAR_2 = &VAR_0->vm;
 struct drm_i915_private *VAR_3 = VAR_2->i915;
 struct drm_i915_gem_object *VAR_4;
 struct i915_vma *VAR_5;

 VAR_4 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_4)
  VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_4);





 if (VAR_2->has_read_only)
  FUNC_5(VAR_4);

 VAR_5 = FUNC_6(VAR_4, VAR_2, ((void*)0));
 if (FUNC_1(VAR_5))
  goto err;

 return VAR_5;

err:
 FUNC_4(VAR_4);
 return VAR_5;
}
