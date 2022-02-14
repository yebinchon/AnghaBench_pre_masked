
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct cpumask {int dummy; } ;
struct apic_chip_data {scalar_t__ is_managed; scalar_t__ has_reserved; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 struct cpumask* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ,struct cpumask const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 const struct cpumask *VAR_2 = FUNC_1(VAR_1);
 struct apic_chip_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_4(VAR_1->irq, VAR_3->is_managed,
         VAR_3->has_reserved);

 if (VAR_3->has_reserved)
  FUNC_3(VAR_0);
 if (VAR_3->is_managed)
  FUNC_2(VAR_0, VAR_2);
}
