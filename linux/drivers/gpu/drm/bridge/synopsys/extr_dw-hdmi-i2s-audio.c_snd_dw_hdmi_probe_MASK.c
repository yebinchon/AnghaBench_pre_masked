
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device_info {int size_data; int dma_mask; struct hdmi_codec_pdata* data; int name; int id; int parent; } ;
struct TYPE_2__ {int parent; struct dw_hdmi_i2s_audio_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hdmi_codec_pdata {int i2s; int max_i2s_channels; struct dw_hdmi_i2s_audio_data* data; int * ops; } ;
struct dw_hdmi_i2s_audio_data {int dummy; } ;
typedef int pdevinfo ;
typedef int pdata ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (TYPE_1__*,struct platform_device*) ;
 int VAR_2 ;
 int FUNC_4 (struct platform_device_info*,int ,int) ;
 struct platform_device* FUNC_5 (struct platform_device_info*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct dw_hdmi_i2s_audio_data *VAR_4 = VAR_3->dev.platform_data;
 struct platform_device_info VAR_5;
 struct hdmi_codec_pdata VAR_6;
 struct platform_device *VAR_7;

 VAR_6.ops = &VAR_2;
 VAR_6.i2s = 1;
 VAR_6.max_i2s_channels = 8;
 VAR_6.data = VAR_4;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.parent = VAR_3->dev.parent;
 VAR_5.id = VAR_1;
 VAR_5.name = VAR_0;
 VAR_5.data = &VAR_6;
 VAR_5.size_data = sizeof(VAR_6);
 VAR_5.dma_mask = FUNC_0(32);

 VAR_7 = FUNC_5(&VAR_5);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_3(&VAR_3->dev, VAR_7);

 return 0;
}
