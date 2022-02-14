
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
struct command_table_helper {int (* dig_encoder_sel_to_atom ) (int ) ;int (* hpd_sel_to_atom ) (int ) ;int (* signal_type_to_atom_dig_mode ) (int ) ;int (* phy_id_to_atom ) (int ) ;} ;
struct TYPE_5__ {scalar_t__ id; } ;
struct bp_transmitter_control {scalar_t__ action; int pixel_clock; int color_depth; int signal; TYPE_1__ connector_obj_id; int engine_id; int hpd_sel; scalar_t__ lanes_number; scalar_t__ lane_settings; int transmitter; } ;
struct bios_parser {struct command_table_helper* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_6__ {int ulSymClock; void* ucConnObjId; int ucDigEncoderSel; int ucHPDSel; void* ucLaneNum; int ucDigMode; void* ucDPLaneSet; void* ucAction; int ucPhyId; } ;
typedef TYPE_2__ DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_6 ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int ,TYPE_2__) ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static enum bp_result FUNC_8(
 struct bios_parser *VAR_4,
 struct bp_transmitter_control *VAR_5)
{
 enum bp_result VAR_6 = VAR_0;
 const struct command_table_helper *VAR_7 = VAR_4->cmd_helper;
 DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_6 VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ucPhyId = VAR_7->phy_id_to_atom(VAR_5->transmitter);
 VAR_8.ucAction = (uint8_t)VAR_5->action;

 if (VAR_5->action == VAR_2)
  VAR_8.ucDPLaneSet = (uint8_t)VAR_5->lane_settings;
 else
  VAR_8.ucDigMode = VAR_7->signal_type_to_atom_dig_mode(VAR_5->signal);

 VAR_8.ucLaneNum = (uint8_t)VAR_5->lanes_number;
 VAR_8.ucHPDSel = VAR_7->hpd_sel_to_atom(VAR_5->hpd_sel);
 VAR_8.ucDigEncoderSel = VAR_7->dig_encoder_sel_to_atom(VAR_5->engine_id);
 VAR_8.ucConnObjId = (uint8_t)VAR_5->connector_obj_id.id;
 VAR_8.ulSymClock = VAR_5->pixel_clock/10;
 switch (VAR_5->signal) {
 case 128:
  switch (VAR_5->color_depth) {
  case 131:
   VAR_8.ulSymClock =
    FUNC_1((FUNC_2(VAR_8.ulSymClock) * 30) / 24);
   break;
  case 130:
   VAR_8.ulSymClock =
    FUNC_1((FUNC_2(VAR_8.ulSymClock) * 36) / 24);
   break;
  case 129:
   VAR_8.ulSymClock =
    FUNC_1((FUNC_2(VAR_8.ulSymClock) * 48) / 24);
   break;
  default:
   break;
  }
  break;
  default:
   break;
 }

 if (FUNC_0(VAR_3, VAR_8))
  VAR_6 = VAR_1;
 return VAR_6;
}
