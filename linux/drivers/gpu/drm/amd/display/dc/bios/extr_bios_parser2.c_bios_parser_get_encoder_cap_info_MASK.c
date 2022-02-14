
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct graphics_object_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bp_encoder_cap_info {int DP_HBR2_CAP; int DP_HBR2_EN; int DP_HBR3_EN; int HDMI_6GB_EN; int DP_IS_USB_C; } ;
struct bios_parser {int dummy; } ;
struct atom_encoder_caps_record {int encodercaps; } ;
struct atom_display_object_path_v2 {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct atom_display_object_path_v2* FUNC_1 (struct bios_parser*,struct graphics_object_id) ;
 struct atom_encoder_caps_record* FUNC_2 (struct bios_parser*,struct atom_display_object_path_v2*) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct dc_bios *VAR_8,
 struct graphics_object_id VAR_9,
 struct bp_encoder_cap_info *VAR_10)
{
 struct bios_parser *VAR_11 = FUNC_0(VAR_8);
 struct atom_display_object_path_v2 *VAR_12;
 struct atom_encoder_caps_record *VAR_13 = ((void*)0);

 if (!VAR_10)
  return VAR_5;

 VAR_12 = FUNC_1(VAR_11, VAR_9);

 if (!VAR_12)
  return VAR_5;

 VAR_13 = FUNC_2(VAR_11, VAR_12);
 if (!VAR_13)
  return VAR_6;

 VAR_10->DP_HBR2_CAP = (VAR_13->encodercaps &
   VAR_0) ? 1 : 0;
 VAR_10->DP_HBR2_EN = (VAR_13->encodercaps &
   VAR_1) ? 1 : 0;
 VAR_10->DP_HBR3_EN = (VAR_13->encodercaps &
   VAR_2) ? 1 : 0;
 VAR_10->HDMI_6GB_EN = (VAR_13->encodercaps &
   VAR_3) ? 1 : 0;
 VAR_10->DP_IS_USB_C = (VAR_13->encodercaps &
   VAR_4) ? 1 : 0;

 return VAR_7;
}
