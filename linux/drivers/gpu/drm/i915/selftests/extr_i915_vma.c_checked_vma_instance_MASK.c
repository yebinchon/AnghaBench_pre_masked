
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_ggtt_view {int dummy; } ;
struct i915_vma {struct i915_ggtt_view const ggtt_view; struct i915_address_space* vm; } ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 struct i915_vma* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_address_space*) ;
 scalar_t__ FUNC_3 (struct i915_vma*,struct i915_address_space*,struct i915_ggtt_view const*) ;
 struct i915_vma* FUNC_4 (struct drm_i915_gem_object*,struct i915_address_space*,struct i915_ggtt_view const*) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static struct i915_vma *
FUNC_7(struct drm_i915_gem_object *VAR_1,
       struct i915_address_space *VAR_2,
       const struct i915_ggtt_view *VAR_3)
{
 struct i915_vma *VAR_4;
 bool VAR_5 = 1;

 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return VAR_4;


 if (VAR_4->vm != VAR_2) {
  FUNC_6("VMA's vm [%p] does not match request [%p]\n",
         VAR_4->vm, VAR_2);
  VAR_5 = 0;
 }

 if (FUNC_2(VAR_2) != FUNC_5(VAR_4)) {
  FUNC_6("VMA ggtt status [%d] does not match parent [%d]\n",
         FUNC_5(VAR_4), FUNC_2(VAR_2));
  VAR_5 = 0;
 }

 if (FUNC_3(VAR_4, VAR_2, VAR_3)) {
  FUNC_6("i915_vma_compare failed with create parameters!\n");
  return FUNC_0(-VAR_0);
 }

 if (FUNC_3(VAR_4, VAR_4->vm,
        FUNC_5(VAR_4) ? &VAR_4->ggtt_view : ((void*)0))) {
  FUNC_6("i915_vma_compare failed with itself\n");
  return FUNC_0(-VAR_0);
 }

 if (!VAR_5) {
  FUNC_6("i915_vma_compare failed to detect the difference!\n");
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
