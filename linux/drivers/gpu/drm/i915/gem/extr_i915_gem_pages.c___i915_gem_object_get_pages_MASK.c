
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int pages_pin_count; } ;
struct drm_i915_gem_object {TYPE_1__ mm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct drm_i915_gem_object *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_5(&VAR_0->mm.lock);
 if (VAR_1)
  return VAR_1;

 if (FUNC_8(!FUNC_3(VAR_0))) {
  FUNC_0(FUNC_4(VAR_0));

  VAR_1 = FUNC_1(VAR_0);
  if (VAR_1)
   goto unlock;

  FUNC_7();
 }
 FUNC_2(&VAR_0->mm.pages_pin_count);

unlock:
 FUNC_6(&VAR_0->mm.lock);
 return VAR_1;
}
