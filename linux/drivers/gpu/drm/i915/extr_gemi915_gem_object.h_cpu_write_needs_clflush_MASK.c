
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int cache_coherent; int pin_global; scalar_t__ cache_dirty; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct drm_i915_gem_object *VAR_1)
{
 if (VAR_1->cache_dirty)
  return 0;

 if (!(VAR_1->cache_coherent & VAR_0))
  return 1;

 return VAR_1->pin_global;
}
