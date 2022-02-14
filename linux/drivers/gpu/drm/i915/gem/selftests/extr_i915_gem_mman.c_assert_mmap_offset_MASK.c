
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_3 (struct drm_i915_private*,unsigned long) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_0,
          unsigned long VAR_1,
          int VAR_2)
{
 struct drm_i915_gem_object *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_3);
 FUNC_4(VAR_3);

 return VAR_4 == VAR_2;
}
