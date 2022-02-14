
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int dummy; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 struct intel_digital_port* FUNC_6 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_7 (struct intel_dp*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*,int ,int ,int) ;

void FUNC_9(struct intel_dp *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_7(VAR_4);
 struct intel_digital_port *VAR_6 = FUNC_6(VAR_4);
 enum port VAR_7 = VAR_6->base.port;
 u32 VAR_8;

 if (!FUNC_3(VAR_5))
  return;

 VAR_8 = FUNC_4(FUNC_0(VAR_7));
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_0;
 FUNC_5(FUNC_0(VAR_7), VAR_8);
 if (VAR_7 == VAR_3)
  return;

 if (FUNC_8(VAR_5, FUNC_1(VAR_7),
      VAR_2, 1))
  FUNC_2("Timed out waiting for DP idle patterns\n");
}
