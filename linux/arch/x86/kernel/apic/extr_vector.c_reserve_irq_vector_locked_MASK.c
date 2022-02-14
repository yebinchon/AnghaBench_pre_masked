
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct apic_chip_data {int can_reserve; int has_reserved; } ;


 struct apic_chip_data* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct irq_data*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct apic_chip_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_0);
 VAR_2->can_reserve = 1;
 VAR_2->has_reserved = 1;
 FUNC_2(VAR_1);
 FUNC_3(VAR_1->irq, 0);
 FUNC_4(VAR_1);
}
