
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_1__ drm; } ;
struct drm_i915_gem_object {int cache_level; } ;
struct drm_i915_gem_caching {int caching; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_5 (struct drm_file*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct drm_i915_gem_object*,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct drm_i915_private* FUNC_12 (struct drm_device*) ;

int FUNC_13(struct drm_device *VAR_9, void *VAR_10,
          struct drm_file *VAR_11)
{
 struct drm_i915_private *VAR_12 = FUNC_12(VAR_9);
 struct drm_i915_gem_caching *VAR_13 = VAR_10;
 struct drm_i915_gem_object *VAR_14;
 enum i915_cache_level VAR_15;
 int VAR_16 = 0;

 switch (VAR_13->caching) {
 case 128:
  VAR_15 = VAR_5;
  break;
 case 130:






  if (!FUNC_0(VAR_12) && !FUNC_1(VAR_12))
   return -VAR_1;

  VAR_15 = VAR_4;
  break;
 case 129:
  VAR_15 = FUNC_2(VAR_12) ? VAR_6 : VAR_5;
  break;
 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_5(VAR_11, VAR_13->handle);
 if (!VAR_14)
  return -VAR_2;





 if (FUNC_3(VAR_14)) {
  VAR_16 = -VAR_3;
  goto out;
 }

 if (VAR_14->cache_level == VAR_15)
  goto out;

 VAR_16 = FUNC_9(VAR_14,
       VAR_7,
       VAR_8);
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_10(&VAR_12->drm.struct_mutex);
 if (VAR_16)
  goto out;

 VAR_16 = FUNC_4(VAR_14);
 if (VAR_16 == 0) {
  VAR_16 = FUNC_7(VAR_14, VAR_15);
  FUNC_8(VAR_14);
 }
 FUNC_11(&VAR_12->drm.struct_mutex);

out:
 FUNC_6(VAR_14);
 return VAR_16;
}
