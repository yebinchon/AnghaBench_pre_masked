
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct max14577_muic_info {int muic_irqs_num; int irq_work; int dev; TYPE_2__* max14577; TYPE_1__* muic_irqs; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev_type; } ;
struct TYPE_3__ {int virq; int irq; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct max14577_muic_info*,int) ;
 int FUNC_2 (struct max14577_muic_info*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct max14577_muic_info *VAR_3 = VAR_2;
 int VAR_4, VAR_5 = -1;
 bool VAR_6;







 for (VAR_4 = 0; VAR_4 < VAR_3->muic_irqs_num; VAR_4++)
  if (VAR_1 == VAR_3->muic_irqs[VAR_4].virq)
   VAR_5 = VAR_3->muic_irqs[VAR_4].irq;

 switch (VAR_3->max14577->dev_type) {
 case 128:
  VAR_6 = FUNC_2(VAR_3, VAR_5);
  break;
 case 129:
 default:
  VAR_6 = FUNC_1(VAR_3, VAR_5);
  break;
 }

 if (!VAR_6) {
  FUNC_0(VAR_3->dev, "muic interrupt: irq %d occurred, skipped\n",
    VAR_5);
  return VAR_0;
 }
 FUNC_3(&VAR_3->irq_work);

 return VAR_0;
}
