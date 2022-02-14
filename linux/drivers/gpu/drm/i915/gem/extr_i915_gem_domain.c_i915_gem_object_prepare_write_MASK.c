
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dirty; } ;
struct drm_i915_gem_object {int cache_coherent; int read_domains; TYPE_1__ mm; int frontbuffer; int cache_dirty; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct drm_i915_gem_object*,int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;

int FUNC_10(struct drm_i915_gem_object *VAR_10,
      unsigned int *VAR_11)
{
 int VAR_12;

 *VAR_11 = 0;
 if (!FUNC_1(VAR_10))
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_7(VAR_10,
       VAR_6 |
       VAR_5,
       VAR_7);
 if (VAR_12)
  goto err_unlock;

 VAR_12 = FUNC_3(VAR_10);
 if (VAR_12)
  goto err_unlock;

 if (VAR_10->cache_coherent & VAR_3 ||
     !FUNC_9(VAR_9)) {
  VAR_12 = FUNC_4(VAR_10, 1);
  if (VAR_12)
   goto err_unpin;
  else
   goto out;
 }

 FUNC_0(VAR_10, ~VAR_4);






 if (!VAR_10->cache_dirty) {
  *VAR_11 |= VAR_0;





  if (!(VAR_10->read_domains & VAR_4))
   *VAR_11 |= VAR_1;
 }

out:
 FUNC_8(VAR_10->frontbuffer, VAR_8);
 VAR_10->mm.dirty = 1;

 return 0;

err_unpin:
 FUNC_6(VAR_10);
err_unlock:
 FUNC_5(VAR_10);
 return VAR_12;
}
