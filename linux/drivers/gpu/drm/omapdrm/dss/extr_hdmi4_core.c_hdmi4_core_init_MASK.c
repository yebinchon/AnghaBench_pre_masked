
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_device_attribute {struct hdmi4_features* data; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_core_data {int base; int audio_use_mclk; int cts_swmode; } ;
struct hdmi4_features {int audio_use_mclk; int cts_swmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int VAR_2 ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;
 struct soc_device_attribute* FUNC_4 (int ) ;

int FUNC_5(struct platform_device *VAR_3, struct hdmi_core_data *VAR_4)
{
 const struct hdmi4_features *VAR_5;
 struct resource *VAR_6;
 const struct soc_device_attribute *VAR_7;

 VAR_7 = FUNC_4(VAR_2);
 if (!VAR_7)
  return -VAR_0;

 VAR_5 = VAR_7->data;
 VAR_4->cts_swmode = VAR_5->cts_swmode;
 VAR_4->audio_use_mclk = VAR_5->audio_use_mclk;

 VAR_6 = FUNC_3(VAR_3, VAR_1, "core");
 VAR_4->base = FUNC_2(&VAR_3->dev, VAR_6);
 if (FUNC_0(VAR_4->base))
  return FUNC_1(VAR_4->base);

 return 0;
}
