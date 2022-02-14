
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int name; } ;
struct hda_codec_stream {int fmt; int left_gain; int left_mute; int right_gain; int right_mute; int stream; int channel; TYPE_1__ actx; } ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint32_t
FUNC_2(struct hda_codec_stream *VAR_5, uint16_t VAR_6,
    uint16_t VAR_7)
{
 uint32_t VAR_8 = 0;
 uint8_t VAR_9 = 0;
 uint8_t VAR_10 = 0;

 FUNC_0("%s verb: 0x%x, payload, 0x%x\n", VAR_5->actx.name, VAR_6, VAR_7);

 switch (VAR_6) {
 case 132:
  VAR_8 = VAR_5->fmt;
  break;
 case 129:
  VAR_5->fmt = VAR_7;
  break;
 case 133:
  if (VAR_7 & VAR_0) {
   VAR_8 = VAR_5->left_gain | VAR_5->left_mute;
   FUNC_0("GET_AMP_GAIN_MUTE_LEFT: 0x%x\n", VAR_8);
  } else {
   VAR_8 = VAR_5->right_gain | VAR_5->right_mute;
   FUNC_0("GET_AMP_GAIN_MUTE_RIGHT: 0x%x\n", VAR_8);
  }
  break;
 case 130:
  VAR_9 = VAR_7 & VAR_4;
  VAR_10 = VAR_7 & VAR_3;

  if (VAR_7 & VAR_1) {
   VAR_5->left_mute = VAR_9;
   VAR_5->left_gain = VAR_10;
   FUNC_0("SET_AMP_GAIN_MUTE_LEFT: 			    mute: 0x%x gain: 0x%x\n", VAR_9, VAR_10);

  }

  if (VAR_7 & VAR_2) {
   VAR_5->right_mute = VAR_9;
   VAR_5->right_gain = VAR_10;
   FUNC_0("SET_AMP_GAIN_MUTE_RIGHT: 			    mute: 0x%x gain: 0x%x\n", VAR_9, VAR_10);

  }
  break;
 case 131:
  VAR_8 = (VAR_5->stream << 4) | VAR_5->channel;
  break;
 case 128:
  VAR_5->channel = VAR_7 & 0x0f;
  VAR_5->stream = (VAR_7 >> 4) & 0x0f;
  FUNC_0("st->channel: 0x%x st->stream: 0x%x\n",
      VAR_5->channel, VAR_5->stream);
  if (!VAR_5->stream)
   FUNC_1(&VAR_5->actx);
  break;
 default:
  FUNC_0("Unknown VERB: 0x%x\n", VAR_6);
  break;
 }

 return (VAR_8);
}
