
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_hdmi {int cec_notifier; struct intel_connector* attached_connector; int ddc_bus; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_encoder {int port; int hpd_pin; TYPE_1__ base; } ;
struct intel_digital_port {int max_lanes; struct intel_encoder base; struct intel_hdmi hdmi; } ;
struct drm_connector {int interlace_allowed; int stereo_allowed; int ycbcr_420_allowed; scalar_t__ doublescan_allowed; } ;
struct intel_connector {int get_hw_state; struct drm_connector base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dev; } ;
typedef enum port { ____Placeholder_port } port ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int,char*,int,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct drm_connector*,int *) ;
 int FUNC_11 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_12 (struct intel_connector*,struct intel_encoder*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (struct intel_connector*,int *) ;
 int FUNC_14 (struct intel_hdmi*,struct drm_connector*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_15 (struct drm_i915_private*,int) ;
 int VAR_7 ;
 int FUNC_16 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_17 (struct drm_i915_private*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int) ;
 struct drm_i915_private* FUNC_20 (struct drm_device*) ;

void FUNC_21(struct intel_digital_port *VAR_8,
          struct intel_connector *VAR_9)
{
 struct drm_connector *VAR_10 = &VAR_9->base;
 struct intel_hdmi *VAR_11 = &VAR_8->hdmi;
 struct intel_encoder *VAR_12 = &VAR_8->base;
 struct drm_device *VAR_13 = VAR_12->base.dev;
 struct drm_i915_private *VAR_14 = FUNC_20(VAR_13);
 enum port VAR_15 = VAR_12->port;

 FUNC_0("Adding HDMI connector on port %c\n",
        FUNC_19(VAR_15));

 if (FUNC_7(VAR_8->max_lanes < 4,
   "Not enough lanes (%d) for HDMI on port %c\n",
   VAR_8->max_lanes, FUNC_19(VAR_15)))
  return;

 FUNC_11(VAR_13, VAR_10, &VAR_5,
      VAR_0);
 FUNC_10(VAR_10, &VAR_6);

 VAR_10->interlace_allowed = 1;
 VAR_10->doublescan_allowed = 0;
 VAR_10->stereo_allowed = 1;

 if (FUNC_4(VAR_14) >= 10 || FUNC_6(VAR_14))
  VAR_10->ycbcr_420_allowed = 1;

 VAR_11->ddc_bus = FUNC_15(VAR_14, VAR_15);

 if (FUNC_8(VAR_15 == VAR_2))
  return;
 VAR_12->hpd_pin = FUNC_16(VAR_14, VAR_15);

 if (FUNC_1(VAR_14))
  VAR_9->get_hw_state = VAR_4;
 else
  VAR_9->get_hw_state = VAR_3;

 FUNC_14(VAR_11, VAR_10);

 FUNC_12(VAR_9, VAR_12);
 VAR_11->attached_connector = VAR_9;

 if (FUNC_17(VAR_14, VAR_15)) {
  int VAR_16 = FUNC_13(VAR_9,
       &VAR_7);
  if (VAR_16)
   FUNC_0("HDCP init failed, skipping.\n");
 }





 if (FUNC_5(VAR_14)) {
  u32 VAR_17 = FUNC_2(VAR_1);
  FUNC_3(VAR_1, (VAR_17 & ~0xf) | 0xd);
 }

 VAR_11->cec_notifier = FUNC_9(VAR_13->dev,
        FUNC_18(VAR_15));
 if (!VAR_11->cec_notifier)
  FUNC_0("CEC notifier get failed\n");
}
