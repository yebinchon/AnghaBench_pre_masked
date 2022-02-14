
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct hub_irq_data {int cpu; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;
 struct hub_irq_data* FUNC_3 (struct irq_data*) ;
 int FUNC_4 (struct irq_data*,int ) ;
 scalar_t__ FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct hub_irq_data*,struct cpumask const*) ;

__attribute__((used)) static int FUNC_7(struct irq_data *VAR_1, const struct cpumask *VAR_2,
    bool VAR_3)
{
 struct hub_irq_data *VAR_4 = FUNC_3(VAR_1);

 if (!VAR_4)
  return -VAR_0;

 if (FUNC_5(VAR_1))
  FUNC_1(VAR_1);

 FUNC_6(VAR_4, VAR_2);

 if (FUNC_5(VAR_1))
  FUNC_2(VAR_1);

 FUNC_4(VAR_1, FUNC_0(VAR_4->cpu));

 return 0;
}
