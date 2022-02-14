
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sm5502_muic_info {int num_muic_irqs; int irq_work; int dev; TYPE_1__* muic_irqs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int virq; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sm5502_muic_info*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct sm5502_muic_info *VAR_3 = VAR_2;
 int VAR_4, VAR_5 = -1, VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_muic_irqs; VAR_4++)
  if (VAR_1 == VAR_3->muic_irqs[VAR_4].virq)
   VAR_5 = VAR_3->muic_irqs[VAR_4].irq;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "cannot handle is interrupt:%d\n",
        VAR_5);
  return VAR_0;
 }
 FUNC_1(&VAR_3->irq_work);

 return VAR_0;
}
