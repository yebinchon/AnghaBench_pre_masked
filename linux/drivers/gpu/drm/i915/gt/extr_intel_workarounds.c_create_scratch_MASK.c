
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_vma {int dummy; } ;
struct i915_address_space {int i915; } ;
typedef struct i915_vma drm_i915_gem_object ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 struct i915_vma* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct i915_vma*) ;
 struct i915_vma* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*,int ) ;
 struct i915_vma* FUNC_7 (struct i915_vma*,struct i915_address_space*,int *) ;
 scalar_t__ FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*,int ,int ,int ) ;
 unsigned int FUNC_10 (int,int ) ;

__attribute__((used)) static struct i915_vma *
FUNC_11(struct i915_address_space *VAR_4, int VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 struct i915_vma *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_10(VAR_5 * sizeof(u32), VAR_1);
 VAR_6 = FUNC_4(VAR_4->i915, VAR_8);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 FUNC_6(VAR_6, VAR_0);

 VAR_7 = FUNC_7(VAR_6, VAR_4, ((void*)0));
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_3(VAR_7);
  goto err_obj;
 }

 VAR_9 = FUNC_9(VAR_7, 0, 0,
      FUNC_8(VAR_7) ? VAR_2 : VAR_3);
 if (VAR_9)
  goto err_obj;

 return VAR_7;

err_obj:
 FUNC_5(VAR_6);
 return FUNC_1(VAR_9);
}
