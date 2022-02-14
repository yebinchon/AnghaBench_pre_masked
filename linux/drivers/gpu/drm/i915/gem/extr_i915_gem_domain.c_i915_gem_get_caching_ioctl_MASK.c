
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int cache_level; } ;
struct drm_i915_gem_caching {int caching; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_i915_gem_object* FUNC_0 (struct drm_file*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(struct drm_device *VAR_4, void *VAR_5,
          struct drm_file *VAR_6)
{
 struct drm_i915_gem_caching *VAR_7 = VAR_5;
 struct drm_i915_gem_object *VAR_8;
 int VAR_9 = 0;

 FUNC_1();
 VAR_8 = FUNC_0(VAR_6, VAR_7->handle);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }

 switch (VAR_8->cache_level) {
 case 129:
 case 130:
  VAR_7->caching = VAR_1;
  break;

 case 128:
  VAR_7->caching = VAR_2;
  break;

 default:
  VAR_7->caching = VAR_3;
  break;
 }
out:
 FUNC_2();
 return VAR_9;
}
