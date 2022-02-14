
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_hdmi {int mode; int aud_param; int dev; int audio_enable; } ;
struct TYPE_2__ {int sample_rate; } ;
struct hdmi_audio_param {TYPE_1__ codec_params; int aud_input_chan_type; int aud_input_type; int aud_codec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,struct hdmi_audio_param*,int) ;
 int FUNC_3 (struct mtk_hdmi*,int *) ;

__attribute__((used)) static int FUNC_4(struct mtk_hdmi *VAR_1,
        struct hdmi_audio_param *VAR_2)
{
 if (!VAR_1->audio_enable) {
  FUNC_1(VAR_1->dev, "hdmi audio is in disable state!\n");
  return -VAR_0;
 }
 FUNC_0(VAR_1->dev, "codec:%d, input:%d, channel:%d, fs:%d\n",
  VAR_2->aud_codec, VAR_2->aud_input_type,
  VAR_2->aud_input_chan_type, VAR_2->codec_params.sample_rate);
 FUNC_2(&VAR_1->aud_param, VAR_2, sizeof(*VAR_2));
 return FUNC_3(VAR_1, &VAR_1->mode);
}
