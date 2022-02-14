
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int output_reg; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 struct intel_digital_port* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_dp *VAR_1, bool VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_2(VAR_1);
 struct drm_i915_private *VAR_4 = FUNC_5(VAR_3->base.base.dev);
 bool VAR_5 = FUNC_0(VAR_1->output_reg) & VAR_0;

 FUNC_1(VAR_5 != VAR_2,
   "DP port %c state assertion failure (expected %s, current %s)\n",
   FUNC_4(VAR_3->base.port),
   FUNC_3(VAR_2), FUNC_3(VAR_5));
}
