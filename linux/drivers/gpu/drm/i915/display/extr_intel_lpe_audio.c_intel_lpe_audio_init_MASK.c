
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;

int FUNC_3(struct drm_i915_private *VAR_1)
{
 int VAR_2 = -VAR_0;

 if (FUNC_1(VAR_1)) {
  VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 < 0)
   FUNC_0("failed to setup LPE Audio bridge\n");
 }
 return VAR_2;
}
