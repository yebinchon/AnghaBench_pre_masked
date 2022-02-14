
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint16_t ;
struct command_table_helper {scalar_t__ (* encoder_mode_bp_to_atom ) (int ,int ) ;int (* encoder_action_to_atom ) (int ) ;scalar_t__ (* transmitter_bp_to_atom ) (scalar_t__) ;} ;
struct bp_encoder_control {scalar_t__ transmitter; int pixel_clock; scalar_t__ lanes_number; int enable_dp_audio; int signal; int action; } ;
struct TYPE_4__ {int ucLinkSel; void* ucTransmitterSel; } ;
struct TYPE_5__ {void* ucLaneNum; void* ucEncoderMode; int usPixelClock; int ucAction; TYPE_1__ acConfig; } ;
typedef TYPE_2__ DIG_ENCODER_CONTROL_PARAMETERS_V2 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

void FUNC_4(
 const struct command_table_helper *VAR_3,
 struct bp_encoder_control *VAR_4,
 DIG_ENCODER_CONTROL_PARAMETERS_V2 *VAR_5)
{






 if ((VAR_4->transmitter == VAR_0) ||
  (VAR_4->transmitter == VAR_1) ||
  (VAR_4->transmitter == VAR_2)) {




  VAR_5->acConfig.ucLinkSel = 1;
 }







 VAR_5->acConfig.ucTransmitterSel =
  (uint8_t)(VAR_3->transmitter_bp_to_atom(VAR_4->transmitter));


 VAR_5->ucAction = VAR_3->encoder_action_to_atom(VAR_4->action);
 VAR_5->usPixelClock = FUNC_0((uint16_t)(VAR_4->pixel_clock / 10));
 VAR_5->ucEncoderMode =
  (uint8_t)(VAR_3->encoder_mode_bp_to_atom(
   VAR_4->signal, VAR_4->enable_dp_audio));
 VAR_5->ucLaneNum = (uint8_t)(VAR_4->lanes_number);
}
