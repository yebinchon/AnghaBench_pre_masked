
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int madv; } ;
struct drm_i915_gem_object {TYPE_1__ mm; } ;



 unsigned int VAR_0 ;

 int FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_gem_object *VAR_1,
        unsigned int VAR_2)
{
 switch (VAR_1->mm.madv) {
 case 129:
  FUNC_0(VAR_1);
 case 128:
  return;
 }

 if (VAR_2 & VAR_0)
  FUNC_1(VAR_1);
}
