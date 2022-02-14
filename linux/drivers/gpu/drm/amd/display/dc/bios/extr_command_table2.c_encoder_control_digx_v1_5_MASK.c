
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
struct dig_encoder_stream_setup_parameters_v1_5 {int pclk_10khz; int bitpercolor; void* lanenum; void* digmode; int action; void* digid; int member_0; } ;
struct bp_encoder_control {int pixel_clock; scalar_t__ signal; int color_depth; scalar_t__ lanes_number; int enable_dp_audio; int action; scalar_t__ engine_id; } ;
struct bios_parser {TYPE_1__* cmd_helper; } ;
typedef enum bp_result { ____Placeholder_bp_result } bp_result ;
struct TYPE_2__ {scalar_t__ (* encoder_mode_bp_to_atom ) (scalar_t__,int ) ;int (* encoder_action_to_atom ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (int ,struct dig_encoder_stream_setup_parameters_v1_5) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static enum bp_result FUNC_3(
 struct bios_parser *VAR_8,
 struct bp_encoder_control *VAR_9)
{
 enum bp_result VAR_10 = VAR_0;
 struct dig_encoder_stream_setup_parameters_v1_5 VAR_11 = {0};

 VAR_11.digid = (uint8_t)(VAR_9->engine_id);
 VAR_11.action = VAR_8->cmd_helper->encoder_action_to_atom(VAR_9->action);

 VAR_11.pclk_10khz = VAR_9->pixel_clock / 10;
 VAR_11.digmode =
   (uint8_t)(VAR_8->cmd_helper->encoder_mode_bp_to_atom(
     VAR_9->signal,
     VAR_9->enable_dp_audio));
 VAR_11.lanenum = (uint8_t)(VAR_9->lanes_number);

 switch (VAR_9->color_depth) {
 case 128:
  VAR_11.bitpercolor = VAR_5;
  break;
 case 131:
  VAR_11.bitpercolor = VAR_2;
  break;
 case 130:
  VAR_11.bitpercolor = VAR_3;
  break;
 case 129:
  VAR_11.bitpercolor = VAR_4;
  break;
 default:
  break;
 }

 if (VAR_9->signal == VAR_6)
  switch (VAR_9->color_depth) {
  case 131:
   VAR_11.pclk_10khz =
    (VAR_11.pclk_10khz * 30) / 24;
   break;
  case 130:
   VAR_11.pclk_10khz =
    (VAR_11.pclk_10khz * 36) / 24;
   break;
  case 129:
   VAR_11.pclk_10khz =
    (VAR_11.pclk_10khz * 48) / 24;
   break;
  default:
   break;
  }

 if (FUNC_0(VAR_7, VAR_11))
  VAR_10 = VAR_1;

 return VAR_10;
}
