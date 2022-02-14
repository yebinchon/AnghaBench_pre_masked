
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct gpio_device {struct device* mockdev; struct device dev; struct gpio_chip* chip; } ;
struct gpio_chip {int base; struct device* parent; } ;
struct TYPE_3__ {int p; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*) ;
 struct device* FUNC_3 (TYPE_1__*,struct device*,int ,struct gpio_chip*,int ,char*,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

int FUNC_6(struct gpio_device *VAR_3)
{
 struct device *VAR_4;
 struct device *VAR_5;
 struct gpio_chip *VAR_6 = VAR_3->chip;







 if (!VAR_0.p)
  return 0;





 if (VAR_6->parent)
  VAR_5 = VAR_6->parent;
 else
  VAR_5 = &VAR_3->dev;


 VAR_4 = FUNC_3(&VAR_0, VAR_5,
     FUNC_1(0, 0),
     VAR_6, VAR_1,
     "gpiochip%d", VAR_6->base);
 if (FUNC_0(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_4(&VAR_2);
 VAR_3->mockdev = VAR_4;
 FUNC_5(&VAR_2);

 return 0;
}
