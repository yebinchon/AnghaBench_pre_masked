
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keystone_irq_device {int mask; int dev; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct keystone_irq_device* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct keystone_irq_device *VAR_1 = FUNC_2(VAR_0);

 VAR_1->mask |= FUNC_0(VAR_0->hwirq);
 FUNC_1(VAR_1->dev, "mask %lu [%x]\n", VAR_0->hwirq, VAR_1->mask);
}
