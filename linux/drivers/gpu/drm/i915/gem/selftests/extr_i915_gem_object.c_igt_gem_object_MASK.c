
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_i915_private*,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static int FUNC_5(void *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2;
 struct drm_i915_gem_object *VAR_4;
 int VAR_5 = -VAR_0;



 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_5 = FUNC_1(VAR_4);
  FUNC_4("i915_gem_object_create failed, err=%d\n", VAR_5);
  goto out;
 }

 VAR_5 = 0;
 FUNC_3(VAR_4);
out:
 return VAR_5;
}
