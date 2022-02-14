
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0);
 i915_reg_t VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_5(500);
 if (FUNC_6(FUNC_1(VAR_3) != VAR_4, 5)) {
  if (FUNC_6(FUNC_1(VAR_3) != VAR_4, 5))
   FUNC_0("mode set failed: pipe %c stuck\n", FUNC_3(VAR_1));
 }
}
