
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cloneable; int crtc_mask; int base; int enable; int get_hw_state; int get_config; int port; int disable; int compute_config; int post_disable; int pre_enable; int pre_pll_enable; int hotplug; int hpd_pin; int power_domain; int type; } ;
struct intel_crt {TYPE_1__ base; scalar_t__ force_hotplug_required; int adpa_reg; struct intel_connector* connector; } ;
struct drm_connector {int interlace_allowed; scalar_t__ doublescan_allowed; } ;
struct intel_connector {int polled; int get_hw_state; struct drm_connector base; } ;
struct drm_i915_private {int fdi_rx_config; int drm; } ;
typedef int i915_reg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct drm_connector*,int *) ;
 int FUNC_12 (int *,struct drm_connector*,int *,int ) ;
 int FUNC_13 (int *,int *,int *,int ,char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct intel_connector* FUNC_14 () ;
 int FUNC_15 (struct intel_connector*,TYPE_1__*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_16 (int *) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_17 (struct intel_crt*) ;
 struct intel_crt* FUNC_18 (int,int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;

void FUNC_19(struct drm_i915_private *VAR_42)
{
 struct drm_connector *VAR_43;
 struct intel_crt *VAR_44;
 struct intel_connector *VAR_45;
 i915_reg_t VAR_46;
 u32 VAR_47;

 if (FUNC_3(VAR_42))
  VAR_46 = VAR_14;
 else if (FUNC_9(VAR_42))
  VAR_46 = VAR_19;
 else
  VAR_46 = VAR_0;

 VAR_47 = FUNC_5(VAR_46);
 if ((VAR_47 & VAR_1) == 0) {
  FUNC_6(VAR_46, VAR_47 | VAR_1 |
      VAR_2 | VAR_3);
  if ((FUNC_5(VAR_46) & VAR_1) == 0)
   return;
  FUNC_6(VAR_46, VAR_47);
 }

 VAR_44 = FUNC_18(sizeof(struct intel_crt), VAR_9);
 if (!VAR_44)
  return;

 VAR_45 = FUNC_14();
 if (!VAR_45) {
  FUNC_17(VAR_44);
  return;
 }

 VAR_43 = &VAR_45->base;
 VAR_44->connector = VAR_45;
 FUNC_12(&VAR_42->drm, &VAR_45->base,
      &VAR_29, VAR_5);

 FUNC_13(&VAR_42->drm, &VAR_44->base.base, &VAR_31,
    VAR_6, "CRT");

 FUNC_15(VAR_45, &VAR_44->base);

 VAR_44->base.type = VAR_11;
 VAR_44->base.cloneable = (1 << VAR_12) | (1 << VAR_13);
 if (FUNC_8(VAR_42))
  VAR_44->base.crtc_mask = (1 << 0);
 else
  VAR_44->base.crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);

 if (FUNC_7(VAR_42, 2))
  VAR_43->interlace_allowed = 0;
 else
  VAR_43->interlace_allowed = 1;
 VAR_43->doublescan_allowed = 0;

 VAR_44->adpa_reg = VAR_46;

 VAR_44->base.power_domain = VAR_18;

 if (FUNC_4(VAR_42) &&
     !FUNC_10(VAR_38)) {
  VAR_44->base.hpd_pin = VAR_10;
  VAR_44->base.hotplug = VAR_37;
 }

 if (FUNC_1(VAR_42)) {
  VAR_44->base.port = VAR_16;
  VAR_44->base.get_config = VAR_21;
  VAR_44->base.get_hw_state = VAR_34;
  VAR_44->base.compute_config = VAR_20;
  VAR_44->base.pre_pll_enable = VAR_26;
  VAR_44->base.pre_enable = VAR_25;
  VAR_44->base.enable = VAR_23;
  VAR_44->base.disable = VAR_22;
  VAR_44->base.post_disable = VAR_24;
 } else {
  if (FUNC_3(VAR_42)) {
   VAR_44->base.compute_config = VAR_39;
   VAR_44->base.disable = VAR_40;
   VAR_44->base.post_disable = VAR_41;
  } else {
   VAR_44->base.compute_config = VAR_28;
   VAR_44->base.disable = VAR_35;
  }
  VAR_44->base.port = VAR_17;
  VAR_44->base.get_config = VAR_32;
  VAR_44->base.get_hw_state = VAR_33;
  VAR_44->base.enable = VAR_36;
 }
 VAR_45->get_hw_state = VAR_27;

 FUNC_11(VAR_43, &VAR_30);

 if (!FUNC_4(VAR_42))
  VAR_45->polled = VAR_4;




 VAR_44->force_hotplug_required = 0;






 if (FUNC_2(VAR_42)) {
  u32 VAR_48 = VAR_8 |
     VAR_7;

  VAR_42->fdi_rx_config = FUNC_5(FUNC_0(VAR_15)) & VAR_48;
 }

 FUNC_16(&VAR_44->base.base);
}
