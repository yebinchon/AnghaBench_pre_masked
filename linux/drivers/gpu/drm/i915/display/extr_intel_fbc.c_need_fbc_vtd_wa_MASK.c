
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(struct drm_i915_private *VAR_0)
{

 if (FUNC_3() &&
     (FUNC_2(VAR_0) || FUNC_1(VAR_0))) {
  FUNC_0("Disabling framebuffer compression (FBC) to prevent screen flicker with VT-d enabled\n");
  return 1;
 }

 return 0;
}
