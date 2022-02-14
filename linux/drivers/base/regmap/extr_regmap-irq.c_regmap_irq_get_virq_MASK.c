
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_irq_chip_data {int domain; TYPE_2__* chip; } ;
struct TYPE_4__ {TYPE_1__* irqs; } ;
struct TYPE_3__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

int FUNC_1(struct regmap_irq_chip_data *VAR_1, int VAR_2)
{

 if (!VAR_1->chip->irqs[VAR_2].mask)
  return -VAR_0;

 return FUNC_0(VAR_1->domain, VAR_2);
}
