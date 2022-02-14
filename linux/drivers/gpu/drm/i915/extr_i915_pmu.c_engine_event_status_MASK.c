
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int i915; } ;
typedef enum drm_i915_pmu_engine_sample { ____Placeholder_drm_i915_pmu_engine_sample } drm_i915_pmu_engine_sample ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct intel_engine_cs *VAR_2,
      enum drm_i915_pmu_engine_sample VAR_3)
{
 switch (VAR_3) {
 case 130:
 case 128:
  break;
 case 129:
  if (FUNC_0(VAR_2->i915) < 6)
   return -VAR_0;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
