
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct drm_i915_private {int runtime_pm; struct drm_device drm; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (struct drm_device*,int ) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*) ;
 int FUNC_11 (struct drm_i915_private*) ;
 int FUNC_12 (struct drm_i915_private*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (struct drm_i915_private*) ;
 int FUNC_16 (struct drm_i915_private*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct drm_i915_private*) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static void FUNC_20(struct drm_i915_private *VAR_2)
{
 struct drm_device *VAR_3 = &VAR_2->drm;

 FUNC_8(VAR_2);
 FUNC_10(VAR_2);





 if (FUNC_18(VAR_2))
  FUNC_2(FUNC_19(VAR_1), VAR_0);


 if (FUNC_5(VAR_3, 0) == 0) {
  FUNC_7(VAR_2);
  FUNC_11(VAR_2);


  FUNC_9(VAR_2);
 } else
  FUNC_0("Failed to register driver for userspace access!\n");

 if (FUNC_1(VAR_2)) {

  FUNC_15(VAR_2);
  FUNC_4();
 }

 if (FUNC_3(VAR_2, 5))
  FUNC_14(VAR_2);

 FUNC_12(VAR_2);
 FUNC_13(VAR_3);





 if (FUNC_1(VAR_2))
  FUNC_6(VAR_3);

 FUNC_16(VAR_2);
 FUNC_17(&VAR_2->runtime_pm);
}
