
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int polled; } ;
struct tegra_output {int hpd_irq; int cec; TYPE_2__* dev; TYPE_1__ connector; int * hpd_gpio; scalar_t__ of_node; int ddc; int edid; int * panel; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int,...) ;
 int * FUNC_4 (TYPE_2__*,scalar_t__,char*,int ,int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int * FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (scalar_t__,char*,int*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (scalar_t__,char*,int ) ;
 int FUNC_12 (int,int *,int ,unsigned long,char*,struct tegra_output*) ;

int FUNC_13(struct tegra_output *VAR_9)
{
 struct device_node *VAR_10, *VAR_11;
 unsigned long VAR_12;
 int VAR_13, VAR_14;

 if (!VAR_9->of_node)
  VAR_9->of_node = VAR_9->dev->of_node;

 VAR_11 = FUNC_11(VAR_9->of_node, "nvidia,panel", 0);
 if (VAR_11) {
  VAR_9->panel = FUNC_7(VAR_11);
  if (FUNC_0(VAR_9->panel))
   return FUNC_1(VAR_9->panel);

  FUNC_10(VAR_11);
 }

 VAR_9->edid = FUNC_9(VAR_9->of_node, "nvidia,edid", &VAR_14);

 VAR_10 = FUNC_11(VAR_9->of_node, "nvidia,ddc-i2c-bus", 0);
 if (VAR_10) {
  VAR_9->ddc = FUNC_8(VAR_10);
  if (!VAR_9->ddc) {
   VAR_13 = -VAR_3;
   FUNC_10(VAR_10);
   return VAR_13;
  }

  FUNC_10(VAR_10);
 }

 VAR_9->hpd_gpio = FUNC_4(VAR_9->dev,
             VAR_9->of_node,
             "nvidia,hpd-gpio", 0,
             VAR_4,
             "HDMI hotplug detect");
 if (FUNC_0(VAR_9->hpd_gpio)) {
  if (FUNC_1(VAR_9->hpd_gpio) != -VAR_1)
   return FUNC_1(VAR_9->hpd_gpio);

  VAR_9->hpd_gpio = ((void*)0);
 }

 if (VAR_9->hpd_gpio) {
  VAR_13 = FUNC_6(VAR_9->hpd_gpio);
  if (VAR_13 < 0) {
   FUNC_3(VAR_9->dev, "gpiod_to_irq(): %d\n", VAR_13);
   return VAR_13;
  }

  VAR_9->hpd_irq = VAR_13;

  VAR_12 = VAR_7 | VAR_6 |
   VAR_5;

  VAR_13 = FUNC_12(VAR_9->hpd_irq, ((void*)0), VAR_8,
        VAR_12, "hpd", VAR_9);
  if (VAR_13 < 0) {
   FUNC_3(VAR_9->dev, "failed to request IRQ#%u: %d\n",
    VAR_9->hpd_irq, VAR_13);
   return VAR_13;
  }

  VAR_9->connector.polled = VAR_0;






  FUNC_5(VAR_9->hpd_irq);
 }

 VAR_9->cec = FUNC_2(VAR_9->dev);
 if (!VAR_9->cec)
  return -VAR_2;

 return 0;
}
