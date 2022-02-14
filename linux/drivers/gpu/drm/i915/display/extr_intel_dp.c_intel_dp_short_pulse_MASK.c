
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ test_type; } ;
struct intel_dp {scalar_t__ sink_count; TYPE_1__ compliance; int aux; } ;
struct drm_i915_private {int drm; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 scalar_t__ FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;

__attribute__((used)) static bool
FUNC_9(struct intel_dp *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3 = VAR_1->sink_count;
 bool VAR_4;





 FUNC_8(&VAR_1->compliance, 0, sizeof(VAR_1->compliance));







 VAR_4 = FUNC_5(VAR_1);

 if ((VAR_3 != VAR_1->sink_count) || !VAR_4) {

  return 0;
 }

 FUNC_4(VAR_1);


 FUNC_2(&VAR_1->aux);


 if (FUNC_6(VAR_1))
  return 0;

 FUNC_7(VAR_1);

 if (VAR_1->compliance.test_type == VAR_0) {
  FUNC_0("Link Training Compliance Test requested\n");

  FUNC_3(&VAR_2->drm);
 }

 return 1;
}
