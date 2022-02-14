
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hdmi_infoframe {int audio; } ;
struct zx_hdmi {int dev; } ;
struct hdmi_audio_infoframe {int dummy; } ;
struct hdmi_codec_params {int sample_width; int sample_rate; struct hdmi_audio_infoframe cea; } ;
struct hdmi_codec_daifmt {int fmt; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct zx_hdmi* FUNC_1 (struct device*) ;
 int FUNC_2 (struct zx_hdmi*,int ,int) ;
 int FUNC_3 (struct zx_hdmi*,int ,int ,int ) ;
 int FUNC_4 (int *,struct hdmi_audio_infoframe*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct zx_hdmi*,union hdmi_infoframe*,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_15,
       void *VAR_16,
       struct hdmi_codec_daifmt *VAR_17,
       struct hdmi_codec_params *VAR_18)
{
 struct zx_hdmi *VAR_19 = FUNC_1(VAR_15);
 struct hdmi_audio_infoframe *VAR_20 = &VAR_18->cea;
 union hdmi_infoframe VAR_21;
 int VAR_22;


 if (VAR_17->fmt != VAR_5) {
  FUNC_0(VAR_19->dev, "invalid daifmt %d\n", VAR_17->fmt);
  return -VAR_3;
 }

 switch (VAR_18->sample_width) {
 case 16:
  FUNC_3(VAR_19, VAR_14, VAR_13,
     VAR_10);
  break;
 case 20:
  FUNC_3(VAR_19, VAR_14, VAR_13,
     VAR_11);
  break;
 case 24:
  FUNC_3(VAR_19, VAR_14, VAR_13,
     VAR_12);
  break;
 default:
  FUNC_0(VAR_19->dev, "invalid sample width %d\n",
         VAR_18->sample_width);
  return -VAR_3;
 }


 VAR_22 = FUNC_5(VAR_18->sample_rate);
 FUNC_2(VAR_19, VAR_6, VAR_22 & 0xff);
 FUNC_2(VAR_19, VAR_7, (VAR_22 >> 8) & 0xff);
 FUNC_2(VAR_19, VAR_8, (VAR_22 >> 16) & 0xf);


 FUNC_3(VAR_19, VAR_2, VAR_9, VAR_9);


 FUNC_3(VAR_19, VAR_0, VAR_1, VAR_1);

 FUNC_4(&VAR_21.audio, VAR_20, sizeof(*VAR_20));

 return FUNC_6(VAR_19, &VAR_21, VAR_4);
}
