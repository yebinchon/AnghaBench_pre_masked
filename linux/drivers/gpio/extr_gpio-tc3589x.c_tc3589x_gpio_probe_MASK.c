
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int base; struct device_node* of_node; TYPE_4__* parent; int ngpio; } ;
struct tc3589x_gpio {TYPE_1__ chip; struct tc3589x* tc3589x; TYPE_4__* dev; int irq_lock; } ;
struct tc3589x {int num_gpio; } ;
struct TYPE_10__ {struct device_node* of_node; int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 struct tc3589x* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_1__*,struct tc3589x_gpio*) ;
 struct tc3589x_gpio* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (TYPE_4__*,int,int *,int ,int ,char*,struct tc3589x_gpio*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,int ) ;
 int FUNC_9 (struct platform_device*,struct tc3589x_gpio*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct tc3589x*,int ,int ,int ) ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_11)
{
 struct tc3589x *VAR_12 = FUNC_1(VAR_11->dev.parent);
 struct device_node *VAR_13 = VAR_11->dev.of_node;
 struct tc3589x_gpio *VAR_14;
 int VAR_15;
 int VAR_16;

 if (!VAR_13) {
  FUNC_0(&VAR_11->dev, "No Device Tree node found\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_8(VAR_11, 0);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = FUNC_3(&VAR_11->dev, sizeof(struct tc3589x_gpio),
        VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_7(&VAR_14->irq_lock);

 VAR_14->dev = &VAR_11->dev;
 VAR_14->tc3589x = VAR_12;

 VAR_14->chip = VAR_10;
 VAR_14->chip.ngpio = VAR_12->num_gpio;
 VAR_14->chip.parent = &VAR_11->dev;
 VAR_14->chip.base = -1;
 VAR_14->chip.of_node = VAR_13;


 VAR_15 = FUNC_10(VAR_12, VAR_5,
          VAR_6, 0);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_4(&VAR_11->dev,
     VAR_16, ((void*)0), VAR_8,
     VAR_3, "tc3589x-gpio",
     VAR_14);
 if (VAR_15) {
  FUNC_0(&VAR_11->dev, "unable to get irq: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_2(&VAR_11->dev, &VAR_14->chip,
         VAR_14);
 if (VAR_15) {
  FUNC_0(&VAR_11->dev, "unable to add gpiochip: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_5(&VAR_14->chip,
        &VAR_9,
        0,
        VAR_7,
        VAR_4);
 if (VAR_15) {
  FUNC_0(&VAR_11->dev,
   "could not connect irqchip to gpiochip\n");
  return VAR_15;
 }

 FUNC_6(&VAR_14->chip,
        &VAR_9,
        VAR_16);

 FUNC_9(VAR_11, VAR_14);

 return 0;
}
