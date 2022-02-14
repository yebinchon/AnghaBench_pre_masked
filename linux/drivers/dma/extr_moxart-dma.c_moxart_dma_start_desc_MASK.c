
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int tx; int node; } ;
struct moxart_chan {scalar_t__ sgidx; int * desc; int vc; } ;
struct dma_chan {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct moxart_chan*,int ) ;
 struct moxart_chan* FUNC_2 (struct dma_chan*) ;
 int * FUNC_3 (int *) ;
 struct virt_dma_desc* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_0)
{
 struct moxart_chan *VAR_1 = FUNC_2(VAR_0);
 struct virt_dma_desc *VAR_2;

 VAR_2 = FUNC_4(&VAR_1->vc);

 if (!VAR_2) {
  VAR_1->desc = ((void*)0);
  return;
 }

 FUNC_0(&VAR_2->node);

 VAR_1->desc = FUNC_3(&VAR_2->tx);
 VAR_1->sgidx = 0;

 FUNC_1(VAR_1, 0);
}
