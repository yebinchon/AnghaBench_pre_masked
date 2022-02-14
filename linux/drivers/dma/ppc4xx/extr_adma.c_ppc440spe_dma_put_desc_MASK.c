
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ppc440spe_adma_desc_slot {int hw_desc; int flags; int phys; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_regs {int cpfpl; } ;
struct TYPE_2__ {size_t id; struct dma_regs* dma_reg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ppc440spe_adma_desc_slot** VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ppc440spe_adma_chan*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ppc440spe_adma_chan *VAR_3,
  struct ppc440spe_adma_desc_slot *VAR_4)
{
 u32 VAR_5;
 struct dma_regs *VAR_6 = VAR_3->device->dma_reg;

 VAR_5 = VAR_4->phys;
 if (!FUNC_3(VAR_1, &VAR_4->flags))
  VAR_5 |= VAR_0;

 VAR_2[VAR_3->device->id] = VAR_4;

 FUNC_0(FUNC_2(VAR_3, VAR_4->hw_desc));

 FUNC_1(VAR_5, &VAR_6->cpfpl);
}
