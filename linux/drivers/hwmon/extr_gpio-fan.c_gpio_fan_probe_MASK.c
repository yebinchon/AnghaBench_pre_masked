
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct gpio_fan_data {scalar_t__ num_gpios; int num_speed; int cdev; scalar_t__ alarm_gpio; int hwmon_dev; int speed; scalar_t__ gpios; int lock; struct device* dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,struct gpio_fan_data*) ;
 int FUNC_4 (struct device*,char*,struct gpio_fan_data*,int ) ;
 struct gpio_fan_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,struct device_node*,char*,struct gpio_fan_data*,int *) ;
 int FUNC_7 (struct gpio_fan_data*) ;
 int FUNC_8 (struct gpio_fan_data*) ;
 int VAR_3 ;
 int FUNC_9 (struct gpio_fan_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct gpio_fan_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_6)
{
 int VAR_7;
 struct gpio_fan_data *VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 struct device_node *VAR_10 = VAR_9->of_node;

 VAR_8 = FUNC_5(VAR_9, sizeof(struct gpio_fan_data),
    VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = VAR_9;
 VAR_7 = FUNC_9(VAR_8);
 if (VAR_7)
  return VAR_7;

 FUNC_11(VAR_6, VAR_8);
 FUNC_10(&VAR_8->lock);


 if (VAR_8->gpios && VAR_8->num_gpios > 0) {
  if (!VAR_8->speed || VAR_8->num_speed <= 1)
   return -VAR_0;
  VAR_7 = FUNC_8(VAR_8);
  if (VAR_7)
   return VAR_7;
  VAR_7 = FUNC_3(VAR_9, VAR_5, VAR_8);
  if (VAR_7)
   return VAR_7;
 }


 VAR_8->hwmon_dev =
  FUNC_4(VAR_9,
             "gpio_fan", VAR_8,
             VAR_4);
 if (FUNC_0(VAR_8->hwmon_dev))
  return FUNC_1(VAR_8->hwmon_dev);


 if (VAR_8->alarm_gpio) {
  VAR_7 = FUNC_7(VAR_8);
  if (VAR_7)
   return VAR_7;
 }


 VAR_8->cdev = FUNC_6(VAR_9, VAR_10,
    "gpio-fan", VAR_8, &VAR_3);

 FUNC_2(VAR_9, "GPIO fan initialized\n");

 return 0;
}
