
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_encoder {int dummy; } ;
struct intel_encoder {int crtc_mask; int port; scalar_t__ cloneable; int power_domain; int type; int post_disable; void* disable; void* enable; int pre_enable; int pre_pll_enable; int post_pll_disable; int suspend; int update_pipe; int get_config; int get_hw_state; int compute_config; int hotplug; struct drm_encoder base; } ;
struct TYPE_2__ {int output_reg; } ;
struct intel_digital_port {int max_lanes; int aux_ch; int hpd_pulse; TYPE_1__ dp; struct intel_encoder base; } ;
struct intel_connector {int max_lanes; int aux_ch; int hpd_pulse; TYPE_1__ dp; struct intel_encoder base; } ;
struct drm_i915_private {int drm; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct drm_encoder*) ;
 scalar_t__ FUNC_3 (int *,struct drm_encoder*,int *,int ,char*,int ) ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 struct intel_digital_port* FUNC_5 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (struct intel_digital_port*,struct intel_digital_port*) ;
 int FUNC_7 (struct intel_digital_port*) ;
 int VAR_20 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct intel_digital_port*) ;
 struct intel_digital_port* FUNC_10 (int,int ) ;
 int FUNC_11 (int) ;
 void* VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;

bool FUNC_12(struct drm_i915_private *VAR_26,
     i915_reg_t VAR_27,
     enum port VAR_28)
{
 struct intel_digital_port *VAR_29;
 struct intel_encoder *VAR_30;
 struct drm_encoder *VAR_31;
 struct intel_connector *VAR_32;

 VAR_29 = FUNC_10(sizeof(*VAR_29), VAR_1);
 if (!VAR_29)
  return 0;

 VAR_32 = FUNC_5();
 if (!VAR_32)
  goto err_connector_alloc;

 VAR_30 = &VAR_29->base;
 VAR_31 = &VAR_30->base;

 if (FUNC_3(&VAR_26->drm, &VAR_30->base,
        &VAR_14, VAR_0,
        "DP %c", FUNC_11(VAR_28)))
  goto err_encoder_init;

 VAR_30->hotplug = VAR_18;
 VAR_30->compute_config = VAR_13;
 VAR_30->get_hw_state = VAR_17;
 VAR_30->get_config = VAR_16;
 VAR_30->update_pipe = VAR_20;
 VAR_30->suspend = VAR_15;
 if (FUNC_0(VAR_26)) {
  VAR_30->pre_pll_enable = VAR_6;
  VAR_30->pre_enable = VAR_8;
  VAR_30->enable = VAR_23;
  VAR_30->disable = VAR_21;
  VAR_30->post_disable = VAR_7;
  VAR_30->post_pll_disable = VAR_5;
 } else if (FUNC_1(VAR_26)) {
  VAR_30->pre_pll_enable = VAR_22;
  VAR_30->pre_enable = VAR_25;
  VAR_30->enable = VAR_23;
  VAR_30->disable = VAR_21;
  VAR_30->post_disable = VAR_24;
 } else {
  VAR_30->pre_enable = VAR_12;
  VAR_30->enable = VAR_10;
  VAR_30->disable = VAR_9;
  VAR_30->post_disable = VAR_11;
 }

 VAR_29->dp.output_reg = VAR_27;
 VAR_29->max_lanes = 4;

 VAR_30->type = VAR_2;
 VAR_30->power_domain = FUNC_8(VAR_28);
 if (FUNC_0(VAR_26)) {
  if (VAR_28 == VAR_4)
   VAR_30->crtc_mask = 1 << 2;
  else
   VAR_30->crtc_mask = (1 << 0) | (1 << 1);
 } else {
  VAR_30->crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);
 }
 VAR_30->cloneable = 0;
 VAR_30->port = VAR_28;

 VAR_29->hpd_pulse = VAR_19;

 if (VAR_28 != VAR_3)
  FUNC_7(VAR_29);

 VAR_29->aux_ch = FUNC_4(VAR_26, VAR_28);
 if (!FUNC_6(VAR_29, VAR_32))
  goto err_init_connector;

 return 1;

err_init_connector:
 FUNC_2(VAR_31);
err_encoder_init:
 FUNC_9(VAR_32);
err_connector_alloc:
 FUNC_9(VAR_29);
 return 0;
}
