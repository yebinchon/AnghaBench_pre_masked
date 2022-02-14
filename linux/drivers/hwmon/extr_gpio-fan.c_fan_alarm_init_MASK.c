
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_fan_data {int alarm_work; int alarm_gpio; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,int,int ,int ,char*,struct gpio_fan_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct gpio_fan_data *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = VAR_4->dev;





 VAR_5 = FUNC_2(VAR_4->alarm_gpio);
 if (VAR_5 <= 0)
  return 0;

 FUNC_0(&VAR_4->alarm_work, VAR_3);
 FUNC_3(VAR_5, VAR_1);
 return FUNC_1(VAR_6, VAR_5, VAR_2,
    VAR_0, "GPIO fan alarm", VAR_4);
}
