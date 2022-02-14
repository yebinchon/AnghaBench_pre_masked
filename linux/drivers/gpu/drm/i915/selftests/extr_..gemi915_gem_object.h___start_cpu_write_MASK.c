
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int cache_dirty; void* write_domain; void* read_domains; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;

__attribute__((used)) static inline void FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 VAR_1->read_domains = VAR_0;
 VAR_1->write_domain = VAR_0;
 if (FUNC_0(VAR_1))
  VAR_1->cache_dirty = 1;
}
