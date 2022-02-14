
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virt_dma_desc {int node; int tx; } ;
struct sdma_engine {TYPE_1__* channel_control; } ;
struct sdma_desc {int bd_phys; } ;
struct sdma_channel {int channel; int flags; struct sdma_desc* desc; struct sdma_engine* sdma; int vc; } ;
struct TYPE_2__ {int current_bd_ptr; int base_bd_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sdma_engine*,int) ;
 struct sdma_desc* FUNC_2 (int *) ;
 struct virt_dma_desc* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sdma_channel *VAR_1)
{
 struct virt_dma_desc *VAR_2 = FUNC_3(&VAR_1->vc);
 struct sdma_desc *VAR_3;
 struct sdma_engine *VAR_4 = VAR_1->sdma;
 int VAR_5 = VAR_1->channel;

 if (!VAR_2) {
  VAR_1->desc = ((void*)0);
  return;
 }
 VAR_1->desc = VAR_3 = FUNC_2(&VAR_2->tx);




 if (!(VAR_1->flags & VAR_0))
  FUNC_0(&VAR_2->node);

 VAR_4->channel_control[VAR_5].base_bd_ptr = VAR_3->bd_phys;
 VAR_4->channel_control[VAR_5].current_bd_ptr = VAR_3->bd_phys;
 FUNC_1(VAR_4, VAR_1->channel);
}
