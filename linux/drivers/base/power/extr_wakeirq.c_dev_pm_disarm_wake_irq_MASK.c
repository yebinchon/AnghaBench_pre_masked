
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_irq {int status; int irq; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct wake_irq *VAR_1)
{
 if (!VAR_1)
  return;

 if (FUNC_0(VAR_1->dev)) {
  FUNC_2(VAR_1->irq);

  if (VAR_1->status & VAR_0 &&
      !FUNC_3(VAR_1->dev))
   FUNC_1(VAR_1->irq);
 }
}
