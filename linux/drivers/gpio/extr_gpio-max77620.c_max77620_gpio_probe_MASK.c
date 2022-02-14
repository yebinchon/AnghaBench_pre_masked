
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_5__* parent; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct TYPE_8__ {int can_sleep; int base; int of_node; int ngpio; int to_irq; int set_config; int set; int direction_output; int get; int direction_input; TYPE_1__* parent; int label; } ;
struct max77620_gpio {TYPE_4__ gpio_chip; TYPE_1__* dev; int rmap; } ;
struct max77620_chip {int gpio_irq_data; int rmap; } ;
struct TYPE_9__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,...) ;
 struct max77620_chip* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_4__*,struct max77620_gpio*) ;
 struct max77620_gpio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int,int ,int,int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*,struct max77620_gpio*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_12)
{
 struct max77620_chip *VAR_13 = FUNC_1(VAR_12->dev.parent);
 struct max77620_gpio *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(VAR_12, 0);
 if (VAR_15 <= 0)
  return -VAR_0;

 VAR_14 = FUNC_3(&VAR_12->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->rmap = VAR_13->rmap;
 VAR_14->dev = &VAR_12->dev;

 VAR_14->gpio_chip.label = VAR_12->name;
 VAR_14->gpio_chip.parent = &VAR_12->dev;
 VAR_14->gpio_chip.direction_input = VAR_5;
 VAR_14->gpio_chip.get = VAR_7;
 VAR_14->gpio_chip.direction_output = VAR_6;
 VAR_14->gpio_chip.set = VAR_9;
 VAR_14->gpio_chip.set_config = VAR_10;
 VAR_14->gpio_chip.to_irq = VAR_11;
 VAR_14->gpio_chip.ngpio = VAR_4;
 VAR_14->gpio_chip.can_sleep = 1;
 VAR_14->gpio_chip.base = -1;




 FUNC_6(VAR_12, VAR_14);

 VAR_16 = FUNC_2(&VAR_12->dev, &VAR_14->gpio_chip, VAR_14);
 if (VAR_16 < 0) {
  FUNC_0(&VAR_12->dev, "gpio_init: Failed to add max77620_gpio\n");
  return VAR_16;
 }

 VAR_16 = FUNC_4(&VAR_12->dev, VAR_13->rmap, VAR_15,
           VAR_3, -1,
           &VAR_8,
           &VAR_13->gpio_irq_data);
 if (VAR_16 < 0) {
  FUNC_0(&VAR_12->dev, "Failed to add gpio irq_chip %d\n", VAR_16);
  return VAR_16;
 }

 return 0;
}
