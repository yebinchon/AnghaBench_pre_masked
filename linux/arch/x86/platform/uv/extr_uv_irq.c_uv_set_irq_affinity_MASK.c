
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_data {int chip_data; TYPE_1__* chip; struct irq_data* parent_data; } ;
struct irq_cfg {int dummy; } ;
struct cpumask {int dummy; } ;
struct TYPE_2__ {int (* irq_set_affinity ) (struct irq_data*,struct cpumask const*,int) ;} ;


 struct irq_cfg* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_cfg*) ;
 int FUNC_2 (struct irq_data*,struct cpumask const*,int) ;
 int FUNC_3 (struct irq_cfg*,int ) ;

__attribute__((used)) static int
FUNC_4(struct irq_data *VAR_0, const struct cpumask *VAR_1,
      bool VAR_2)
{
 struct irq_data *VAR_3 = VAR_0->parent_data;
 struct irq_cfg *VAR_4 = FUNC_0(VAR_0);
 int VAR_5;

 VAR_5 = VAR_3->chip->irq_set_affinity(VAR_3, VAR_1, VAR_2);
 if (VAR_5 >= 0) {
  FUNC_3(VAR_4, VAR_0->chip_data);
  FUNC_1(VAR_4);
 }

 return VAR_5;
}
