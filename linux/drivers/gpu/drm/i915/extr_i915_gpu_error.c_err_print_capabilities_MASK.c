
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_runtime_info {int sseu; } ;
struct intel_driver_caps {int dummy; } ;
struct intel_device_info {int dummy; } ;
struct drm_printer {int dummy; } ;
struct drm_i915_error_state_buf {int dummy; } ;


 struct drm_printer FUNC_0 (struct drm_i915_error_state_buf*) ;
 int FUNC_1 (struct intel_device_info const*,struct drm_printer*) ;
 int FUNC_2 (int *,struct drm_printer*) ;
 int FUNC_3 (struct intel_driver_caps const*,struct drm_printer*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_error_state_buf *VAR_0,
       const struct intel_device_info *VAR_1,
       const struct intel_runtime_info *VAR_2,
       const struct intel_driver_caps *VAR_3)
{
 struct drm_printer VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, &VAR_4);
 FUNC_3(VAR_3, &VAR_4);
 FUNC_2(&VAR_2->sseu, &VAR_4);
}
