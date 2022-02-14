
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {int dummy; } ;
typedef struct i915_vma u32 ;
struct TYPE_2__ {int vm; } ;
struct drm_i915_private {TYPE_1__ ggtt; int gt; } ;
typedef struct i915_vma drm_i915_gem_object ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 struct i915_vma* FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 struct i915_vma VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*,int ,int) ;
 struct i915_vma* FUNC_5 (struct drm_i915_private*,int ) ;
 struct i915_vma* FUNC_6 (struct i915_vma*,int ) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 struct i915_vma* FUNC_9 (struct i915_vma*,int *,int *) ;
 int FUNC_10 (struct i915_vma*,int ,int ,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct i915_vma *FUNC_12(struct drm_i915_private *VAR_5)
{
 struct drm_i915_gem_object *VAR_6;
 struct i915_vma *VAR_7;
 u32 *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_5(VAR_5, VAR_2);
 if (FUNC_2(VAR_6))
  return FUNC_0(VAR_6);

 VAR_8 = FUNC_6(VAR_6, VAR_0);
 if (FUNC_2(VAR_8)) {
  VAR_9 = FUNC_3(VAR_8);
  goto err;
 }

 *VAR_8 = VAR_1;

 FUNC_4(VAR_6, 0, 64);
 FUNC_8(VAR_6);

 FUNC_11(&VAR_5->gt);

 VAR_7 = FUNC_9(VAR_6, &VAR_5->ggtt.vm, ((void*)0));
 if (FUNC_2(VAR_7)) {
  VAR_9 = FUNC_3(VAR_7);
  goto err;
 }

 VAR_9 = FUNC_10(VAR_7, 0, 0, VAR_4 | VAR_3);
 if (VAR_9)
  goto err;

 return VAR_7;

err:
 FUNC_7(VAR_6);
 return FUNC_1(VAR_9);
}
