
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reloc_cache {scalar_t__ has_llc; } ;
struct drm_i915_gem_object {scalar_t__ cache_level; scalar_t__ cache_dirty; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct drm_i915_gem_object const*) ;

__attribute__((used)) static inline int FUNC_1(const struct reloc_cache *VAR_4,
    const struct drm_i915_gem_object *VAR_5)
{
 if (!FUNC_0(VAR_5))
  return 0;

 if (VAR_0 == VAR_1)
  return 1;

 if (VAR_0 == VAR_2)
  return 0;

 return (VAR_4->has_llc ||
  VAR_5->cache_dirty ||
  VAR_5->cache_level != VAR_3);
}
