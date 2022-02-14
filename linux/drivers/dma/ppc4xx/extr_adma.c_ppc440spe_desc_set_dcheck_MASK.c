
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ppc440spe_adma_desc_slot {struct dma_cdb* hw_desc; } ;
struct ppc440spe_adma_chan {TYPE_1__* device; } ;
struct dma_cdb {int sg2u; int sg2l; int sg3u; int sg3l; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 () ;


 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ppc440spe_adma_desc_slot *VAR_0,
    struct ppc440spe_adma_chan *VAR_1, u8 *VAR_2)
{
 struct dma_cdb *VAR_3;

 switch (VAR_1->device->id) {
 case 129:
 case 128:
  VAR_3 = VAR_0->hw_desc;
  FUNC_1(VAR_2[0], &VAR_3->sg3l);
  FUNC_1(VAR_2[4], &VAR_3->sg3u);
  FUNC_1(VAR_2[8], &VAR_3->sg2l);
  FUNC_1(VAR_2[12], &VAR_3->sg2u);
  break;
 default:
  FUNC_0();
 }
}
