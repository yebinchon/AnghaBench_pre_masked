
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_codec_pdata {int i2s; int spdif; int max_i2s_channels; int * ops; } ;
struct device {int dummy; } ;
struct cdn_dp_device {int audio_pdev; } ;
typedef int codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,int ,int ,struct hdmi_codec_pdata*,int) ;

__attribute__((used)) static int FUNC_2(struct cdn_dp_device *VAR_3,
       struct device *VAR_4)
{
 struct hdmi_codec_pdata VAR_5 = {
  .i2s = 1,
  .spdif = 1,
  .ops = &VAR_2,
  .max_i2s_channels = 8,
 };

 VAR_3->audio_pdev = FUNC_1(
    VAR_4, VAR_0, VAR_1,
    &VAR_5, sizeof(VAR_5));

 return FUNC_0(VAR_3->audio_pdev);
}
