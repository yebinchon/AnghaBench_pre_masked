
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cht_wc_i2c_adap {scalar_t__ irq_mask; scalar_t__ old_irq_mask; int irqchip_lock; TYPE_1__ adapter; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 struct cht_wc_i2c_adap* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct cht_wc_i2c_adap *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if (VAR_2->irq_mask != VAR_2->old_irq_mask) {
  VAR_3 = FUNC_3(VAR_2->regmap, VAR_0,
       VAR_2->irq_mask);
  if (VAR_3 == 0)
   VAR_2->old_irq_mask = VAR_2->irq_mask;
  else
   FUNC_0(&VAR_2->adapter.dev, "Error writing EXTCHGRIRQ_MSK\n");
 }

 FUNC_2(&VAR_2->irqchip_lock);
}
