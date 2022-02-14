
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int scratch; } ;
typedef int phys_addr_t ;



__attribute__((used)) static inline phys_addr_t
FUNC_0(struct drm_i915_gem_object *VAR_0)
{
 return VAR_0->scratch;
}
