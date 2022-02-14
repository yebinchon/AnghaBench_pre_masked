
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intc_irqpin_priv {TYPE_1__* iomem; } ;
struct TYPE_2__ {int width; } ;


 unsigned long FUNC_0 (int) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct intc_irqpin_priv *VAR_0,
         int VAR_1, int VAR_2)
{
 return FUNC_0((VAR_0->iomem[VAR_1].width - 1) - VAR_2);
}
