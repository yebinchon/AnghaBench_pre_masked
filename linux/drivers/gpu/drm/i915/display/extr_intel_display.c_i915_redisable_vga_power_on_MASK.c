
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;

void FUNC_4(struct drm_i915_private *VAR_1)
{
 i915_reg_t VAR_2 = FUNC_3(VAR_1);

 if (!(FUNC_1(VAR_2) & VAR_0)) {
  FUNC_0("Something enabled VGA plane, disabling it\n");
  FUNC_2(VAR_1);
 }
}
