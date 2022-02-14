
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int type; int port; int crtc_mask; int cloneable; int power_domain; void* enable; int pre_enable; int post_disable; int pre_pll_enable; int post_pll_disable; int get_config; int get_hw_state; int disable; int compute_config; int hotplug; int base; } ;
struct TYPE_4__ {int output_reg; } ;
struct TYPE_3__ {int hdmi_reg; } ;
struct intel_digital_port {int max_lanes; int aux_ch; TYPE_2__ dp; TYPE_1__ hdmi; struct intel_encoder base; } ;
struct intel_connector {int dummy; } ;
struct drm_i915_private {int drm; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_6 (int *,int *,int *,int ,char*,int ) ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 struct intel_connector* FUNC_8 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct intel_digital_port*,struct intel_connector*) ;
 int VAR_19 ;
 int FUNC_10 (struct intel_digital_port*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct intel_digital_port*) ;
 struct intel_digital_port* FUNC_13 (int,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_14 (int) ;
 void* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

void FUNC_15(struct drm_i915_private *VAR_26,
       i915_reg_t VAR_27, enum port VAR_28)
{
 struct intel_digital_port *VAR_29;
 struct intel_encoder *VAR_30;
 struct intel_connector *VAR_31;

 VAR_29 = FUNC_13(sizeof(*VAR_29), VAR_1);
 if (!VAR_29)
  return;

 VAR_31 = FUNC_8();
 if (!VAR_31) {
  FUNC_12(VAR_29);
  return;
 }

 VAR_30 = &VAR_29->base;

 FUNC_6(&VAR_26->drm, &VAR_30->base,
    &VAR_15, VAR_0,
    "HDMI %c", FUNC_14(VAR_28));

 VAR_30->hotplug = VAR_18;
 VAR_30->compute_config = VAR_14;
 if (FUNC_2(VAR_26)) {
  VAR_30->disable = VAR_20;
  VAR_30->post_disable = VAR_21;
 } else {
  VAR_30->disable = VAR_11;
 }
 VAR_30->get_hw_state = VAR_17;
 VAR_30->get_config = VAR_16;
 if (FUNC_3(VAR_26)) {
  VAR_30->pre_pll_enable = VAR_9;
  VAR_30->pre_enable = VAR_8;
  VAR_30->enable = VAR_22;
  VAR_30->post_disable = VAR_6;
  VAR_30->post_pll_disable = VAR_7;
 } else if (FUNC_5(VAR_26)) {
  VAR_30->pre_pll_enable = VAR_25;
  VAR_30->pre_enable = VAR_24;
  VAR_30->enable = VAR_22;
  VAR_30->post_disable = VAR_23;
 } else {
  VAR_30->pre_enable = VAR_19;
  if (FUNC_0(VAR_26))
   VAR_30->enable = VAR_10;
  else if (FUNC_1(VAR_26))
   VAR_30->enable = VAR_13;
  else
   VAR_30->enable = VAR_12;
 }

 VAR_30->type = VAR_3;
 VAR_30->power_domain = FUNC_11(VAR_28);
 VAR_30->port = VAR_28;
 if (FUNC_3(VAR_26)) {
  if (VAR_28 == VAR_5)
   VAR_30->crtc_mask = 1 << 2;
  else
   VAR_30->crtc_mask = (1 << 0) | (1 << 1);
 } else {
  VAR_30->crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);
 }
 VAR_30->cloneable = 1 << VAR_2;





 if (FUNC_4(VAR_26))
  VAR_30->cloneable |= 1 << VAR_3;

 VAR_29->hdmi.hdmi_reg = VAR_27;
 VAR_29->dp.output_reg = VAR_4;
 VAR_29->max_lanes = 4;

 FUNC_10(VAR_29);

 VAR_29->aux_ch = FUNC_7(VAR_26, VAR_28);
 FUNC_9(VAR_29, VAR_31);
}
