
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int connector_type; } ;
struct intel_connector {int polled; struct drm_connector base; } ;
struct intel_sdvo_connector {int output_flag; int is_hdmi; struct intel_connector base; } ;
struct drm_encoder {int encoder_type; } ;
struct TYPE_2__ {struct drm_encoder base; } ;
struct intel_sdvo {int controlled_output; int hotplug_active; TYPE_1__ base; } ;
struct intel_encoder {int hotplug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct intel_sdvo*,struct intel_sdvo_connector*) ;
 struct intel_sdvo_connector* FUNC_2 () ;
 scalar_t__ FUNC_3 (struct intel_sdvo_connector*,struct intel_sdvo*) ;
 int FUNC_4 (struct intel_encoder*) ;
 int FUNC_5 (struct intel_sdvo*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (struct intel_sdvo*,int) ;
 int FUNC_7 (struct intel_sdvo_connector*) ;
 struct intel_encoder* FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static bool
FUNC_9(struct intel_sdvo *VAR_8, int VAR_9)
{
 struct drm_encoder *VAR_10 = &VAR_8->base.base;
 struct drm_connector *VAR_11;
 struct intel_encoder *VAR_12 = FUNC_8(VAR_10);
 struct intel_connector *VAR_13;
 struct intel_sdvo_connector *VAR_14;

 FUNC_0("initialising DVI device %d\n", VAR_9);

 VAR_14 = FUNC_2();
 if (!VAR_14)
  return 0;

 if (VAR_9 == 0) {
  VAR_8->controlled_output |= VAR_5;
  VAR_14->output_flag = VAR_5;
 } else if (VAR_9 == 1) {
  VAR_8->controlled_output |= VAR_6;
  VAR_14->output_flag = VAR_6;
 }

 VAR_13 = &VAR_14->base;
 VAR_11 = &VAR_13->base;
 if (FUNC_5(VAR_8) &
  VAR_14->output_flag) {
  VAR_8->hotplug_active |= VAR_14->output_flag;




  VAR_12->hotplug = VAR_7;
  FUNC_4(VAR_12);
 } else {
  VAR_13->polled = VAR_0 | VAR_1;
 }
 VAR_10->encoder_type = VAR_4;
 VAR_11->connector_type = VAR_2;

 if (FUNC_6(VAR_8, VAR_9)) {
  VAR_11->connector_type = VAR_3;
  VAR_14->is_hdmi = 1;
 }

 if (FUNC_3(VAR_14, VAR_8) < 0) {
  FUNC_7(VAR_14);
  return 0;
 }

 if (VAR_14->is_hdmi)
  FUNC_1(VAR_8, VAR_14);

 return 1;
}
