
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_fbc {char* no_fbc_reason; scalar_t__ underrun_detected; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
struct TYPE_2__ {int enable_fbc; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;

__attribute__((used)) static bool FUNC_1(struct drm_i915_private *VAR_1)
{
 struct intel_fbc *VAR_2 = &VAR_1->fbc;

 if (FUNC_0(VAR_1)) {
  VAR_2->no_fbc_reason = "VGPU is active";
  return 0;
 }

 if (!VAR_0.enable_fbc) {
  VAR_2->no_fbc_reason = "disabled per module param or by default";
  return 0;
 }

 if (VAR_2->underrun_detected) {
  VAR_2->no_fbc_reason = "underrun detected";
  return 0;
 }

 return 1;
}
