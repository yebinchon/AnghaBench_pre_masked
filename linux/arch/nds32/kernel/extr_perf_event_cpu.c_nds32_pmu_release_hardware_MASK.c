
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nds32_pmu {TYPE_1__* plat_device; int (* free_irq ) (struct nds32_pmu*) ;} ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nds32_pmu*) ;

__attribute__((used)) static void FUNC_2(struct nds32_pmu *VAR_0)
{
 VAR_0->free_irq(VAR_0);
 FUNC_0(&VAR_0->plat_device->dev);
}
