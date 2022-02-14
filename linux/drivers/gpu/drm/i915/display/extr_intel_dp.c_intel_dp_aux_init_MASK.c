
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_encoder {int port; } ;
struct TYPE_2__ {int transfer; int name; } ;
struct intel_dp {TYPE_1__ aux; int get_aux_send_ctl; int get_aux_clock_divider; int aux_ch_data_reg; int aux_ch_ctl_reg; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 struct intel_digital_port* FUNC_4 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_9(struct intel_dp *VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_5(VAR_14);
 struct intel_digital_port *VAR_16 = FUNC_4(VAR_14);
 struct intel_encoder *VAR_17 = &VAR_16->base;

 if (FUNC_1(VAR_15) >= 9) {
  VAR_14->aux_ch_ctl_reg = VAR_10;
  VAR_14->aux_ch_data_reg = VAR_11;
 } else if (FUNC_0(VAR_15)) {
  VAR_14->aux_ch_ctl_reg = VAR_6;
  VAR_14->aux_ch_data_reg = VAR_7;
 } else {
  VAR_14->aux_ch_ctl_reg = VAR_1;
  VAR_14->aux_ch_data_reg = VAR_2;
 }

 if (FUNC_1(VAR_15) >= 9)
  VAR_14->get_aux_clock_divider = VAR_12;
 else if (FUNC_2(VAR_15) || FUNC_3(VAR_15))
  VAR_14->get_aux_clock_divider = VAR_5;
 else if (FUNC_0(VAR_15))
  VAR_14->get_aux_clock_divider = VAR_8;
 else
  VAR_14->get_aux_clock_divider = VAR_3;

 if (FUNC_1(VAR_15) >= 9)
  VAR_14->get_aux_send_ctl = VAR_13;
 else
  VAR_14->get_aux_send_ctl = VAR_4;

 FUNC_6(&VAR_14->aux);


 VAR_14->aux.name = FUNC_7(VAR_0, "DPDDC-%c",
           FUNC_8(VAR_17->port));
 VAR_14->aux.transfer = VAR_9;
}
