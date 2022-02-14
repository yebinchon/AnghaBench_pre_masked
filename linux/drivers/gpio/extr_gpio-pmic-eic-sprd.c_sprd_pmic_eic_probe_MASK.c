
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct gpio_irq_chip {int threaded; TYPE_1__* chip; } ;
struct TYPE_10__ {int base; struct gpio_irq_chip irq; int get; int set; int set_config; int free; int request; int direction_input; int of_node; TYPE_2__* parent; int ngpio; void* label; } ;
struct TYPE_8__ {int flags; int irq_bus_sync_unlock; int irq_bus_lock; int irq_set_type; int irq_unmask; int irq_mask; void* name; } ;
struct sprd_pmic_eic {int irq; TYPE_5__ chip; TYPE_1__ intc; int offset; int map; int buslock; } ;
struct TYPE_9__ {int of_node; int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,struct sprd_pmic_eic*) ;
 struct sprd_pmic_eic* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,int,int *,int ,int,void*,struct sprd_pmic_eic*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct sprd_pmic_eic*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_19)
{
 struct gpio_irq_chip *VAR_20;
 struct sprd_pmic_eic *VAR_21;
 int VAR_22;

 VAR_21 = FUNC_4(&VAR_19->dev, sizeof(*VAR_21), VAR_2);
 if (!VAR_21)
  return -VAR_1;

 FUNC_6(&VAR_21->buslock);

 VAR_21->irq = FUNC_8(VAR_19, 0);
 if (VAR_21->irq < 0)
  return VAR_21->irq;

 VAR_21->map = FUNC_1(VAR_19->dev.parent, ((void*)0));
 if (!VAR_21->map)
  return -VAR_0;

 VAR_22 = FUNC_7(VAR_19->dev.of_node, "reg", &VAR_21->offset);
 if (VAR_22) {
  FUNC_0(&VAR_19->dev, "Failed to get PMIC EIC base address.\n");
  return VAR_22;
 }

 VAR_22 = FUNC_5(&VAR_19->dev, VAR_21->irq, ((void*)0),
     VAR_12,
     VAR_5 | VAR_4,
     FUNC_2(&VAR_19->dev), VAR_21);
 if (VAR_22) {
  FUNC_0(&VAR_19->dev, "Failed to request PMIC EIC IRQ.\n");
  return VAR_22;
 }

 VAR_21->chip.label = FUNC_2(&VAR_19->dev);
 VAR_21->chip.ngpio = VAR_6;
 VAR_21->chip.base = -1;
 VAR_21->chip.parent = &VAR_19->dev;
 VAR_21->chip.of_node = VAR_19->dev.of_node;
 VAR_21->chip.direction_input = VAR_9;
 VAR_21->chip.request = VAR_16;
 VAR_21->chip.free = VAR_10;
 VAR_21->chip.set_config = VAR_18;
 VAR_21->chip.set = VAR_17;
 VAR_21->chip.get = VAR_11;

 VAR_21->intc.name = FUNC_2(&VAR_19->dev);
 VAR_21->intc.irq_mask = VAR_13;
 VAR_21->intc.irq_unmask = VAR_15;
 VAR_21->intc.irq_set_type = VAR_14;
 VAR_21->intc.irq_bus_lock = VAR_7;
 VAR_21->intc.irq_bus_sync_unlock = VAR_8;
 VAR_21->intc.flags = VAR_3;

 VAR_20 = &VAR_21->chip.irq;
 VAR_20->chip = &VAR_21->intc;
 VAR_20->threaded = 1;

 VAR_22 = FUNC_3(&VAR_19->dev, &VAR_21->chip, VAR_21);
 if (VAR_22 < 0) {
  FUNC_0(&VAR_19->dev, "Could not register gpiochip %d.\n", VAR_22);
  return VAR_22;
 }

 FUNC_9(VAR_19, VAR_21);
 return 0;
}
