
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_encoder {int port; int hpd_pin; int type; TYPE_1__ base; } ;
struct intel_dp {int reset_link_params; void* active_pipe; struct intel_connector* attached_connector; int output_reg; void* DP; void* pps_pipe; } ;
struct intel_digital_port {int max_lanes; struct intel_encoder base; struct intel_dp dp; } ;
struct TYPE_4__ {int id; } ;
struct drm_connector {int interlace_allowed; int ycbcr_420_allowed; TYPE_2__ base; scalar_t__ doublescan_allowed; } ;
struct intel_connector {struct drm_connector base; int get_hw_state; int modeset_retry_work; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (int,char*,int,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct drm_connector*) ;
 int FUNC_14 (struct drm_connector*,int *) ;
 int FUNC_15 (struct drm_device*,struct drm_connector*,int *,int) ;
 int FUNC_16 (struct intel_connector*,struct intel_encoder*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (struct intel_dp*,struct drm_connector*) ;
 int FUNC_18 (struct intel_dp*) ;
 int FUNC_19 (struct intel_dp*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_20 (struct intel_dp*) ;
 scalar_t__ FUNC_21 (struct drm_i915_private*,int) ;
 int VAR_14 ;
 int FUNC_22 (struct intel_digital_port*) ;
 int FUNC_23 (struct intel_digital_port*,int ) ;
 int FUNC_24 (struct intel_dp*) ;
 int FUNC_25 (struct intel_dp*,struct intel_connector*) ;
 int FUNC_26 (struct intel_connector*,int *) ;
 int FUNC_27 (struct drm_i915_private*,int) ;
 int FUNC_28 (struct drm_i915_private*,int) ;
 int FUNC_29 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_30 (struct drm_i915_private*,int) ;
 int FUNC_31 (int) ;
 struct drm_i915_private* FUNC_32 (struct drm_device*) ;
 void* FUNC_33 (struct intel_dp*) ;

bool
FUNC_34(struct intel_digital_port *VAR_15,
   struct intel_connector *VAR_16)
{
 struct drm_connector *VAR_17 = &VAR_16->base;
 struct intel_dp *VAR_18 = &VAR_15->dp;
 struct intel_encoder *VAR_19 = &VAR_15->base;
 struct drm_device *VAR_20 = VAR_19->base.dev;
 struct drm_i915_private *VAR_21 = FUNC_32(VAR_20);
 enum port VAR_22 = VAR_19->port;
 enum phy VAR_23 = FUNC_29(VAR_21, VAR_22);
 int VAR_24;


 FUNC_6(&VAR_16->modeset_retry_work,
    VAR_14);

 if (FUNC_11(VAR_15->max_lanes < 1,
   "Not enough lanes (%d) for DP on port %c\n",
   VAR_15->max_lanes, FUNC_31(VAR_22)))
  return 0;

 FUNC_24(VAR_18);

 VAR_18->reset_link_params = 1;
 VAR_18->pps_pipe = VAR_3;
 VAR_18->active_pipe = VAR_3;


 VAR_18->DP = FUNC_4(VAR_18->output_reg);
 VAR_18->attached_connector = VAR_16;

 if (FUNC_21(VAR_21, VAR_22)) {




  FUNC_12(FUNC_28(VAR_21, VAR_23));
  VAR_24 = VAR_1;
 } else {
  VAR_24 = VAR_0;
 }

 if (FUNC_10(VAR_21) || FUNC_8(VAR_21))
  VAR_18->active_pipe = FUNC_33(VAR_18);






 if (VAR_24 == VAR_1)
  VAR_19->type = VAR_2;


 if (FUNC_12((FUNC_10(VAR_21) || FUNC_8(VAR_21)) &&
      FUNC_20(VAR_18) &&
      VAR_22 != VAR_5 && VAR_22 != VAR_6))
  return 0;

 FUNC_0("Adding %s connector on port %c\n",
   VAR_24 == VAR_1 ? "eDP" : "DP",
   FUNC_31(VAR_22));

 FUNC_15(VAR_20, VAR_17, &VAR_11, VAR_24);
 FUNC_14(VAR_17, &VAR_12);

 if (!FUNC_3(VAR_21))
  VAR_17->interlace_allowed = 1;
 VAR_17->doublescan_allowed = 0;

 if (FUNC_7(VAR_21) >= 11)
  VAR_17->ycbcr_420_allowed = 1;

 VAR_19->hpd_pin = FUNC_27(VAR_21, VAR_22);

 FUNC_19(VAR_18);

 FUNC_16(VAR_16, VAR_19);

 if (FUNC_1(VAR_21))
  VAR_16->get_hw_state = VAR_10;
 else
  VAR_16->get_hw_state = VAR_9;


 if (FUNC_2(VAR_21) && !FUNC_20(VAR_18) &&
     (VAR_22 == VAR_5 || VAR_22 == VAR_6 ||
      VAR_22 == VAR_7 || VAR_22 == VAR_8))
  FUNC_23(VAR_15,
       VAR_16->base.base.id);

 if (!FUNC_25(VAR_18, VAR_16)) {
  FUNC_18(VAR_18);
  FUNC_22(VAR_15);
  goto fail;
 }

 FUNC_17(VAR_18, VAR_17);

 if (FUNC_30(VAR_21, VAR_22) && !FUNC_20(VAR_18)) {
  int VAR_25 = FUNC_26(VAR_16, &VAR_13);
  if (VAR_25)
   FUNC_0("HDCP init failed, skipping.\n");
 }





 if (FUNC_9(VAR_21)) {
  u32 VAR_26 = FUNC_4(VAR_4);
  FUNC_5(VAR_4, (VAR_26 & ~0xf) | 0xd);
 }

 return 1;

fail:
 FUNC_13(VAR_17);

 return 0;
}
