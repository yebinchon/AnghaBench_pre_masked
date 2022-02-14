
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;
struct i915_gem_context {int vm; int i915; } ;
typedef struct i915_vma drm_i915_gem_object ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 struct i915_vma* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct i915_vma*) ;
 struct i915_vma* FUNC_4 (int ,int) ;
 int FUNC_5 (struct i915_vma*) ;
 struct i915_vma* FUNC_6 (struct i915_vma*,int ,int *) ;
 int FUNC_7 (struct i915_vma*,int ,int ,int ) ;

__attribute__((used)) static struct i915_vma *FUNC_8(struct i915_gem_context *VAR_2)
{
 struct drm_i915_gem_object *VAR_3;
 struct i915_vma *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_2->i915, 16 * VAR_0);
 if (FUNC_2(VAR_3))
  return FUNC_0(VAR_3);

 VAR_4 = FUNC_6(VAR_3, VAR_2->vm, ((void*)0));
 if (FUNC_2(VAR_4)) {
  VAR_5 = FUNC_3(VAR_4);
  goto err_obj;
 }

 VAR_5 = FUNC_7(VAR_4, 0, 0, VAR_1);
 if (VAR_5)
  goto err_obj;

 return VAR_4;

err_obj:
 FUNC_5(VAR_3);
 return FUNC_1(VAR_5);
}
