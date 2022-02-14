
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct bp_encoder_control {scalar_t__ lanes_number; int pixel_clock; int enable_dp_audio; int signal; int action; scalar_t__ engine_id; } ;
struct bios_parser {TYPE_2__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_5__ {int ucDPLinkRate; void* ucDigSel; } ;
struct TYPE_7__ {void* ucLaneNum; void* ucEncoderMode; int usPixelClock; int ucAction; TYPE_1__ acConfig; int member_0; } ;
struct TYPE_6__ {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int ) ;int (* encoder_action_to_atom ) (int ) ;} ;
typedef TYPE_3__ DIG_ENCODER_CONTROL_PARAMETERS_V3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static enum bp_result FUNC_4(
 struct bios_parser *VAR_4,
 struct bp_encoder_control *VAR_5)
{
 enum bp_result VAR_6 = VAR_0;
 DIG_ENCODER_CONTROL_PARAMETERS_V3 VAR_7 = {0};

 if (VAR_3 < VAR_5->lanes_number)
  VAR_7.acConfig.ucDPLinkRate = 1;
 else
  VAR_7.acConfig.ucDPLinkRate = 0;

 VAR_7.acConfig.ucDigSel = (uint8_t)(VAR_5->engine_id);


 VAR_7.ucAction = VAR_4->cmd_helper->encoder_action_to_atom(VAR_5->action);
 VAR_7.usPixelClock = FUNC_1((uint16_t)(VAR_5->pixel_clock / 10));
 VAR_7.ucEncoderMode =
   (uint8_t)VAR_4->cmd_helper->encoder_mode_bp_to_atom(
     VAR_5->signal,
     VAR_5->enable_dp_audio);
 VAR_7.ucLaneNum = (uint8_t)(VAR_5->lanes_number);

 if (FUNC_0(VAR_2, VAR_7))
  VAR_6 = VAR_1;

 return VAR_6;
}
