
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_bpmp {struct tegra210_bpmp* priv; } ;
struct tegra210_bpmp {struct irq_data* tx_irq_data; } ;
struct irq_data {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* irq_retrigger ) (struct irq_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct tegra_bpmp *VAR_1)
{
 struct tegra210_bpmp *VAR_2 = VAR_1->priv;
 struct irq_data *VAR_3 = VAR_2->tx_irq_data;





 if (VAR_3->chip->irq_retrigger)
  return VAR_3->chip->irq_retrigger(VAR_3);

 return -VAR_0;
}
