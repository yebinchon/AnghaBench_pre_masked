
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {unsigned int tiling_and_stride; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int
FUNC_0(const struct drm_i915_gem_object *VAR_1)
{
 return VAR_1->tiling_and_stride & VAR_0;
}
