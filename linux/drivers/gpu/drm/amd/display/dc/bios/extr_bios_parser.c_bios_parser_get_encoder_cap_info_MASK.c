
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct graphics_object_id {int dummy; } ;
struct dc_bios {int dummy; } ;
struct bp_encoder_cap_info {int HDMI_6GB_EN; int DP_HBR3_EN; int DP_HBR2_EN; } ;
struct bios_parser {int dummy; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_3__ {int usHDMI6GEn; int usHBR3En; int usHBR2En; } ;
typedef int ATOM_OBJECT ;
typedef TYPE_1__ ATOM_ENCODER_CAP_RECORD_V2 ;


 struct bios_parser* FUNC_0 (struct dc_bios*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (struct bios_parser*,struct graphics_object_id) ;
 TYPE_1__* FUNC_2 (struct bios_parser*,int *) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct dc_bios *VAR_3,
 struct graphics_object_id VAR_4,
 struct bp_encoder_cap_info *VAR_5)
{
 struct bios_parser *VAR_6 = FUNC_0(VAR_3);
 ATOM_OBJECT *VAR_7;
 ATOM_ENCODER_CAP_RECORD_V2 *VAR_8 = ((void*)0);

 if (!VAR_5)
  return VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_4);

 if (!VAR_7)
  return VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 if (!VAR_8)
  return VAR_1;

 VAR_5->DP_HBR2_EN = VAR_8->usHBR2En;
 VAR_5->DP_HBR3_EN = VAR_8->usHBR3En;
 VAR_5->HDMI_6GB_EN = VAR_8->usHDMI6GEn;
 return VAR_2;
}
