
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {int dummy; } ;
struct i915_ggtt_view {int dummy; } ;
struct i915_address_space {int closed; } ;
struct TYPE_2__ {int lock; } ;
struct drm_i915_gem_object {TYPE_1__ vma; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_address_space*) ;
 scalar_t__ FUNC_3 (struct i915_vma*,struct i915_address_space*,struct i915_ggtt_view const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 struct i915_vma* FUNC_7 (struct drm_i915_gem_object*,struct i915_address_space*,struct i915_ggtt_view const*) ;
 struct i915_vma* FUNC_8 (struct drm_i915_gem_object*,struct i915_address_space*,struct i915_ggtt_view const*) ;

struct i915_vma *
FUNC_9(struct drm_i915_gem_object *VAR_0,
    struct i915_address_space *VAR_1,
    const struct i915_ggtt_view *VAR_2)
{
 struct i915_vma *VAR_3;

 FUNC_0(VAR_2 && !FUNC_2(VAR_1));
 FUNC_0(VAR_1->closed);

 FUNC_4(&VAR_0->vma.lock);
 VAR_3 = FUNC_8(VAR_0, VAR_1, VAR_2);
 FUNC_5(&VAR_0->vma.lock);


 if (FUNC_6(!VAR_3))
  VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_2);

 FUNC_0(!FUNC_1(VAR_3) && FUNC_3(VAR_3, VAR_1, VAR_2));
 return VAR_3;
}
