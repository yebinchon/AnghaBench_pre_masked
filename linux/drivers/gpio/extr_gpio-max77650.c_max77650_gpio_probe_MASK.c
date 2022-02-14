
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {struct device* parent; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int base; int ngpio; int can_sleep; int to_irq; int set_config; int get_direction; int get; int set; int direction_output; int direction_input; int owner; struct device* parent; int label; } ;
struct max77650_gpio_chip {scalar_t__ irq; TYPE_1__ gc; int map; } ;
struct i2c_client {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,TYPE_1__*,struct max77650_gpio_chip*) ;
 struct max77650_gpio_chip* FUNC_2 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct platform_device*,char*) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_11)
{
 struct max77650_gpio_chip *VAR_12;
 struct device *VAR_13, *VAR_14;
 struct i2c_client *VAR_15;

 VAR_13 = &VAR_11->dev;
 VAR_14 = VAR_13->parent;
 VAR_15 = FUNC_4(VAR_14);

 VAR_12 = FUNC_2(VAR_13, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->map = FUNC_0(VAR_14, ((void*)0));
 if (!VAR_12->map)
  return -VAR_0;

 VAR_12->irq = FUNC_3(VAR_11, "GPI");
 if (VAR_12->irq < 0)
  return VAR_12->irq;

 VAR_12->gc.base = -1;
 VAR_12->gc.ngpio = 1;
 VAR_12->gc.label = VAR_15->name;
 VAR_12->gc.parent = VAR_13;
 VAR_12->gc.owner = VAR_3;
 VAR_12->gc.can_sleep = 1;

 VAR_12->gc.direction_input = VAR_4;
 VAR_12->gc.direction_output = VAR_5;
 VAR_12->gc.set = VAR_9;
 VAR_12->gc.get = VAR_7;
 VAR_12->gc.get_direction = VAR_6;
 VAR_12->gc.set_config = VAR_8;
 VAR_12->gc.to_irq = VAR_10;

 return FUNC_1(VAR_13, &VAR_12->gc, VAR_12);
}
