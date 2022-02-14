
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf857x {int lock; } ;
struct irq_data {int dummy; } ;


 struct pcf857x* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct pcf857x *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
}
