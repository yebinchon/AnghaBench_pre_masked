
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;
struct egpio_info {int irqs_enabled; int irq_start; } ;


 struct egpio_info* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct egpio_info *VAR_1 = FUNC_0(VAR_0);
 VAR_1->irqs_enabled &= ~(1 << (VAR_0->irq - VAR_1->irq_start));
 FUNC_1("EGPIO mask %d %04x\n", VAR_0->irq, VAR_1->irqs_enabled);
}
