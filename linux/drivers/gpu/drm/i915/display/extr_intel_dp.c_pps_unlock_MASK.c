
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int intel_wakeref_t ;


 int FUNC_0 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static intel_wakeref_t
FUNC_5(struct intel_dp *VAR_0, intel_wakeref_t VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_4(&VAR_2->pps_mutex);
 FUNC_3(VAR_2,
    FUNC_2(FUNC_0(VAR_0)),
    VAR_1);
 return 0;
}
