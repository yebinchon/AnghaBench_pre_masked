
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gpio_irq_chip {int num_parents; int* parents; struct sprd_gpio* parent_handler_data; int parent_handler; int default_type; int handler; int * chip; } ;
struct TYPE_7__ {int base; struct gpio_irq_chip irq; int direction_output; int direction_input; int set; int get; int free; int request; int of_node; TYPE_1__* parent; int ngpio; int label; } ;
struct sprd_gpio {int irq; TYPE_3__ chip; int lock; int base; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,struct sprd_gpio*) ;
 struct sprd_gpio* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int VAR_4 ;
 int FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct sprd_gpio*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_13)
{
 struct gpio_irq_chip *VAR_14;
 struct sprd_gpio *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(&VAR_13->dev, sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_15->irq = FUNC_7(VAR_13, 0);
 if (VAR_15->irq < 0)
  return VAR_15->irq;

 VAR_15->base = FUNC_6(VAR_13, 0);
 if (FUNC_0(VAR_15->base))
  return FUNC_1(VAR_15->base);

 FUNC_9(&VAR_15->lock);

 VAR_15->chip.label = FUNC_3(&VAR_13->dev);
 VAR_15->chip.ngpio = VAR_3;
 VAR_15->chip.base = -1;
 VAR_15->chip.parent = &VAR_13->dev;
 VAR_15->chip.of_node = VAR_13->dev.of_node;
 VAR_15->chip.request = VAR_11;
 VAR_15->chip.free = VAR_7;
 VAR_15->chip.get = VAR_8;
 VAR_15->chip.set = VAR_12;
 VAR_15->chip.direction_input = VAR_5;
 VAR_15->chip.direction_output = VAR_6;

 VAR_14 = &VAR_15->chip.irq;
 VAR_14->chip = &VAR_10;
 VAR_14->handler = VAR_4;
 VAR_14->default_type = VAR_2;
 VAR_14->parent_handler = VAR_9;
 VAR_14->parent_handler_data = VAR_15;
 VAR_14->num_parents = 1;
 VAR_14->parents = &VAR_15->irq;

 VAR_16 = FUNC_4(&VAR_13->dev, &VAR_15->chip, VAR_15);
 if (VAR_16 < 0) {
  FUNC_2(&VAR_13->dev, "Could not register gpiochip %d\n", VAR_16);
  return VAR_16;
 }

 FUNC_8(VAR_13, VAR_15);
 return 0;
}
