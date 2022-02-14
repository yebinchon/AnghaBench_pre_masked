
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_codec_params {int channels; int sample_rate; int sample_width; } ;
struct hdmi_codec_daifmt {int fmt; } ;
struct device {int dummy; } ;
struct audio_info {int format; int channels; int sample_rate; int sample_width; } ;
struct cdn_dp_device {int lock; struct audio_info audio_info; int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct cdn_dp_device*,struct audio_info*) ;
 struct cdn_dp_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, void *VAR_5,
      struct hdmi_codec_daifmt *VAR_6,
      struct hdmi_codec_params *VAR_7)
{
 struct cdn_dp_device *VAR_8 = FUNC_2(VAR_4);
 struct audio_info VAR_9 = {
  .sample_width = VAR_7->sample_width,
  .sample_rate = VAR_7->sample_rate,
  .channels = VAR_7->channels,
 };
 int VAR_10;

 FUNC_3(&VAR_8->lock);
 if (!VAR_8->active) {
  VAR_10 = -VAR_3;
  goto out;
 }

 switch (VAR_6->fmt) {
 case 129:
  VAR_9.format = VAR_0;
  break;
 case 128:
  VAR_9.format = VAR_1;
  break;
 default:
  FUNC_0(VAR_4, "Invalid format %d\n", VAR_6->fmt);
  VAR_10 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_1(VAR_8, &VAR_9);
 if (!VAR_10)
  VAR_8->audio_info = VAR_9;

out:
 FUNC_4(&VAR_8->lock);
 return VAR_10;
}
