
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int node; } ;
struct hsu_dma_chan {int * desc; int vchan; } ;


 int FUNC_0 (struct hsu_dma_chan*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hsu_dma_chan *VAR_0)
{
 struct virt_dma_desc *VAR_1;


 VAR_1 = FUNC_3(&VAR_0->vchan);
 if (!VAR_1) {
  VAR_0->desc = ((void*)0);
  return;
 }

 FUNC_1(&VAR_1->node);
 VAR_0->desc = FUNC_2(VAR_1);


 FUNC_0(VAR_0);
}
