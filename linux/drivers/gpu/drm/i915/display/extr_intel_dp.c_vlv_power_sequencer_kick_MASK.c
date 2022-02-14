
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int pps_pipe; int output_reg; } ;
struct TYPE_4__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum dpio_phy { ____Placeholder_dpio_phy } dpio_phy ;
typedef enum dpio_channel { ____Placeholder_dpio_channel } dpio_channel ;
struct TYPE_6__ {int dpll; } ;
struct TYPE_5__ {int dpll; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,char*,int ,int ) ;
 TYPE_3__* VAR_6 ;
 int FUNC_12 (struct drm_i915_private*,int,int,int) ;
 struct intel_digital_port* FUNC_13 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_14 (struct intel_dp*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_17 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_18 (struct drm_i915_private*,int,int *) ;
 int FUNC_19 (int) ;

__attribute__((used)) static void
FUNC_20(struct intel_dp *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_14(VAR_8);
 struct intel_digital_port *VAR_10 = FUNC_13(VAR_8);
 enum pipe VAR_11 = VAR_8->pps_pipe;
 bool VAR_12, VAR_13 = 0;
 enum dpio_phy VAR_14 = FUNC_0(VAR_11);
 enum dpio_channel VAR_15 = FUNC_19(VAR_11);
 u32 VAR_16;

 if (FUNC_11(FUNC_7(VAR_8->output_reg) & VAR_3,
   "skipping pipe %c power sequencer kick due to port %c being active\n",
   FUNC_15(VAR_11), FUNC_16(VAR_10->base.port)))
  return;

 FUNC_5("kicking pipe %c power sequencer for port %c\n",
        FUNC_15(VAR_11), FUNC_16(VAR_10->base.port));




 VAR_16 = FUNC_7(VAR_8->output_reg) & VAR_1;
 VAR_16 |= VAR_5 | VAR_4;
 VAR_16 |= FUNC_4(1);
 VAR_16 |= VAR_2;

 if (FUNC_9(VAR_9))
  VAR_16 |= FUNC_3(VAR_11);
 else
  VAR_16 |= FUNC_2(VAR_11);

 VAR_12 = FUNC_7(FUNC_1(VAR_11)) & VAR_0;





 if (!VAR_12) {
  VAR_13 = FUNC_9(VAR_9) &&
   !FUNC_12(VAR_9, VAR_14, VAR_15, 1);

  if (FUNC_18(VAR_9, VAR_11, FUNC_9(VAR_9) ?
         &VAR_6[0].dpll : &VAR_7[0].dpll)) {
   FUNC_6("Failed to force on pll for pipe %c!\n",
      FUNC_15(VAR_11));
   return;
  }
 }







 FUNC_8(VAR_8->output_reg, VAR_16);
 FUNC_10(VAR_8->output_reg);

 FUNC_8(VAR_8->output_reg, VAR_16 | VAR_3);
 FUNC_10(VAR_8->output_reg);

 FUNC_8(VAR_8->output_reg, VAR_16 & ~VAR_3);
 FUNC_10(VAR_8->output_reg);

 if (!VAR_12) {
  FUNC_17(VAR_9, VAR_11);

  if (VAR_13)
   FUNC_12(VAR_9, VAR_14, VAR_15, 0);
 }
}
