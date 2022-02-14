
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int display_alignment; struct drm_i915_gem_object* obj; } ;
struct drm_i915_gem_object {scalar_t__ pin_global; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct i915_vma*) ;

void
FUNC_4(struct i915_vma *VAR_1)
{
 struct drm_i915_gem_object *VAR_2 = VAR_1->obj;

 FUNC_1(VAR_2);

 if (FUNC_0(VAR_2->pin_global == 0))
  return;

 if (--VAR_2->pin_global == 0)
  VAR_1->display_alignment = VAR_0;


 FUNC_2(VAR_2);

 FUNC_3(VAR_1);
}
