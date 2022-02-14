
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* label; int can_sleep; int base; TYPE_1__* parent; int ngpio; int names; int set; int get_direction; int get; int direction_output; int direction_input; int owner; } ;
struct tps68470_gpio_data {TYPE_3__ gc; int tps68470_regmap; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,struct tps68470_gpio_data*) ;
 struct tps68470_gpio_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct tps68470_gpio_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_10)
{
 struct tps68470_gpio_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(&VAR_10->dev, sizeof(*VAR_11),
         VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->tps68470_regmap = FUNC_1(VAR_10->dev.parent);
 VAR_11->gc.label = "tps68470-gpio";
 VAR_11->gc.owner = VAR_2;
 VAR_11->gc.direction_input = VAR_6;
 VAR_11->gc.direction_output = VAR_7;
 VAR_11->gc.get = VAR_4;
 VAR_11->gc.get_direction = VAR_5;
 VAR_11->gc.set = VAR_8;
 VAR_11->gc.can_sleep = 1;
 VAR_11->gc.names = VAR_9;
 VAR_11->gc.ngpio = VAR_3;
 VAR_11->gc.base = -1;
 VAR_11->gc.parent = &VAR_10->dev;

 VAR_12 = FUNC_2(&VAR_10->dev, &VAR_11->gc,
         VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(&VAR_10->dev, "Failed to register gpio_chip: %d\n", VAR_12);
  return VAR_12;
 }

 FUNC_4(VAR_10, VAR_11);

 return VAR_12;
}
