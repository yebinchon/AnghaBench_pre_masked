
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_9(struct intel_dp *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_5(VAR_0);

 if (!FUNC_8(VAR_0))
  return;

 if (!FUNC_6(VAR_0) && !FUNC_7(VAR_0)) {
  FUNC_2(1, "eDP powered off while attempting aux channel communication.\n");
  FUNC_0("Status 0x%08x Control 0x%08x\n",
         FUNC_1(FUNC_4(VAR_0)),
         FUNC_1(FUNC_3(VAR_0)));
 }
}
