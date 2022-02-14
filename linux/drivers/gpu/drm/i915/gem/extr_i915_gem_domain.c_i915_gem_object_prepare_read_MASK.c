
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int cache_coherent; int read_domains; int cache_dirty; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct drm_i915_gem_object*,int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int ,int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct drm_i915_gem_object *VAR_7,
     unsigned int *VAR_8)
{
 int VAR_9;

 *VAR_8 = 0;
 if (!FUNC_1(VAR_7))
  return -VAR_1;

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_7,
       VAR_4,
       VAR_5);
 if (VAR_9)
  goto err_unlock;

 VAR_9 = FUNC_3(VAR_7);
 if (VAR_9)
  goto err_unlock;

 if (VAR_7->cache_coherent & VAR_2 ||
     !FUNC_8(VAR_6)) {
  VAR_9 = FUNC_4(VAR_7, 0);
  if (VAR_9)
   goto err_unpin;
  else
   goto out;
 }

 FUNC_0(VAR_7, ~VAR_3);






 if (!VAR_7->cache_dirty &&
     !(VAR_7->read_domains & VAR_3))
  *VAR_8 = VAR_0;

out:

 return 0;

err_unpin:
 FUNC_6(VAR_7);
err_unlock:
 FUNC_5(VAR_7);
 return VAR_9;
}
