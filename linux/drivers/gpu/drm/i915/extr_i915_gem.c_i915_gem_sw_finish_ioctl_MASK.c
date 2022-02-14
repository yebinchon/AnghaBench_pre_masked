
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_sw_finish {int handle; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_1 (struct drm_file*,int ) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;

int
FUNC_3(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_i915_gem_sw_finish *VAR_4 = VAR_2;
 struct drm_i915_gem_object *VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_4->handle);
 if (!VAR_5)
  return -VAR_0;







 FUNC_0(VAR_5);
 FUNC_2(VAR_5);

 return 0;
}
