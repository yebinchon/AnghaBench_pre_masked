
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* uint8_t ;
typedef void* uint16_t ;
struct TYPE_12__ {scalar_t__ id; } ;
struct bp_transmitter_control {int transmitter; int action; int pixel_clock; scalar_t__ engine_id; int coherent; int lanes_number; scalar_t__ lane_settings; scalar_t__ lane_select; TYPE_6__ connector_obj_id; } ;
struct bios_parser {TYPE_3__* cmd_helper; } ;
typedef int params ;
typedef enum connector_id { ____Placeholder_connector_id } connector_id ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_9__ {int fDualLinkConnector; int ucLinkSel; int ucEncoderSel; int fDPConnector; void* ucTransmitterSel; int fCoherentMode; } ;
struct TYPE_8__ {void* ucLaneSet; void* ucLaneSel; } ;
struct TYPE_11__ {void* ucAction; TYPE_2__ acConfig; void* usPixelClock; TYPE_1__ asMode; void* usInitInfo; } ;
struct TYPE_10__ {scalar_t__ (* transmitter_bp_to_atom ) (int const) ;} ;
typedef TYPE_4__ DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (TYPE_6__) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 scalar_t__ FUNC_4 (int const) ;

__attribute__((used)) static enum bp_result FUNC_5(
 struct bios_parser *VAR_9,
 struct bp_transmitter_control *VAR_10)
{
 enum bp_result VAR_11 = VAR_1;
 DIG_TRANSMITTER_CONTROL_PARAMETERS_V2 VAR_12;
 enum connector_id VAR_13 =
  FUNC_2(VAR_10->connector_obj_id);

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 switch (VAR_10->transmitter) {
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

 switch (VAR_10->action) {
 case 136:
  if ((VAR_5 == VAR_13) ||
    (VAR_4 == VAR_13))






   VAR_12.acConfig.fDualLinkConnector = 1;


  VAR_12.usInitInfo =
    FUNC_1((uint8_t)VAR_10->connector_obj_id.id);
  break;
 case 135:

  VAR_12.asMode.ucLaneSel = (uint8_t)VAR_10->lane_select;
  VAR_12.asMode.ucLaneSet = (uint8_t)VAR_10->lane_settings;
  break;
 default:

  if (VAR_7 < VAR_10->lanes_number) {






   VAR_12.acConfig.fDualLinkConnector = 1;




   VAR_12.usPixelClock =
     FUNC_1((uint16_t)(VAR_10->pixel_clock / 20));
  } else



   VAR_12.usPixelClock =
     FUNC_1((uint16_t)(VAR_10->pixel_clock / 10));
  break;
 }





 VAR_12.acConfig.fCoherentMode = VAR_10->coherent;

 if ((132 == VAR_10->transmitter)
   || (130 == VAR_10->transmitter)
   || (128 == VAR_10->transmitter))






  VAR_12.acConfig.ucLinkSel = 1;

 if (VAR_6 == VAR_10->engine_id)





  VAR_12.acConfig.ucEncoderSel = 1;

 if (VAR_3 == VAR_13)




  VAR_12.acConfig.fDPConnector = 1;







 VAR_12.acConfig.ucTransmitterSel =
   (uint8_t)VAR_9->cmd_helper->transmitter_bp_to_atom(
     VAR_10->transmitter);

 VAR_12.ucAction = (uint8_t)VAR_10->action;

 if (FUNC_0(VAR_8, VAR_12))
  VAR_11 = VAR_2;

 return VAR_11;
}
