
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ RRC_FRC; scalar_t__ RC_RLC_FLC; scalar_t__ RL_RC; scalar_t__ RR; int FC; int LFE; int FR; int FL; } ;
union audio_cea_channels {TYPE_1__ channels; int member_0; } ;
struct audio_speaker_flags {scalar_t__ RLC_RRC; scalar_t__ FLC_FRC; scalar_t__ RC; scalar_t__ RL_RR; int FC; int LFE; int FL_FR; } ;



__attribute__((used)) static union audio_cea_channels FUNC_0(
 struct audio_speaker_flags VAR_0)
{
 union audio_cea_channels VAR_1 = {0};


 VAR_1.channels.FL = VAR_0.FL_FR;
 VAR_1.channels.FR = VAR_0.FL_FR;
 VAR_1.channels.LFE = VAR_0.LFE;
 VAR_1.channels.FC = VAR_0.FC;




 if (VAR_0.RL_RR) {
  VAR_1.channels.RL_RC = VAR_0.RL_RR;
  VAR_1.channels.RR = VAR_0.RL_RR;
  VAR_1.channels.RC_RLC_FLC = VAR_0.RC;
 } else {
  VAR_1.channels.RL_RC = VAR_0.RC;
 }


 if (VAR_0.FLC_FRC) {
  VAR_1.channels.RC_RLC_FLC = VAR_0.FLC_FRC;
  VAR_1.channels.RRC_FRC = VAR_0.FLC_FRC;
 } else {
  VAR_1.channels.RC_RLC_FLC = VAR_0.RLC_RRC;
  VAR_1.channels.RRC_FRC = VAR_0.RLC_RRC;
 }

 return VAR_1;
}
