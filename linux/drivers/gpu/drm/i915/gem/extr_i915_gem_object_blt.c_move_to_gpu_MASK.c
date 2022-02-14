
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {struct drm_i915_gem_object* obj; } ;
struct i915_request {int dummy; } ;
struct drm_i915_gem_object {int cache_dirty; int cache_coherent; } ;


 int FUNC_0 (struct drm_i915_gem_object*,int ) ;
 int FUNC_1 (struct i915_request*,struct drm_i915_gem_object*,int) ;

__attribute__((used)) static int FUNC_2(struct i915_vma *VAR_0, struct i915_request *VAR_1, bool VAR_2)
{
 struct drm_i915_gem_object *VAR_3 = VAR_0->obj;

 if (VAR_3->cache_dirty & ~VAR_3->cache_coherent)
  FUNC_0(VAR_3, 0);

 return FUNC_1(VAR_1, VAR_3, VAR_2);
}
