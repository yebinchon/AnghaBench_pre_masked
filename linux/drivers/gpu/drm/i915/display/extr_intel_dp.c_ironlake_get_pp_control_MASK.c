
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int pps_mutex; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static u32 FUNC_6(struct intel_dp *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_4(VAR_2);
 u32 VAR_4;

 FUNC_5(&VAR_3->pps_mutex);

 VAR_4 = FUNC_1(FUNC_3(VAR_2));
 if (FUNC_2(!FUNC_0(VAR_3) &&
      (VAR_4 & VAR_0) != VAR_1)) {
  VAR_4 &= ~VAR_0;
  VAR_4 |= VAR_1;
 }
 return VAR_4;
}
