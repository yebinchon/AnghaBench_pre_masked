
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int tx; int node; } ;
struct bcm2835_desc {TYPE_1__* cb_list; } ;
struct bcm2835_chan {scalar_t__ chan_base; struct bcm2835_desc* desc; int vc; } ;
struct TYPE_2__ {int paddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 struct bcm2835_desc* FUNC_1 (int *) ;
 struct virt_dma_desc* FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct bcm2835_chan *VAR_3)
{
 struct virt_dma_desc *VAR_4 = FUNC_2(&VAR_3->vc);
 struct bcm2835_desc *VAR_5;

 if (!VAR_4) {
  VAR_3->desc = ((void*)0);
  return;
 }

 FUNC_0(&VAR_4->node);

 VAR_3->desc = VAR_5 = FUNC_1(&VAR_4->tx);

 FUNC_3(VAR_5->cb_list[0].paddr, VAR_3->chan_base + VAR_1);
 FUNC_3(VAR_0, VAR_3->chan_base + VAR_2);
}
