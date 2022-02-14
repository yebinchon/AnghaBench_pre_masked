
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;
struct drm_i915_gem_exec_object2 {int dummy; } ;



__attribute__((used)) static size_t FUNC_0(void)
{
 return (sizeof(struct drm_i915_gem_exec_object2) +
  sizeof(struct i915_vma *) +
  sizeof(unsigned int));
}
