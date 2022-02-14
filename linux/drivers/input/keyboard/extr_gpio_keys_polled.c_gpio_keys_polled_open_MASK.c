
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_polled_dev {struct gpio_keys_polled_dev* private; } ;
struct gpio_keys_polled_dev {int dev; struct gpio_keys_platform_data* pdata; } ;
struct gpio_keys_platform_data {int (* enable ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct input_polled_dev *VAR_0)
{
 struct gpio_keys_polled_dev *VAR_1 = VAR_0->private;
 const struct gpio_keys_platform_data *VAR_2 = VAR_1->pdata;

 if (VAR_2->enable)
  VAR_2->enable(VAR_1->dev);
}
