
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpiod_data {int value_kn; int irq; scalar_t__ irq_flags; struct gpio_desc* desc; } ;
struct gpio_desc {TYPE_1__* gdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int chip; } ;


 struct gpiod_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct gpiod_data*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct gpiod_data *VAR_1 = FUNC_0(VAR_0);
 struct gpio_desc *VAR_2 = VAR_1->desc;

 VAR_1->irq_flags = 0;
 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_3(VAR_2->gdev->chip, FUNC_2(VAR_2));
 FUNC_4(VAR_1->value_kn);
}
