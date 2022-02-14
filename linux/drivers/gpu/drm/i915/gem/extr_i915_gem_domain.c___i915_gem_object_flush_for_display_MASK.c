
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {scalar_t__ write_domain; scalar_t__ cache_dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_gem_object*,int ) ;
 int FUNC_1 (struct drm_i915_gem_object*,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_gem_object *VAR_2)
{




 FUNC_1(VAR_2, ~VAR_1);
 if (VAR_2->cache_dirty)
  FUNC_0(VAR_2, VAR_0);
 VAR_2->write_domain = 0;
}
