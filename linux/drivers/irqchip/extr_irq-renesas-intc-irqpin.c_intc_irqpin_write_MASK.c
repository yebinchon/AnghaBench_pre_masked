
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intc_irqpin_priv {struct intc_irqpin_iomem* iomem; } ;
struct intc_irqpin_iomem {int iomem; int (* write ) (int ,unsigned long) ;} ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static inline void FUNC_1(struct intc_irqpin_priv *VAR_0,
         int VAR_1, unsigned long VAR_2)
{
 struct intc_irqpin_iomem *VAR_3 = &VAR_0->iomem[VAR_1];

 VAR_3->write(VAR_3->iomem, VAR_2);
}
