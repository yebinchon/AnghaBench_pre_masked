
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static i915_reg_t FUNC_3(struct drm_i915_private *VAR_1)
{
 FUNC_2(FUNC_1(VAR_1) >= 11);

 return FUNC_1(VAR_1) >= 8 ? FUNC_0(2) : VAR_0;
}
