
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct intel_dp {int* train_set; int DP; int output_reg; } ;
struct TYPE_2__ {int port; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (struct intel_dp*) ;
 struct intel_digital_port* FUNC_13 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_14 (struct intel_dp*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int) ;
 int FUNC_18 (struct intel_dp*) ;

void
FUNC_19(struct intel_dp *VAR_9)
{
 struct drm_i915_private *VAR_10 = FUNC_14(VAR_9);
 struct intel_digital_port *VAR_11 = FUNC_13(VAR_9);
 enum port VAR_12 = VAR_11->base.port;
 u32 VAR_13, VAR_14 = 0;
 u8 VAR_15 = VAR_9->train_set[0];

 if (FUNC_6(VAR_10) || FUNC_3(VAR_10) >= 10) {
  VAR_13 = FUNC_10(VAR_9);
 } else if (FUNC_1(VAR_10)) {
  VAR_13 = FUNC_12(VAR_9);
  VAR_14 = VAR_0;
 } else if (FUNC_4(VAR_10)) {
  VAR_13 = FUNC_11(VAR_9);
 } else if (FUNC_8(VAR_10)) {
  VAR_13 = FUNC_18(VAR_9);
 } else if (FUNC_7(VAR_10) && VAR_12 == VAR_8) {
  VAR_13 = FUNC_16(VAR_15);
  VAR_14 = VAR_6;
 } else if (FUNC_5(VAR_10, 6) && VAR_12 == VAR_8) {
  VAR_13 = FUNC_17(VAR_15);
  VAR_14 = VAR_7;
 } else {
  VAR_13 = FUNC_15(VAR_15);
  VAR_14 = VAR_5 | VAR_1;
 }

 if (VAR_14)
  FUNC_0("Using signal levels %08x\n", VAR_13);

 FUNC_0("Using vswing level %d\n",
  VAR_15 & VAR_4);
 FUNC_0("Using pre-emphasis level %d\n",
  (VAR_15 & VAR_2) >>
   VAR_3);

 VAR_9->DP = (VAR_9->DP & ~VAR_14) | VAR_13;

 FUNC_2(VAR_9->output_reg, VAR_9->DP);
 FUNC_9(VAR_9->output_reg);
}
