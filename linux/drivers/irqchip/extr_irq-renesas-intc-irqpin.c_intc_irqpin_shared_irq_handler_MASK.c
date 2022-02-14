
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {int shared_irq_mask; int * irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 unsigned int FUNC_2 (struct intc_irqpin_priv*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct intc_irqpin_priv *VAR_4 = VAR_3;
 unsigned int VAR_5 = FUNC_2(VAR_4, VAR_0);
 irqreturn_t VAR_6 = VAR_1;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if (VAR_5 & FUNC_0(7 - VAR_7)) {
   if (FUNC_0(VAR_7) & VAR_4->shared_irq_mask)
    continue;

   VAR_6 |= FUNC_1(VAR_2, &VAR_4->irq[VAR_7]);
  }
 }

 return VAR_6;
}
