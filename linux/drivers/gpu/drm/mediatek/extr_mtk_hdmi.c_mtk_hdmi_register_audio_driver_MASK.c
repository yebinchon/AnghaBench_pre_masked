
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hdmi_codec_pdata {int max_i2s_channels; int i2s; int * ops; } ;
struct device {int dummy; } ;
typedef int codec_data ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct platform_device* FUNC_2 (struct device*,int ,int ,struct hdmi_codec_pdata*,int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_3)
{
 struct hdmi_codec_pdata VAR_4 = {
  .ops = &VAR_2,
  .max_i2s_channels = 2,
  .i2s = 1,
 };
 struct platform_device *VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0,
          VAR_1, &VAR_4,
          sizeof(VAR_4));
 if (FUNC_1(VAR_5))
  return;

 FUNC_0("%s driver bound to HDMI\n", VAR_0);
}
