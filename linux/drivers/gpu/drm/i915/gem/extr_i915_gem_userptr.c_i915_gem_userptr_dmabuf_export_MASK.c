
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mmu_object; } ;
struct drm_i915_gem_object {TYPE_1__ userptr; } ;


 int FUNC_0 (struct drm_i915_gem_object*,int ) ;

__attribute__((used)) static int
FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 if (VAR_0->userptr.mmu_object)
  return 0;

 return FUNC_0(VAR_0, 0);
}
