
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct intel_encoder {int port; int type; TYPE_1__ base; } ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {scalar_t__ tc_mode; int saved_port_bits; int ddi_io_power_domain; } ;
struct intel_crtc_state {int lane_count; int port_clock; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct intel_encoder*,int,int ) ;
 int FUNC_5 (struct intel_encoder*,int,int ) ;
 struct intel_digital_port* FUNC_6 (TYPE_1__*) ;
 struct intel_dp* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct intel_encoder*,int ,int,int ) ;
 int FUNC_9 (struct intel_digital_port*) ;
 int FUNC_10 (struct intel_digital_port*) ;
 int FUNC_11 (struct intel_digital_port*) ;
 int FUNC_12 (struct drm_i915_private*,int,int,int ,int) ;
 int FUNC_13 (struct intel_crtc_state const*,int ) ;
 int FUNC_14 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_15 (struct intel_dp*) ;
 int FUNC_16 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_17 (struct intel_crtc_state const*) ;
 int FUNC_18 (struct intel_encoder*) ;
 int FUNC_19 (struct drm_i915_private*,int ) ;
 int FUNC_20 (struct intel_dp*,int ,int ,int) ;
 int FUNC_21 (struct intel_dp*,int ) ;
 int FUNC_22 (struct intel_dp*,struct intel_crtc_state const*,int) ;
 int FUNC_23 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_24 (struct intel_dp*) ;
 int FUNC_25 (struct intel_dp*) ;
 int FUNC_26 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_27 (struct intel_dp*) ;
 scalar_t__ FUNC_28 (struct drm_i915_private*,int) ;
 int FUNC_29 (struct drm_i915_private*,int) ;
 int FUNC_30 (struct drm_i915_private*,int) ;
 int FUNC_31 (struct intel_encoder*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_32 (int ) ;

__attribute__((used)) static void FUNC_33(struct intel_encoder *VAR_6,
        const struct intel_crtc_state *VAR_7,
        const struct drm_connector_state *VAR_8)
{
 struct intel_dp *VAR_9 = FUNC_7(&VAR_6->base);
 struct drm_i915_private *VAR_10 = FUNC_32(VAR_6->base.dev);
 enum port VAR_11 = VAR_6->port;
 enum phy VAR_12 = FUNC_30(VAR_10, VAR_11);
 struct intel_digital_port *VAR_13 = FUNC_6(&VAR_6->base);
 bool VAR_14 = FUNC_13(VAR_7, VAR_2);
 int VAR_15 = FUNC_15(VAR_9);

 FUNC_3(VAR_14 && (VAR_11 == VAR_3 || VAR_11 == VAR_4));

 FUNC_20(VAR_9, VAR_7->port_clock,
     VAR_7->lane_count, VAR_14);

 FUNC_27(VAR_9);

 FUNC_14(VAR_6, VAR_7);

 if (!FUNC_29(VAR_10, VAR_12) ||
     VAR_13->tc_mode != VAR_5)
  FUNC_19(VAR_10,
     VAR_13->ddi_io_power_domain);

 FUNC_11(VAR_13);
 FUNC_9(VAR_13);

 if (FUNC_0(VAR_10) >= 11)
  FUNC_8(VAR_6, VAR_7->port_clock,
     VAR_15, VAR_6->type);
 else if (FUNC_1(VAR_10))
  FUNC_5(VAR_6, VAR_15, VAR_6->type);
 else if (FUNC_2(VAR_10))
  FUNC_4(VAR_6, VAR_15, VAR_6->type);
 else
  FUNC_31(VAR_6, VAR_7);

 if (FUNC_28(VAR_10, VAR_12)) {
  bool VAR_16 =
   VAR_13->saved_port_bits & VAR_0;

  FUNC_12(VAR_10, VAR_12, 0,
            VAR_7->lane_count,
            VAR_16);
 }

 FUNC_18(VAR_6);
 if (!VAR_14)
  FUNC_21(VAR_9, VAR_1);
 FUNC_22(VAR_9, VAR_7,
           1);
 FUNC_23(VAR_9, VAR_7);
 FUNC_24(VAR_9);
 if (VAR_11 != VAR_3 || FUNC_0(VAR_10) >= 9)
  FUNC_25(VAR_9);

 FUNC_16(VAR_6, VAR_7);

 FUNC_10(VAR_13);

 if (!VAR_14)
  FUNC_17(VAR_7);

 FUNC_26(VAR_6, VAR_7);
}
