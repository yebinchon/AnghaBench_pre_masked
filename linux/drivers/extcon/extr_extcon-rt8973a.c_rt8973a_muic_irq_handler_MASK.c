
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt8973a_muic_info {int num_muic_irqs; int irq_attach; int irq_detach; int irq_ovp; int irq_otp; int irq_work; int dev; TYPE_1__* muic_irqs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int virq; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct rt8973a_muic_info *VAR_3 = VAR_2;
 int VAR_4, VAR_5 = -1;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_muic_irqs; VAR_4++)
  if (VAR_1 == VAR_3->muic_irqs[VAR_4].virq)
   VAR_5 = VAR_3->muic_irqs[VAR_4].irq;

 switch (VAR_5) {
 case 141:
  VAR_3->irq_attach = 1;
  break;
 case 137:
  VAR_3->irq_detach = 1;
  break;
 case 135:
  VAR_3->irq_ovp = 1;
  break;
 case 136:
  VAR_3->irq_otp = 1;
  break;
 case 140:
 case 138:
 case 139:
 case 142:
 case 128:
 case 129:
 case 132:
 case 131:
 case 133:
 case 134:
 case 130:
 default:
  FUNC_0(VAR_3->dev,
   "Cannot handle this interrupt (%d)\n", VAR_5);
  break;
 }

 FUNC_1(&VAR_3->irq_work);

 return VAR_0;
}
