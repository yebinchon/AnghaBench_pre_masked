
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int pps_pipe; scalar_t__ active_pipe; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {int port; TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 struct intel_digital_port* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 struct drm_i915_private* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct intel_dp *VAR_3)
{
 struct intel_digital_port *VAR_4 = FUNC_5(VAR_3);
 struct drm_i915_private *VAR_5 = FUNC_9(VAR_4->base.base.dev);
 enum pipe VAR_6 = VAR_3->pps_pipe;
 i915_reg_t VAR_7 = FUNC_3(VAR_6);

 FUNC_4(VAR_3->active_pipe != VAR_0);

 if (FUNC_4(VAR_6 != VAR_1 && VAR_6 != VAR_2))
  return;

 FUNC_6(VAR_3);
 FUNC_0("detaching pipe %c power sequencer from port %c\n",
        FUNC_7(VAR_6), FUNC_8(VAR_4->base.port));
 FUNC_1(VAR_7, 0);
 FUNC_2(VAR_7);

 VAR_3->pps_pipe = VAR_0;
}
