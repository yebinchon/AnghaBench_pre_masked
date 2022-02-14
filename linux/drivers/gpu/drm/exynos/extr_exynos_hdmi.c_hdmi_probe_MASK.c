
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct hdmi_audio_infoframe {int channels; int sample_frequency; int sample_size; int coding_type; } ;
struct TYPE_5__ {int pdev; struct hdmi_audio_infoframe infoframe; } ;
struct hdmi_context {TYPE_3__* ddc_adpt; scalar_t__ regs_hdmiphy; TYPE_2__* hdmiphy_port; int * notifier; TYPE_1__ audio; void* sysreg; TYPE_4__* drv_data; void* pmureg; int irq; int hotplug_work; void* regs; int mutex; struct device* dev; } ;
struct TYPE_8__ {scalar_t__ has_sysreg; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int * FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,int *) ;
 void* FUNC_7 (struct device*,struct resource*) ;
 struct hdmi_context* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,int ,int *,int ,int,char*,struct hdmi_context*) ;
 int FUNC_10 (struct hdmi_audio_infoframe*) ;
 int VAR_10 ;
 int FUNC_11 (struct hdmi_context*) ;
 int FUNC_12 (struct hdmi_context*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct hdmi_context*) ;
 int FUNC_14 (struct hdmi_context*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int *) ;
 TYPE_4__* FUNC_17 (struct device*) ;
 int FUNC_18 (int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct hdmi_context*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (int *) ;
 void* FUNC_24 (int ,char*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_13)
{
 struct hdmi_audio_infoframe *VAR_14;
 struct device *VAR_15 = &VAR_13->dev;
 struct hdmi_context *VAR_16;
 struct resource *VAR_17;
 int VAR_18;

 VAR_16 = FUNC_8(VAR_15, sizeof(struct hdmi_context), VAR_2);
 if (!VAR_16)
  return -VAR_0;

 VAR_16->drv_data = FUNC_17(VAR_15);

 FUNC_20(VAR_13, VAR_16);

 VAR_16->dev = VAR_15;

 FUNC_16(&VAR_16->mutex);

 VAR_18 = FUNC_14(VAR_16);
 if (VAR_18) {
  if (VAR_18 != -VAR_1)
   FUNC_0(VAR_15, "hdmi_resources_init failed\n");
  return VAR_18;
 }

 VAR_17 = FUNC_19(VAR_13, VAR_6, 0);
 VAR_16->regs = FUNC_7(VAR_15, VAR_17);
 if (FUNC_2(VAR_16->regs)) {
  VAR_18 = FUNC_3(VAR_16->regs);
  return VAR_18;
 }

 VAR_18 = FUNC_11(VAR_16);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_12(VAR_16);
 if (VAR_18)
  goto err_ddc;

 FUNC_1(&VAR_16->hotplug_work, VAR_11);

 VAR_18 = FUNC_9(VAR_15, VAR_16->irq, ((void*)0),
   VAR_12, VAR_9 |
   VAR_8 | VAR_7,
   "hdmi", VAR_16);
 if (VAR_18) {
  FUNC_0(VAR_15, "failed to register hdmi interrupt\n");
  goto err_hdmiphy;
 }

 VAR_16->pmureg = FUNC_24(VAR_15->of_node,
   "samsung,syscon-phandle");
 if (FUNC_2(VAR_16->pmureg)) {
  FUNC_0(VAR_15, "syscon regmap lookup failed.\n");
  VAR_18 = -VAR_1;
  goto err_hdmiphy;
 }

 if (VAR_16->drv_data->has_sysreg) {
  VAR_16->sysreg = FUNC_24(VAR_15->of_node,
    "samsung,sysreg-phandle");
  if (FUNC_2(VAR_16->sysreg)) {
   FUNC_0(VAR_15, "sysreg regmap lookup failed.\n");
   VAR_18 = -VAR_1;
   goto err_hdmiphy;
  }
 }

 VAR_16->notifier = FUNC_4(&VAR_13->dev);
 if (VAR_16->notifier == ((void*)0)) {
  VAR_18 = -VAR_0;
  goto err_hdmiphy;
 }

 FUNC_22(VAR_15);

 VAR_14 = &VAR_16->audio.infoframe;
 FUNC_10(VAR_14);
 VAR_14->coding_type = VAR_3;
 VAR_14->sample_size = VAR_5;
 VAR_14->sample_frequency = VAR_4;
 VAR_14->channels = 2;

 VAR_18 = FUNC_13(VAR_16);
 if (VAR_18)
  goto err_notifier_put;

 VAR_18 = FUNC_6(&VAR_13->dev, &VAR_10);
 if (VAR_18)
  goto err_unregister_audio;

 return VAR_18;

err_unregister_audio:
 FUNC_18(VAR_16->audio.pdev);

err_notifier_put:
 FUNC_5(VAR_16->notifier);
 FUNC_21(VAR_15);

err_hdmiphy:
 if (VAR_16->hdmiphy_port)
  FUNC_23(&VAR_16->hdmiphy_port->dev);
 if (VAR_16->regs_hdmiphy)
  FUNC_15(VAR_16->regs_hdmiphy);
err_ddc:
 FUNC_23(&VAR_16->ddc_adpt->dev);

 return VAR_18;
}
