
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int YCrCr420_CONVERSION; int YCrCr422_CONVERSION; int YCrCr420_PASS_THROUGH; int YCrCr422_PASS_THROUGH; int FRAME_SEQ_TO_FRAME_PACK; } ;
union dwnstream_port_caps_byte3_hdmi {int raw; TYPE_4__ bits; } ;
struct TYPE_12__ {int MAX_BITS_PER_COLOR_COMPONENT; } ;
union dwnstream_port_caps_byte2 {int raw; TYPE_5__ bits; } ;
struct TYPE_10__ {int DWN_STRM_PORTX_TYPE; } ;
union dwnstream_port_caps_byte0 {TYPE_3__ bits; } ;
struct TYPE_9__ {int PORT_PRESENT; int PORT_TYPE; int DETAILED_CAPS; } ;
union dp_downstream_port_present {int byte; TYPE_2__ fields; } ;
typedef int uint8_t ;
struct dp_sink_hw_fw_revision {int ieee_fw_rev; int ieee_hw_rev; } ;
struct TYPE_13__ {int dp_hdmi_max_pixel_clk_in_khz; int extendedCapValid; int dp_hdmi_max_bpc; int is_dp_hdmi_ycbcr420_converter; int is_dp_hdmi_ycbcr422_converter; int is_dp_hdmi_ycbcr420_pass_through; int is_dp_hdmi_ycbcr422_pass_through; int is_dp_hdmi_s3d_converter; void* dongle_type; } ;
struct TYPE_8__ {scalar_t__ raw; } ;
struct TYPE_14__ {int is_branch_dev; int branch_fw_revision; int branch_hw_revision; void* dongle_type; TYPE_6__ dongle_caps; TYPE_1__ dpcd_rev; } ;
struct dc_link {TYPE_7__ dpcd_caps; int ddc; } ;
typedef int dp_hw_fw_revision ;
typedef int det_caps ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;







 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dc_link*,int ,int*,int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(
 uint8_t VAR_8, struct dc_link *VAR_9)
{
 union dp_downstream_port_present VAR_10 = { .byte = VAR_8 };


 if (!VAR_10.fields.PORT_PRESENT) {
  VAR_9->dpcd_caps.dongle_type = VAR_3;
  FUNC_1(VAR_9->ddc,
    VAR_9->dpcd_caps.dongle_type);
  VAR_9->dpcd_caps.is_branch_dev = 0;
  return;
 }


 if (VAR_10.fields.PORT_TYPE == VAR_4) {
  VAR_9->dpcd_caps.is_branch_dev = 0;
 }

 else {
  VAR_9->dpcd_caps.is_branch_dev = VAR_10.fields.PORT_PRESENT;
 }

 switch (VAR_10.fields.PORT_TYPE) {
 case 133:
  VAR_9->dpcd_caps.dongle_type = VAR_2;
  break;
 case 134:


  VAR_9->dpcd_caps.dongle_type = VAR_0;
  break;
 default:
  VAR_9->dpcd_caps.dongle_type = VAR_3;
  break;
 }

 if (VAR_9->dpcd_caps.dpcd_rev.raw >= VAR_5) {
  uint8_t VAR_11[16];
  union dwnstream_port_caps_byte0 *VAR_12 =
   (union dwnstream_port_caps_byte0 *)VAR_11;
  FUNC_0(VAR_9, VAR_7,
    VAR_11, sizeof(VAR_11));

  switch (VAR_12->bits.DWN_STRM_PORTX_TYPE) {

  case 132:
   VAR_9->dpcd_caps.dongle_type = VAR_3;
   break;
  case 128:
   VAR_9->dpcd_caps.dongle_type =
    VAR_2;
   break;
  case 130:
   VAR_9->dpcd_caps.dongle_type =
    VAR_0;
   break;
  case 129:
  case 131:

   VAR_9->dpcd_caps.dongle_type =
    VAR_1;

   VAR_9->dpcd_caps.dongle_caps.dongle_type = VAR_9->dpcd_caps.dongle_type;
   if (VAR_10.fields.DETAILED_CAPS) {

    union dwnstream_port_caps_byte3_hdmi
     VAR_13 = {.raw = VAR_11[3] };
    union dwnstream_port_caps_byte2
     VAR_14 = {.raw = VAR_11[2] };
    VAR_9->dpcd_caps.dongle_caps.dp_hdmi_max_pixel_clk_in_khz =
     VAR_11[1] * 2500;

    VAR_9->dpcd_caps.dongle_caps.is_dp_hdmi_s3d_converter =
     VAR_13.bits.FRAME_SEQ_TO_FRAME_PACK;

    if (VAR_12->bits.DWN_STRM_PORTX_TYPE
      == 129) {
     VAR_9->dpcd_caps.dongle_caps.is_dp_hdmi_ycbcr422_pass_through =
       VAR_13.bits.YCrCr422_PASS_THROUGH;
     VAR_9->dpcd_caps.dongle_caps.is_dp_hdmi_ycbcr420_pass_through =
       VAR_13.bits.YCrCr420_PASS_THROUGH;
     VAR_9->dpcd_caps.dongle_caps.is_dp_hdmi_ycbcr422_converter =
       VAR_13.bits.YCrCr422_CONVERSION;
     VAR_9->dpcd_caps.dongle_caps.is_dp_hdmi_ycbcr420_converter =
       VAR_13.bits.YCrCr420_CONVERSION;
    }

    VAR_9->dpcd_caps.dongle_caps.dp_hdmi_max_bpc =
     FUNC_3(
      VAR_14.bits.MAX_BITS_PER_COLOR_COMPONENT);

    if (VAR_9->dpcd_caps.dongle_caps.dp_hdmi_max_pixel_clk_in_khz != 0)
     VAR_9->dpcd_caps.dongle_caps.extendedCapValid = 1;
   }

   break;
  }
 }

 FUNC_1(VAR_9->ddc, VAR_9->dpcd_caps.dongle_type);

 {
  struct dp_sink_hw_fw_revision VAR_15;

  FUNC_0(
   VAR_9,
   VAR_6,
   (uint8_t *)&VAR_15,
   sizeof(VAR_15));

  VAR_9->dpcd_caps.branch_hw_revision =
   VAR_15.ieee_hw_rev;

  FUNC_2(
   VAR_9->dpcd_caps.branch_fw_revision,
   VAR_15.ieee_fw_rev,
   sizeof(VAR_15.ieee_fw_rev));
 }
}
