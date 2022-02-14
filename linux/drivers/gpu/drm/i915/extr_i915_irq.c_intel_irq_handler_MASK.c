
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int irq_handler_t ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static irq_handler_t FUNC_5(struct drm_i915_private *VAR_8)
{
 if (FUNC_0(VAR_8)) {
  if (FUNC_2(VAR_8))
   return VAR_0;
  else if (FUNC_4(VAR_8))
   return VAR_7;
  else if (FUNC_3(VAR_8, 4))
   return VAR_5;
  else if (FUNC_3(VAR_8, 3))
   return VAR_4;
  else
   return VAR_3;
 } else {
  if (FUNC_1(VAR_8) >= 11)
   return VAR_1;
  else if (FUNC_1(VAR_8) >= 8)
   return VAR_2;
  else
   return VAR_6;
 }
}
