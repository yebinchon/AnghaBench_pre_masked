
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int irq; } ;


 int FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct irq_data*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 FUNC_2("mpic_pasemi_msi_mask_irq %d\n", VAR_0->irq);
 FUNC_1(VAR_0);
 FUNC_0(VAR_0);
}
