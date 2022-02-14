
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int aud_input_chan_type; } ;
struct mtk_hdmi {int dev; TYPE_1__ aud_param; } ;
struct hdmi_audio_infoframe {int channels; int sample_size; int sample_frequency; int coding_type; } ;
typedef scalar_t__ ssize_t ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct hdmi_audio_infoframe*) ;
 scalar_t__ FUNC_2 (struct hdmi_audio_infoframe*,int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mtk_hdmi*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct mtk_hdmi *VAR_3)
{
 struct hdmi_audio_infoframe VAR_4;
 u8 VAR_5[14];
 ssize_t VAR_6;

 VAR_6 = FUNC_1(&VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "Failed to setup audio infoframe: %zd\n",
   VAR_6);
  return VAR_6;
 }

 VAR_4.coding_type = VAR_0;
 VAR_4.sample_frequency = VAR_1;
 VAR_4.sample_size = VAR_2;
 VAR_4.channels = FUNC_3(
     VAR_3->aud_param.aud_input_chan_type);

 VAR_6 = FUNC_2(&VAR_4, VAR_5, sizeof(VAR_5));
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "Failed to pack audio infoframe: %zd\n",
   VAR_6);
  return VAR_6;
 }

 FUNC_4(VAR_3, VAR_5, sizeof(VAR_5));
 return 0;
}
