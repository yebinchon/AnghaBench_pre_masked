
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int enabled; } ;
struct sti_hdmi {int audio_pdev; TYPE_1__ audio; } ;
struct hdmi_codec_pdata {int max_i2s_channels; int i2s; int * ops; } ;
struct device {int dummy; } ;
typedef int codec_data ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,int ,struct hdmi_codec_pdata*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
       struct sti_hdmi *VAR_4)
{
 struct hdmi_codec_pdata VAR_5 = {
  .ops = &VAR_2,
  .max_i2s_channels = 8,
  .i2s = 1,
 };

 FUNC_0("\n");

 VAR_4->audio.enabled = 0;

 VAR_4->audio_pdev = FUNC_5(
  VAR_3, VAR_0, VAR_1,
  &VAR_5, sizeof(VAR_5));

 if (FUNC_2(VAR_4->audio_pdev))
  return FUNC_3(VAR_4->audio_pdev);

 FUNC_1("%s Driver bound %s\n", VAR_0, FUNC_4(VAR_3));

 return 0;
}
