
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chan; } ;
struct ppc440spe_adma_desc_slot {int dst_cnt; struct ppc440spe_adma_desc_slot* group_head; TYPE_1__ async_tx; } ;
struct ppc440spe_adma_chan {TYPE_2__* device; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (int) ;



 int FUNC_1 (struct ppc440spe_adma_desc_slot*,struct ppc440spe_adma_chan*,int ,int ,int) ;
 struct ppc440spe_adma_desc_slot* FUNC_2 (struct ppc440spe_adma_desc_slot*,int) ;
 struct ppc440spe_adma_chan* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ppc440spe_adma_desc_slot *VAR_0,
  dma_addr_t VAR_1, int VAR_2)
{
 struct ppc440spe_adma_chan *VAR_3;

 FUNC_0(VAR_2 >= VAR_0->dst_cnt);

 VAR_3 = FUNC_3(VAR_0->async_tx.chan);

 switch (VAR_3->device->id) {
 case 130:
 case 129:



  FUNC_1(VAR_0->group_head,
   VAR_3, 0, VAR_1, VAR_2);
  break;
 case 128:
  VAR_0 = FUNC_2(VAR_0, VAR_2);
  FUNC_1(VAR_0,
   VAR_3, 0, VAR_1, VAR_2);
  break;
 }
}
