
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct ddi_vbt_port_info* ddi_port_info; } ;
struct drm_i915_private {TYPE_1__ vbt; } ;
struct ddi_vbt_port_info {int supports_dvi; int supports_hdmi; int supports_dp; int supports_edp; int alternate_ddc_pin; int hdmi_level_shift; int max_tmds_clock; int dp_boost_level; int hdmi_boost_level; int dp_max_link_rate; struct child_device_config const* child; int alternate_aux_channel; int supports_tbt; int supports_typec_usb; } ;
struct child_device_config {int device_type; int hdmi_level_shifter_value; int hdmi_max_data_rate; int dp_max_link_rate; int hdmi_iboost_level; int dp_iboost_level; scalar_t__ iboost; int aux_channel; int ddc_pin; scalar_t__ lspcon; int tbt; int dp_usb_type_c; int dvo_port; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,...) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;



 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct drm_i915_private*,int) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_10,
      const struct child_device_config *VAR_11,
      u8 VAR_12)
{
 struct ddi_vbt_port_info *VAR_13;
 bool VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 enum port VAR_19;

 VAR_19 = FUNC_3(VAR_11->dvo_port);
 if (VAR_19 == VAR_9)
  return;

 VAR_13 = &VAR_10->vbt.ddi_port_info[VAR_19];

 if (VAR_13->child) {
  FUNC_0("More than one child device for port %c in VBT, using the first.\n",
         FUNC_6(VAR_19));
  return;
 }

 VAR_14 = VAR_11->device_type & VAR_4;
 VAR_16 = VAR_11->device_type & VAR_1;
 VAR_18 = VAR_11->device_type & VAR_0;
 VAR_15 = VAR_14 && (VAR_11->device_type & VAR_3) == 0;
 VAR_17 = VAR_16 && (VAR_11->device_type & VAR_2);

 if (VAR_19 == VAR_5 && VAR_14) {
  FUNC_0("VBT claims port A supports DVI%s, ignoring\n",
         VAR_15 ? "/HDMI" : "");
  VAR_14 = 0;
  VAR_15 = 0;
 }

 VAR_13->supports_dvi = VAR_14;
 VAR_13->supports_hdmi = VAR_15;
 VAR_13->supports_dp = VAR_16;
 VAR_13->supports_edp = VAR_17;

 if (VAR_12 >= 195)
  VAR_13->supports_typec_usb = VAR_11->dp_usb_type_c;

 if (VAR_12 >= 209)
  VAR_13->supports_tbt = VAR_11->tbt;

 FUNC_0("Port %c VBT info: CRT:%d DVI:%d HDMI:%d DP:%d eDP:%d LSPCON:%d USB-Type-C:%d TBT:%d\n",
        FUNC_6(VAR_19), VAR_18, VAR_14, VAR_15, VAR_16, VAR_17,
        FUNC_1(VAR_10) && VAR_11->lspcon,
        VAR_13->supports_typec_usb, VAR_13->supports_tbt);

 if (VAR_17 && VAR_14)
  FUNC_0("Internal DP port %c is TMDS compatible\n",
         FUNC_6(VAR_19));
 if (VAR_18 && VAR_19 != VAR_8)
  FUNC_0("Port %c is analog\n", FUNC_6(VAR_19));
 if (VAR_18 && (VAR_14 || VAR_16))
  FUNC_0("Analog port %c is also DP or TMDS compatible\n",
         FUNC_6(VAR_19));
 if (VAR_14 && (VAR_19 == VAR_5 || VAR_19 == VAR_8))
  FUNC_0("Port %c is TMDS compatible\n", FUNC_6(VAR_19));
 if (!VAR_14 && !VAR_16 && !VAR_18)
  FUNC_0("Port %c is not DP/TMDS/CRT compatible\n",
         FUNC_6(VAR_19));
 if (VAR_17 && (VAR_19 == VAR_6 || VAR_19 == VAR_7 || VAR_19 == VAR_8))
  FUNC_0("Port %c is internal DP\n", FUNC_6(VAR_19));

 if (VAR_14) {
  u8 VAR_20;

  VAR_20 = FUNC_5(VAR_10, VAR_11->ddc_pin);
  if (FUNC_4(VAR_10, VAR_20)) {
   VAR_13->alternate_ddc_pin = VAR_20;
   FUNC_8(VAR_10, VAR_19);
  } else {
   FUNC_0("Port %c has invalid DDC pin %d, "
          "sticking to defaults\n",
          FUNC_6(VAR_19), VAR_20);
  }
 }

 if (VAR_16) {
  VAR_13->alternate_aux_channel = VAR_11->aux_channel;

  FUNC_7(VAR_10, VAR_19);
 }

 if (VAR_12 >= 158) {

  u8 VAR_21 = VAR_11->hdmi_level_shifter_value;
  FUNC_0("VBT HDMI level shift for port %c: %d\n",
         FUNC_6(VAR_19),
         VAR_21);
  VAR_13->hdmi_level_shift = VAR_21;
 }

 if (VAR_12 >= 204) {
  int VAR_22;

  switch (VAR_11->hdmi_max_data_rate) {
  default:
   FUNC_2(VAR_11->hdmi_max_data_rate);

  case 132:
   VAR_22 = 0;
   break;
  case 133:
   VAR_22 = 297000;
   break;
  case 134:
   VAR_22 = 165000;
   break;
  }

  if (VAR_22)
   FUNC_0("VBT HDMI max TMDS clock for port %c: %d kHz\n",
          FUNC_6(VAR_19), VAR_22);
  VAR_13->max_tmds_clock = VAR_22;
 }


 if (VAR_12 >= 196 && VAR_11->iboost) {
  VAR_13->dp_boost_level = FUNC_9(VAR_11->dp_iboost_level);
  FUNC_0("VBT (e)DP boost level for port %c: %d\n",
         FUNC_6(VAR_19), VAR_13->dp_boost_level);
  VAR_13->hdmi_boost_level = FUNC_9(VAR_11->hdmi_iboost_level);
  FUNC_0("VBT HDMI boost level for port %c: %d\n",
         FUNC_6(VAR_19), VAR_13->hdmi_boost_level);
 }


 if (VAR_12 >= 216) {
  switch (VAR_11->dp_max_link_rate) {
  default:
  case 129:
   VAR_13->dp_max_link_rate = 810000;
   break;
  case 130:
   VAR_13->dp_max_link_rate = 540000;
   break;
  case 131:
   VAR_13->dp_max_link_rate = 270000;
   break;
  case 128:
   VAR_13->dp_max_link_rate = 162000;
   break;
  }
  FUNC_0("VBT DP max link rate for port %c: %d\n",
         FUNC_6(VAR_19), VAR_13->dp_max_link_rate);
 }

 VAR_13->child = VAR_11;
}
