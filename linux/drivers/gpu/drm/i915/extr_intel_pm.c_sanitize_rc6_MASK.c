
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_device_info {int has_rc6; int has_rps; scalar_t__ has_rc6p; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct intel_device_info* FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_5(struct drm_i915_private *VAR_0)
{
 struct intel_device_info *VAR_1 = FUNC_4(VAR_0);


 if (FUNC_3(VAR_0)) {
  VAR_1->has_rc6 = 0;
  VAR_1->has_rps = 0;
 }

 if (VAR_1->has_rc6 &&
     FUNC_1(VAR_0) && !FUNC_2(VAR_0)) {
  FUNC_0("RC6 disabled by BIOS\n");
  VAR_1->has_rc6 = 0;
 }







 if (!VAR_1->has_rc6 && VAR_1->has_rc6p)
  VAR_1->has_rc6p = 0;

 return VAR_1->has_rc6;
}
