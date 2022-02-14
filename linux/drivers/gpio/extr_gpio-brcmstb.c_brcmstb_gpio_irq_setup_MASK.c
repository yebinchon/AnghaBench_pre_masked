
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int irq_set_wake; int irq_set_type; int irq_ack; int irq_unmask; void* irq_mask; void* irq_disable; int name; } ;
struct brcmstb_gpio_priv {scalar_t__ parent_wake_irq; int irq_domain; int parent_irq; TYPE_1__ irq_chip; int num_gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,scalar_t__,int ,int ,char*,struct brcmstb_gpio_priv*) ;
 int FUNC_6 (struct device_node*,int ,int *,struct brcmstb_gpio_priv*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,struct brcmstb_gpio_priv*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 scalar_t__ FUNC_11 (struct platform_device*,int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_11,
  struct brcmstb_gpio_priv *VAR_12)
{
 struct device *VAR_13 = &VAR_11->dev;
 struct device_node *VAR_14 = VAR_13->of_node;
 int VAR_15;

 VAR_12->irq_domain =
  FUNC_6(VAR_14, VAR_12->num_gpios,
          &VAR_4,
          VAR_12);
 if (!VAR_12->irq_domain) {
  FUNC_0(VAR_13, "Couldn't allocate IRQ domain\n");
  return -VAR_0;
 }

 if (FUNC_10(VAR_14, "wakeup-source")) {
  VAR_12->parent_wake_irq = FUNC_11(VAR_11, 1);
  if (VAR_12->parent_wake_irq < 0) {
   VAR_12->parent_wake_irq = 0;
   FUNC_2(VAR_13,
    "Couldn't get wake IRQ - GPIOs will not be able to wake from sleep");
  } else {




   FUNC_3(VAR_13, 1);
   FUNC_4(VAR_13);
   VAR_15 = FUNC_5(VAR_13, VAR_12->parent_wake_irq,
            VAR_10,
            VAR_1,
            "brcmstb-gpio-wake", VAR_12);

   if (VAR_15 < 0) {
    FUNC_0(VAR_13, "Couldn't request wake IRQ");
    goto out_free_domain;
   }
  }
 }

 VAR_12->irq_chip.name = FUNC_1(VAR_13);
 VAR_12->irq_chip.irq_disable = VAR_6;
 VAR_12->irq_chip.irq_mask = VAR_6;
 VAR_12->irq_chip.irq_unmask = VAR_9;
 VAR_12->irq_chip.irq_ack = VAR_3;
 VAR_12->irq_chip.irq_set_type = VAR_7;

 if (VAR_12->parent_wake_irq)
  VAR_12->irq_chip.irq_set_wake = VAR_8;

 FUNC_8(VAR_12->parent_irq,
      VAR_5, VAR_12);
 FUNC_9(VAR_12->parent_irq, VAR_2);

 return 0;

out_free_domain:
 FUNC_7(VAR_12->irq_domain);

 return VAR_15;
}
