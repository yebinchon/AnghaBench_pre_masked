
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {char* name; int irq_unmask; int irq_mask; int irq_ack; } ;
struct keystone_irq_device {scalar_t__ irq; int mask; int irqd; int wa_lock; TYPE_1__ chip; struct device* dev; int devctrl_offset; int devctrl_regs; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*) ;
 struct keystone_irq_device* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device_node*,int ,int *,struct keystone_irq_device*) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct keystone_irq_device*,int) ;
 int FUNC_9 (struct device_node*,char*,int,int *) ;
 scalar_t__ FUNC_10 (struct platform_device*,int ) ;
 int FUNC_11 (struct platform_device*,struct keystone_irq_device*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int,int ,int ,int ,struct keystone_irq_device*) ;
 int FUNC_14 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct device_node *VAR_12 = VAR_11->of_node;
 struct keystone_irq_device *VAR_13;
 int VAR_14;

 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_11, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_13->devctrl_regs =
  FUNC_14(VAR_12, "ti,syscon-dev");
 if (FUNC_0(VAR_13->devctrl_regs))
  return FUNC_1(VAR_13->devctrl_regs);

 VAR_14 = FUNC_9(VAR_12, "ti,syscon-dev", 1,
      &VAR_13->devctrl_offset);
 if (VAR_14) {
  FUNC_2(VAR_11, "couldn't read the devctrl_offset offset!\n");
  return VAR_14;
 }

 VAR_13->irq = FUNC_10(VAR_10, 0);
 if (VAR_13->irq < 0)
  return VAR_13->irq;

 VAR_13->dev = VAR_11;
 VAR_13->mask = ~0x0;
 VAR_13->chip.name = "keystone-irq";
 VAR_13->chip.irq_ack = VAR_5;
 VAR_13->chip.irq_mask = VAR_8;
 VAR_13->chip.irq_unmask = VAR_9;

 VAR_13->irqd = FUNC_6(VAR_12, VAR_4,
        &VAR_7, VAR_13);
 if (!VAR_13->irqd) {
  FUNC_2(VAR_11, "IRQ domain registration failed\n");
  return -VAR_1;
 }

 FUNC_12(&VAR_13->wa_lock);

 FUNC_11(VAR_10, VAR_13);

 VAR_14 = FUNC_13(VAR_13->irq, VAR_6,
     0, FUNC_4(VAR_11), VAR_13);
 if (VAR_14) {
  FUNC_7(VAR_13->irqd);
  return VAR_14;
 }


 FUNC_8(VAR_13, ~0x0);

 FUNC_3(VAR_11, "irqchip registered, nr_irqs %u\n", VAR_4);

 return 0;
}
