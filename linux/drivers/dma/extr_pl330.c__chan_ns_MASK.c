
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int irq_ns; } ;
struct pl330_dmac {TYPE_1__ pcfg; } ;



__attribute__((used)) static bool FUNC_0(const struct pl330_dmac *VAR_0, int VAR_1)
{
 return VAR_0->pcfg.irq_ns & (1 << VAR_1);
}
