
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct intel_dp {int output_reg; int DP; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_dp*,int *,int ) ;
 struct intel_digital_port* FUNC_3 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

void
FUNC_5(struct intel_dp *VAR_0,
           u8 VAR_1)
{
 struct intel_digital_port *VAR_2 = FUNC_3(VAR_0);
 struct drm_i915_private *VAR_3 =
  FUNC_4(VAR_2->base.base.dev);

 FUNC_2(VAR_0, &VAR_0->DP, VAR_1);

 FUNC_0(VAR_0->output_reg, VAR_0->DP);
 FUNC_1(VAR_0->output_reg);
}
