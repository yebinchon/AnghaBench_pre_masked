
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_gpio_platform_data {int (* teardown ) (int *,int ,int ) ;} ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int base; } ;
struct gpio_twl4030_priv {TYPE_1__ gpio_chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 struct twl4030_gpio_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 struct gpio_twl4030_priv* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct twl4030_gpio_platform_data *VAR_3 = FUNC_2(&VAR_2->dev);
 struct gpio_twl4030_priv *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;

 if (VAR_3 && VAR_3->teardown) {
  VAR_5 = VAR_3->teardown(&VAR_2->dev, VAR_4->gpio_chip.base,
      VAR_1);
  if (VAR_5) {
   FUNC_1(&VAR_2->dev, "teardown --> %d\n", VAR_5);
   return VAR_5;
  }
 }

 FUNC_3(&VAR_4->gpio_chip);

 if (FUNC_4())
  return 0;


 FUNC_0(1);
 return -VAR_0;
}
