
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda998x_priv {int audio_pdev; scalar_t__* audio_port_enable; } ;
struct hdmi_codec_pdata {int max_i2s_channels; int i2s; int spdif; int * ops; } ;
struct device {int dummy; } ;
typedef int codec_data ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct device*,int ,int ,struct hdmi_codec_pdata*,int) ;

__attribute__((used)) static int FUNC_2(struct tda998x_priv *VAR_5,
        struct device *VAR_6)
{
 struct hdmi_codec_pdata VAR_7 = {
  .ops = &VAR_4,
  .max_i2s_channels = 2,
 };

 if (VAR_5->audio_port_enable[VAR_0])
  VAR_7.i2s = 1;
 if (VAR_5->audio_port_enable[VAR_1])
  VAR_7.spdif = 1;

 VAR_5->audio_pdev = FUNC_1(
  VAR_6, VAR_2, VAR_3,
  &VAR_7, sizeof(VAR_7));

 return FUNC_0(VAR_5->audio_pdev);
}
