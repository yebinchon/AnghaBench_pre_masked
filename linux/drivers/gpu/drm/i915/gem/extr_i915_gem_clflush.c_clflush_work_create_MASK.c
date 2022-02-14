
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int cache_dirty; } ;
struct clflush {int obj; int base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct clflush* FUNC_3 (int,int ) ;

__attribute__((used)) static struct clflush *FUNC_4(struct drm_i915_gem_object *VAR_2)
{
 struct clflush *VAR_3;

 FUNC_0(!VAR_2->cache_dirty);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->base, &VAR_1);
 VAR_3->obj = FUNC_2(VAR_2);

 return VAR_3;
}
