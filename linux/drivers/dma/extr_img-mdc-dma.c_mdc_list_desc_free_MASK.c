
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdc_tx_desc {int list_phys; struct mdc_hw_list_desc* list; TYPE_1__* chan; } ;
struct mdc_hw_list_desc {int node_addr; struct mdc_hw_list_desc* next_desc; } ;
struct mdc_dma {int desc_pool; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct mdc_dma* mdma; } ;


 int FUNC_0 (int ,struct mdc_hw_list_desc*,int ) ;

__attribute__((used)) static void FUNC_1(struct mdc_tx_desc *VAR_0)
{
 struct mdc_dma *VAR_1 = VAR_0->chan->mdma;
 struct mdc_hw_list_desc *VAR_2, *VAR_3;
 dma_addr_t VAR_4, VAR_5;

 VAR_2 = VAR_0->list;
 VAR_4 = VAR_0->list_phys;
 while (VAR_2) {
  VAR_3 = VAR_2->next_desc;
  VAR_5 = VAR_2->node_addr;
  FUNC_0(VAR_1->desc_pool, VAR_2, VAR_4);
  VAR_2 = VAR_3;
  VAR_4 = VAR_5;
 }
}
