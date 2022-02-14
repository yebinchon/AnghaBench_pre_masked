
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ppc440spe_adma_desc_slot {TYPE_1__* hw_next; } ;
struct ppc440spe_adma_chan {int dummy; } ;
struct TYPE_2__ {int phys; } ;



__attribute__((used)) static inline u32 FUNC_0(struct ppc440spe_adma_desc_slot *VAR_0,
     struct ppc440spe_adma_chan *VAR_1)
{
 if (!VAR_0->hw_next)
  return 0;

 return VAR_0->hw_next->phys;
}
