
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int userfault_count; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static char FUNC_1(struct drm_i915_gem_object *VAR_0)
{
 return FUNC_0(VAR_0->userfault_count) ? 'g' : ' ';
}
