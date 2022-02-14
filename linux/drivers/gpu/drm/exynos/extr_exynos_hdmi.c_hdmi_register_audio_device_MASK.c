
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdev; } ;
struct hdmi_context {TYPE_1__ audio; int dev; } ;
struct hdmi_codec_pdata {int max_i2s_channels; int i2s; int * ops; } ;
typedef int codec_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct hdmi_codec_pdata*,int) ;

__attribute__((used)) static int FUNC_2(struct hdmi_context *VAR_3)
{
 struct hdmi_codec_pdata VAR_4 = {
  .ops = &VAR_2,
  .max_i2s_channels = 6,
  .i2s = 1,
 };

 VAR_3->audio.pdev = FUNC_1(
  VAR_3->dev, VAR_0, VAR_1,
  &VAR_4, sizeof(VAR_4));

 return FUNC_0(VAR_3->audio.pdev);
}
