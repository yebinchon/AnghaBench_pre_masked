
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct max77843_muic_info {int irq_adc; int irq_chg; int irq_work; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int virq; int irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct max77843_muic_info *VAR_4 = VAR_3;
 int VAR_5, VAR_6 = -1;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++)
  if (VAR_2 == VAR_1[VAR_5].virq)
   VAR_6 = VAR_1[VAR_5].irq;

 switch (VAR_6) {
 case 143:
 case 141:
 case 142:
  VAR_4->irq_adc = 1;
  break;
 case 139:
 case 140:
 case 138:
 case 137:
 case 136:
  VAR_4->irq_chg = 1;
  break;
 case 129:
 case 128:
 case 135:
 case 134:
 case 133:
 case 130:
 case 132:
 case 131:
  break;
 default:
  FUNC_1(VAR_4->dev, "Cannot recognize IRQ(%d)\n", VAR_6);
  break;
 }

 FUNC_2(&VAR_4->irq_work);

 return VAR_0;
}
