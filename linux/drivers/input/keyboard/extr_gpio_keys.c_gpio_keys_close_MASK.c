
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; } ;
struct gpio_keys_platform_data {int (* disable ) (int ) ;} ;
struct gpio_keys_drvdata {struct gpio_keys_platform_data* pdata; } ;


 struct gpio_keys_drvdata* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct input_dev *VAR_0)
{
 struct gpio_keys_drvdata *VAR_1 = FUNC_0(VAR_0);
 const struct gpio_keys_platform_data *VAR_2 = VAR_1->pdata;

 if (VAR_2->disable)
  VAR_2->disable(VAR_0->dev.parent);
}
