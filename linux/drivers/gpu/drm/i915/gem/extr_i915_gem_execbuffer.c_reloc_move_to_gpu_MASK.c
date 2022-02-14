
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {struct drm_i915_gem_object* obj; } ;
struct i915_request {int dummy; } ;
struct drm_i915_gem_object {int cache_dirty; int cache_coherent; scalar_t__ write_domain; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*,int ) ;
 int FUNC_1 (struct i915_request*,struct drm_i915_gem_object*,int) ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*,struct i915_request*,int ) ;
 int FUNC_4 (struct i915_vma*) ;

__attribute__((used)) static int FUNC_5(struct i915_request *VAR_1, struct i915_vma *VAR_2)
{
 struct drm_i915_gem_object *VAR_3 = VAR_2->obj;
 int VAR_4;

 FUNC_2(VAR_2);

 if (VAR_3->cache_dirty & ~VAR_3->cache_coherent)
  FUNC_0(VAR_3, 0);
 VAR_3->write_domain = 0;

 VAR_4 = FUNC_1(VAR_1, VAR_2->obj, 1);
 if (VAR_4 == 0)
  VAR_4 = FUNC_3(VAR_2, VAR_1, VAR_0);

 FUNC_4(VAR_2);

 return VAR_4;
}
