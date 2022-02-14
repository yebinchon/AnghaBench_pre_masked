
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_irq_chip_data {TYPE_1__* chip; } ;
struct regmap_irq {int dummy; } ;
struct TYPE_2__ {struct regmap_irq const* irqs; } ;



__attribute__((used)) static inline const
struct regmap_irq *FUNC_0(struct regmap_irq_chip_data *VAR_0,
         int VAR_1)
{
 return &VAR_0->chip->irqs[VAR_1];
}
