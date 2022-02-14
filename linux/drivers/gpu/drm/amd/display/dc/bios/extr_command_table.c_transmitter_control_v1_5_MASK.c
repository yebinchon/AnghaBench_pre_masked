
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct command_table_helper {int (* dig_encoder_sel_to_atom ) (int ) ;int (* hpd_sel_to_atom ) (int ) ;int (* clock_source_id_to_atom_phy_clk_src_id ) (int ) ;int (* signal_type_to_atom_dig_mode ) (int ) ;int (* phy_id_to_atom ) (int ) ;} ;
struct TYPE_6__ {scalar_t__ id; } ;
struct bp_transmitter_control {int pixel_clock; int color_depth; int signal; scalar_t__ lane_settings; int engine_id; int hpd_sel; int coherent; int pll_id; TYPE_1__ connector_obj_id; scalar_t__ lanes_number; scalar_t__ action; int transmitter; } ;
struct bios_parser {struct command_table_helper* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_7__ {int ucHPDSel; int ucCoherentMode; int ucPhyClkSrcId; } ;
struct TYPE_8__ {void* usSymClock; void* ucDPLaneSet; int ucDigEncoderSel; TYPE_2__ asConfig; int ucDigMode; void* ucConnObjId; void* ucLaneNum; void* ucAction; int ucPhyId; } ;
typedef TYPE_3__ DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_5 ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static enum bp_result FUNC_9(
 struct bios_parser *VAR_4,
 struct bp_transmitter_control *VAR_5)
{
 enum bp_result VAR_6 = VAR_0;
 const struct command_table_helper *VAR_7 = VAR_4->cmd_helper;
 DIG_TRANSMITTER_CONTROL_PARAMETERS_V1_5 VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.ucPhyId = VAR_7->phy_id_to_atom(VAR_5->transmitter);
 VAR_8.ucAction = (uint8_t)VAR_5->action;
 VAR_8.ucLaneNum = (uint8_t)VAR_5->lanes_number;
 VAR_8.ucConnObjId = (uint8_t)VAR_5->connector_obj_id.id;

 VAR_8.ucDigMode =
  VAR_7->signal_type_to_atom_dig_mode(VAR_5->signal);
 VAR_8.asConfig.ucPhyClkSrcId =
  VAR_7->clock_source_id_to_atom_phy_clk_src_id(VAR_5->pll_id);

 VAR_8.asConfig.ucCoherentMode = VAR_5->coherent;
 VAR_8.asConfig.ucHPDSel =
  VAR_7->hpd_sel_to_atom(VAR_5->hpd_sel);
 VAR_8.ucDigEncoderSel =
  VAR_7->dig_encoder_sel_to_atom(VAR_5->engine_id);
 VAR_8.ucDPLaneSet = (uint8_t) VAR_5->lane_settings;
 VAR_8.usSymClock = FUNC_1((uint16_t) (VAR_5->pixel_clock / 10));
 if (VAR_5->signal == VAR_2) {
  switch (VAR_5->color_depth) {
  case 130:
   VAR_8.usSymClock =
    FUNC_1((FUNC_2(VAR_8.usSymClock) * 30) / 24);
   break;
  case 129:
   VAR_8.usSymClock =
    FUNC_1((FUNC_2(VAR_8.usSymClock) * 36) / 24);
   break;
  case 128:
   VAR_8.usSymClock =
    FUNC_1((FUNC_2(VAR_8.usSymClock) * 48) / 24);
   break;
  default:
   break;
  }
 }

 if (FUNC_0(VAR_3, VAR_8))
  VAR_6 = VAR_1;

 return VAR_6;
}
