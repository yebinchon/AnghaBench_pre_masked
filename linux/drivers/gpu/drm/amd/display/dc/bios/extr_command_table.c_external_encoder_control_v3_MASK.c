
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct graphics_object_id {int enum_id; } ;
struct TYPE_7__ {int id; } ;
struct bp_external_encoder_control {int action; int pixel_clock; scalar_t__ lanes_number; int signal; scalar_t__ color_depth; int link_rate; TYPE_1__ connector_obj_id; struct graphics_object_id encoder_id; } ;
struct bios_parser {TYPE_2__* cmd_helper; } ;
typedef int params ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_10__ {int ucConfig; void* ucAction; void* ucLaneNum; void* ucEncoderMode; void* usPixelClock; void* ucBitPerColor; void* usConnectorId; } ;
struct TYPE_9__ {TYPE_4__ sExtEncoder; } ;
struct TYPE_8__ {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int) ;} ;
typedef TYPE_3__ EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 ;
typedef TYPE_4__ EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;


 scalar_t__ FUNC_1 (int ,TYPE_3__) ;



 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct graphics_object_id) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;

__attribute__((used)) static enum bp_result FUNC_7(
 struct bios_parser *VAR_5,
 struct bp_external_encoder_control *VAR_6)
{
 enum bp_result VAR_7 = VAR_1;


 EXTERNAL_ENCODER_CONTROL_PS_ALLOCATION_V3 VAR_8;
 EXTERNAL_ENCODER_CONTROL_PARAMETERS_V3 *VAR_9;
 struct graphics_object_id VAR_10;
 bool VAR_11 = 0;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 VAR_9 = &VAR_8.sExtEncoder;

 VAR_10 = VAR_6->encoder_id;


 switch (FUNC_3(VAR_10)) {
 case 132:
 case 131:
  VAR_11 = 1;
  break;

 default:
  FUNC_0();
  return VAR_0;
 }
 VAR_9->ucConfig = (uint8_t)((VAR_10.enum_id - 1) << 4);

 switch (VAR_6->action) {
 case 129:


  VAR_9->usConnectorId =
    FUNC_2((uint16_t)VAR_6->connector_obj_id.id);
  break;
 case 128:





  VAR_9->usPixelClock =
    FUNC_2((uint16_t)(VAR_6->pixel_clock / 10));


  VAR_9->ucEncoderMode =
    (uint8_t)VAR_5->cmd_helper->encoder_mode_bp_to_atom(
      VAR_6->signal, 0);

  if (VAR_11) {


   if (VAR_4 == VAR_6->link_rate)
    VAR_9->ucConfig |= 1;



   VAR_9->ucBitPerColor =
     (uint8_t)(VAR_6->color_depth);
  }


  VAR_9->ucLaneNum = (uint8_t)(VAR_6->lanes_number);
  break;
 case 130:
  VAR_9->usPixelClock =
    FUNC_2((uint16_t)(VAR_6->pixel_clock / 10));
  VAR_9->ucEncoderMode =
    (uint8_t)VAR_5->cmd_helper->encoder_mode_bp_to_atom(
      VAR_6->signal, 0);
  VAR_9->ucLaneNum = (uint8_t)VAR_6->lanes_number;
  break;
 default:
  break;
 }

 VAR_9->ucAction = (uint8_t)VAR_6->action;

 if (FUNC_1(VAR_3, VAR_8))
  VAR_7 = VAR_2;

 return VAR_7;
}
