
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;
struct apic_chip_data {int is_managed; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 struct cpumask* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,struct cpumask const*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct irq_data *VAR_2)
{
 const struct cpumask *VAR_3 = FUNC_1(VAR_2);
 struct apic_chip_data *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_0, VAR_5);
 VAR_4->is_managed = 1;
 VAR_6 = FUNC_2(VAR_1, VAR_3);
 FUNC_4(&VAR_0, VAR_5);
 FUNC_5(VAR_2->irq, VAR_6);
 return VAR_6;
}
