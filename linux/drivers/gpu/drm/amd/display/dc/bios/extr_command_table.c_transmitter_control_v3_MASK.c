
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
typedef void* uint16_t ;
struct command_table_helper {scalar_t__ (* transmitter_bp_to_atom ) (int const) ;int (* clock_source_id_to_atom ) (int ,scalar_t__*) ;} ;
struct TYPE_10__ {scalar_t__ id; } ;
struct bp_transmitter_control {int const transmitter; int action; int pixel_clock; scalar_t__ engine_id; scalar_t__ lanes_number; int coherent; int multi_path; scalar_t__ lane_settings; scalar_t__ lane_select; TYPE_5__ connector_obj_id; int pll_id; } ;
struct bios_parser {struct command_table_helper* cmd_helper; } ;
typedef int params ;
typedef enum connector_id { ____Placeholder_connector_id } connector_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_8__ {int fDualLinkConnector; int ucLinkSel; int ucEncoderSel; void* ucRefClkSource; void* ucTransmitterSel; int fCoherentMode; } ;
struct TYPE_7__ {void* ucLaneSet; void* ucLaneSel; } ;
struct TYPE_9__ {void* ucAction; TYPE_2__ acConfig; void* ucLaneNum; void* usPixelClock; TYPE_1__ asMode; void* usInitInfo; } ;
typedef TYPE_3__ DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_5__) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int const) ;

__attribute__((used)) static enum bp_result FUNC_6(
 struct bios_parser *VAR_8,
 struct bp_transmitter_control *VAR_9)
{
 enum bp_result VAR_10 = VAR_1;
 DIG_TRANSMITTER_CONTROL_PARAMETERS_V3 VAR_11;
 uint32_t VAR_12;
 enum connector_id VAR_13 =
   FUNC_2(VAR_9->connector_obj_id);
 const struct command_table_helper *VAR_14 = VAR_8->cmd_helper;
 bool VAR_15 = (VAR_4 == VAR_13)
     || (VAR_3 == VAR_13);

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));

 switch (VAR_9->transmitter) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 134:
  break;
 default:
  return VAR_0;
 }

 if (!VAR_14->clock_source_id_to_atom(VAR_9->pll_id, &VAR_12))
  return VAR_0;


 switch (VAR_9->action) {
 case 136:
  if (VAR_15) {






   VAR_11.acConfig.fDualLinkConnector = 1;
  }


  VAR_11.usInitInfo =
    FUNC_1((uint8_t)(VAR_9->connector_obj_id.id));
  break;
 case 135:

  VAR_11.asMode.ucLaneSel = (uint8_t)VAR_9->lane_select;
  VAR_11.asMode.ucLaneSet = (uint8_t)VAR_9->lane_settings;
  break;
 default:
  if (VAR_15 && VAR_9->multi_path)






   VAR_11.acConfig.fDualLinkConnector = 1;


  if (VAR_6 < VAR_9->lanes_number) {






   VAR_11.acConfig.fDualLinkConnector = 1;




   VAR_11.usPixelClock =
     FUNC_1((uint16_t)(VAR_9->pixel_clock / 20));
  } else {



   VAR_11.usPixelClock =
     FUNC_1((uint16_t)(VAR_9->pixel_clock / 10));
  }
  break;
 }





 VAR_11.acConfig.fCoherentMode = VAR_9->coherent;

 if ((132 == VAR_9->transmitter)
  || (130 == VAR_9->transmitter)
  || (128 == VAR_9->transmitter))






  VAR_11.acConfig.ucLinkSel = 1;

 if (VAR_5 == VAR_9->engine_id)





  VAR_11.acConfig.ucEncoderSel = 1;







 VAR_11.acConfig.ucTransmitterSel =
   (uint8_t)VAR_14->transmitter_bp_to_atom(VAR_9->transmitter);

 VAR_11.ucLaneNum = (uint8_t)VAR_9->lanes_number;

 VAR_11.acConfig.ucRefClkSource = (uint8_t)VAR_12;

 VAR_11.ucAction = (uint8_t)VAR_9->action;

 if (FUNC_0(VAR_7, VAR_11))
  VAR_10 = VAR_2;

 return VAR_10;
}
