
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irqc_priv {int irq_domain; scalar_t__ iomem; } ;
struct irqc_irq {int hw_irq; struct irqc_priv* p; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct irqc_irq*,char*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct irqc_irq *VAR_5 = VAR_4;
 struct irqc_priv *VAR_6 = VAR_5->p;
 u32 VAR_7 = FUNC_0(VAR_5->hw_irq);

 FUNC_5(VAR_5, "demux1");

 if (FUNC_2(VAR_6->iomem + VAR_0) & VAR_7) {
  FUNC_3(VAR_7, VAR_6->iomem + VAR_0);
  FUNC_5(VAR_5, "demux2");
  FUNC_1(FUNC_4(VAR_6->irq_domain, VAR_5->hw_irq));
  return VAR_1;
 }
 return VAR_2;
}
