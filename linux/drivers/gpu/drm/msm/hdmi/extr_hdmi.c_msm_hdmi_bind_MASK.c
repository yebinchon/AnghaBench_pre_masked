
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_drm_private {struct hdmi* hdmi; } ;
struct hdmi_platform_config {char* mmio_name; char* qfprom_mmio_name; TYPE_1__* gpios; } ;
struct hdmi {int * audio_pdev; } ;
struct gpio_desc {int * audio_pdev; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct device_node {int dummy; } ;
struct device {struct hdmi_platform_config* platform_data; struct device_node* of_node; } ;
struct TYPE_4__ {char* name; int value; int output; int label; } ;
struct TYPE_3__ {int value; int output; struct hdmi* gpiod; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct hdmi*) ;
 int FUNC_4 (struct hdmi*) ;
 struct drm_device* FUNC_5 (struct device*) ;
 struct hdmi* FUNC_6 (struct device*,char const*,int ) ;
 int FUNC_7 (struct hdmi*,int ) ;
 TYPE_2__* VAR_3 ;
 struct hdmi* FUNC_8 (int ) ;
 int FUNC_9 (struct hdmi*,struct device*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 scalar_t__ FUNC_11 (char const*,char*,char*) ;
 int FUNC_12 (struct device*) ;

__attribute__((used)) static int FUNC_13(struct device *VAR_4, struct device *VAR_5, void *VAR_6)
{
 struct drm_device *VAR_7 = FUNC_5(VAR_5);
 struct msm_drm_private *VAR_8 = VAR_7->dev_private;
 struct hdmi_platform_config *VAR_9;
 struct hdmi *VAR_10;
 struct device_node *VAR_11 = VAR_4->of_node;
 int VAR_12, VAR_13;

 VAR_9 = (struct hdmi_platform_config *)
   FUNC_10(VAR_4);
 if (!VAR_9) {
  FUNC_1(VAR_4, "unknown hdmi_cfg: %pOFn\n", VAR_11);
  return -VAR_0;
 }

 VAR_9->mmio_name = "core_physical";
 VAR_9->qfprom_mmio_name = "qfprom_physical";

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  const char *VAR_14 = VAR_3[VAR_12].name;
  struct gpio_desc *VAR_15;






  VAR_15 = FUNC_6(VAR_4, VAR_14, VAR_1);

  if (FUNC_3(VAR_15))
   return FUNC_4(VAR_15);
  if (!VAR_15) {

   char VAR_16[32];






   if (FUNC_11(VAR_14, "qcom,hdmi-tx-%s", VAR_16))
    VAR_15 = FUNC_6(VAR_4, VAR_16, VAR_1);
   if (FUNC_3(VAR_15))
    return FUNC_4(VAR_15);
   if (!VAR_15)
    FUNC_0("failed to get gpio: %s", VAR_14);
  }
  VAR_9->gpios[VAR_12].gpiod = VAR_15;
  if (VAR_15)
   FUNC_7(VAR_15, VAR_3[VAR_12].label);
  VAR_9->gpios[VAR_12].output = VAR_3[VAR_12].output;
  VAR_9->gpios[VAR_12].value = VAR_3[VAR_12].value;
 }

 VAR_4->platform_data = VAR_9;

 VAR_10 = FUNC_8(FUNC_12(VAR_4));
 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);
 VAR_8->hdmi = VAR_10;

 VAR_13 = FUNC_9(VAR_10, VAR_4);
 if (VAR_13) {
  FUNC_2("Failed to attach an audio codec %d\n", VAR_13);
  VAR_10->audio_pdev = ((void*)0);
 }

 return 0;
}
