
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {struct intc_irqpin_iomem* iomem; } ;
struct intc_irqpin_iomem {unsigned long (* read ) (int ) ;int iomem; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct intc_irqpin_priv *VAR_0,
          int VAR_1)
{
 struct intc_irqpin_iomem *VAR_2 = &VAR_0->iomem[VAR_1];

 return VAR_2->read(VAR_2->iomem);
}
