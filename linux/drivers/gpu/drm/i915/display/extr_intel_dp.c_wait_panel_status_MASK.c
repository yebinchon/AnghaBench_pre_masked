
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int pps_mutex; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_5 (struct intel_dp*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ,int ,int ,int) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct intel_dp *VAR_0,
           u32 VAR_1,
           u32 VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_0);
 i915_reg_t VAR_4, VAR_5;

 FUNC_8(&VAR_3->pps_mutex);

 FUNC_7(VAR_0);

 VAR_4 = FUNC_4(VAR_0);
 VAR_5 = FUNC_3(VAR_0);

 FUNC_0("mask %08x value %08x status %08x control %08x\n",
   VAR_1, VAR_2,
   FUNC_2(VAR_4),
   FUNC_2(VAR_5));

 if (FUNC_6(VAR_3, VAR_4,
           VAR_1, VAR_2, 5000))
  FUNC_1("Panel status timeout: status %08x control %08x\n",
    FUNC_2(VAR_4),
    FUNC_2(VAR_5));

 FUNC_0("Wait complete\n");
}
