
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xor_cb {int cbbc; int cnt; } ;
struct ppc440spe_adma_desc_slot {struct xor_cb* hw_desc; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_cdb {int cbbc; int cnt; } ;
struct TYPE_2__ {int id; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ppc440spe_adma_desc_slot *VAR_0,
    struct ppc440spe_adma_chan *VAR_1,
    u32 VAR_2)
{
 struct dma_cdb *VAR_3;
 struct xor_cb *VAR_4;

 switch (VAR_1->device->id) {
 case 130:
 case 129:
  VAR_3 = VAR_0->hw_desc;
  VAR_3->cnt = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_4 = VAR_0->hw_desc;
  VAR_4->cbbc = VAR_2;
  break;
 }
}
