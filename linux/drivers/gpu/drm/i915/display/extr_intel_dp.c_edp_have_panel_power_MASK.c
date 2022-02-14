
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {scalar_t__ pps_pipe; } ;
struct drm_i915_private {int pps_mutex; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_3 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(struct intel_dp *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2);

 FUNC_5(&VAR_3->pps_mutex);

 if ((FUNC_2(VAR_3) || FUNC_1(VAR_3)) &&
     VAR_2->pps_pipe == VAR_0)
  return 0;

 return (FUNC_0(FUNC_3(VAR_2)) & VAR_1) != 0;
}
