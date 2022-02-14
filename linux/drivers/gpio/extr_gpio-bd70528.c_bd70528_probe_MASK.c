
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rohm_regmap_dev {int regmap; } ;
struct TYPE_8__ {TYPE_5__* parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_9__ {char* label; int can_sleep; int ngpio; int base; int of_node; int set; int get; int set_config; int direction_output; int direction_input; int get_direction; int owner; TYPE_5__* parent; } ;
struct TYPE_7__ {int regmap; TYPE_2__* dev; } ;
struct bd70528_gpio {TYPE_4__ gpio; TYPE_1__ chip; } ;
struct TYPE_10__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct rohm_regmap_dev* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,struct bd70528_gpio*) ;
 struct bd70528_gpio* FUNC_3 (TYPE_2__*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_10)
{
 struct bd70528_gpio *VAR_11;
 struct rohm_regmap_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(VAR_10->dev.parent);
 if (!VAR_12) {
  FUNC_0(&VAR_10->dev, "No MFD driver data\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_3(&VAR_10->dev, sizeof(*VAR_11),
         VAR_2);
 if (!VAR_11)
  return -VAR_1;
 VAR_11->chip.dev = &VAR_10->dev;
 VAR_11->gpio.parent = VAR_10->dev.parent;
 VAR_11->gpio.label = "bd70528-gpio";
 VAR_11->gpio.owner = VAR_3;
 VAR_11->gpio.get_direction = VAR_6;
 VAR_11->gpio.direction_input = VAR_4;
 VAR_11->gpio.direction_output = VAR_5;
 VAR_11->gpio.set_config = VAR_9;
 VAR_11->gpio.can_sleep = 1;
 VAR_11->gpio.get = VAR_7;
 VAR_11->gpio.set = VAR_8;
 VAR_11->gpio.ngpio = 4;
 VAR_11->gpio.base = -1;



 VAR_11->chip.regmap = VAR_12->regmap;

 VAR_13 = FUNC_2(&VAR_10->dev, &VAR_11->gpio,
         VAR_11);
 if (VAR_13)
  FUNC_0(&VAR_10->dev, "gpio_init: Failed to add bd70528-gpio\n");

 return VAR_13;
}
