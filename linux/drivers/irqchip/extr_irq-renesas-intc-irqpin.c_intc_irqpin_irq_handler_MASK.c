
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {int dummy; } ;
struct intc_irqpin_irq {int domain_irq; int hw_irq; struct intc_irqpin_priv* p; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct intc_irqpin_irq*,char*) ;
 unsigned long FUNC_2 (struct intc_irqpin_priv*,int ,int ) ;
 unsigned long FUNC_3 (struct intc_irqpin_priv*,int ) ;
 int FUNC_4 (struct intc_irqpin_priv*,int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct intc_irqpin_irq *VAR_5 = VAR_4;
 struct intc_irqpin_priv *VAR_6 = VAR_5->p;
 unsigned long VAR_7;

 FUNC_1(VAR_5, "demux1");
 VAR_7 = FUNC_2(VAR_6, VAR_0, VAR_5->hw_irq);

 if (FUNC_3(VAR_6, VAR_0) & VAR_7) {
  FUNC_4(VAR_6, VAR_0, ~VAR_7);
  FUNC_1(VAR_5, "demux2");
  FUNC_0(VAR_5->domain_irq);
  return VAR_1;
 }
 return VAR_2;
}
