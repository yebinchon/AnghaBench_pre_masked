
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; int can_sleep; int owner; int set_config; int set; int get; int direction_output; int direction_input; int get_direction; struct device* parent; scalar_t__ ngpio; int label; } ;
struct ltc4306 {TYPE_2__ gpiochip; int regmap; TYPE_1__* chip; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ num_gpios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,TYPE_2__*,struct ltc4306*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ltc4306 *VAR_9)
{
 struct device *VAR_10 = FUNC_2(VAR_9->regmap);

 if (!VAR_9->chip->num_gpios)
  return 0;

 VAR_9->gpiochip.label = FUNC_0(VAR_10);
 VAR_9->gpiochip.base = -1;
 VAR_9->gpiochip.ngpio = VAR_9->chip->num_gpios;
 VAR_9->gpiochip.parent = VAR_10;
 VAR_9->gpiochip.can_sleep = 1;
 VAR_9->gpiochip.get_direction = VAR_6;
 VAR_9->gpiochip.direction_input = VAR_3;
 VAR_9->gpiochip.direction_output = VAR_4;
 VAR_9->gpiochip.get = VAR_5;
 VAR_9->gpiochip.set = VAR_7;
 VAR_9->gpiochip.set_config = VAR_8;
 VAR_9->gpiochip.owner = VAR_2;


 FUNC_3(VAR_9->regmap, VAR_1, VAR_0);

 return FUNC_1(VAR_10, &VAR_9->gpiochip, VAR_9);
}
