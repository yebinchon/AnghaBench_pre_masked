
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_create {int handle; int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_file*,struct drm_i915_private*,int *,int *) ;
 int FUNC_1 (struct drm_i915_private*) ;
 struct drm_i915_private* FUNC_2 (struct drm_device*) ;

int
FUNC_3(struct drm_device *VAR_0, void *VAR_1,
        struct drm_file *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_0);
 struct drm_i915_gem_create *VAR_4 = VAR_1;

 FUNC_1(VAR_3);

 return FUNC_0(VAR_2, VAR_3,
          &VAR_4->size, &VAR_4->handle);
}
