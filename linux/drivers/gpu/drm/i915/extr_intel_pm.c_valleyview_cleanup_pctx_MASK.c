
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int vlv_pctx; } ;
struct drm_i915_gem_object {int dummy; } ;


 struct drm_i915_gem_object* FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0)
{
 struct drm_i915_gem_object *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->vlv_pctx);
 if (VAR_1)
  FUNC_1(VAR_1);
}
