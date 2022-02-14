
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_digital_port {int dummy; } ;
struct drm_i915_private {int pps_mutex; } ;


 int FUNC_0 (char*) ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_digital_port*) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct intel_dp *VAR_0)
{
 struct drm_i915_private *VAR_1 = FUNC_2(VAR_0);
 struct intel_digital_port *VAR_2 = FUNC_1(VAR_0);

 FUNC_7(&VAR_1->pps_mutex);

 if (!FUNC_3(VAR_0))
  return;







 FUNC_0("VDD left on by BIOS, adjusting state tracking\n");
 FUNC_6(VAR_1, FUNC_5(VAR_2));

 FUNC_4(VAR_0);
}
