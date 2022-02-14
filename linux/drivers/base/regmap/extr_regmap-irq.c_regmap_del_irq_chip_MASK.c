
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_irq_chip_data {struct regmap_irq_chip_data* status_buf; struct regmap_irq_chip_data* status_reg_buf; struct regmap_irq_chip_data* mask_buf; struct regmap_irq_chip_data* mask_buf_def; struct regmap_irq_chip_data* wake_buf; struct regmap_irq_chip_data* type_buf_def; struct regmap_irq_chip_data* type_buf; int domain; TYPE_2__* chip; } ;
struct TYPE_4__ {int num_irqs; TYPE_1__* irqs; } ;
struct TYPE_3__ {int mask; } ;


 int FUNC_0 (int,struct regmap_irq_chip_data*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (struct regmap_irq_chip_data*) ;

void FUNC_5(int VAR_0, struct regmap_irq_chip_data *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0, VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_1->chip->num_irqs; VAR_3++) {

  if (!VAR_1->chip->irqs[VAR_3].mask)
   continue;





  VAR_2 = FUNC_3(VAR_1->domain, VAR_3);
  if (VAR_2)
   FUNC_1(VAR_2);
 }

 FUNC_2(VAR_1->domain);
 FUNC_4(VAR_1->type_buf);
 FUNC_4(VAR_1->type_buf_def);
 FUNC_4(VAR_1->wake_buf);
 FUNC_4(VAR_1->mask_buf_def);
 FUNC_4(VAR_1->mask_buf);
 FUNC_4(VAR_1->status_reg_buf);
 FUNC_4(VAR_1->status_buf);
 FUNC_4(VAR_1);
}
