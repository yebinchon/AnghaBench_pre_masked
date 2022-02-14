
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ madv; int pages_pin_count; } ;
struct drm_i915_gem_object {TYPE_1__ mm; int pin_global; int bind_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_gem_object *VAR_1)
{

 if (!FUNC_2(VAR_1))
  return 0;
 if (FUNC_1(&VAR_1->mm.pages_pin_count) > FUNC_1(&VAR_1->bind_count))
  return 0;







 if (FUNC_0(VAR_1->pin_global))
  return 0;





 return FUNC_3() || VAR_1->mm.madv == VAR_0;
}
