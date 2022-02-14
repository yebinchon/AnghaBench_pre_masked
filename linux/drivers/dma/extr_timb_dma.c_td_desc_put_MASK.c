
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timb_dma_desc {int desc_node; } ;
struct timb_dma_chan {int lock; int free_list; int chan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,struct timb_dma_desc*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timb_dma_chan *VAR_0,
 struct timb_dma_desc *VAR_1)
{
 FUNC_1(FUNC_0(&VAR_0->chan), "Putting desc: %p\n", VAR_1);

 FUNC_3(&VAR_0->lock);
 FUNC_2(&VAR_1->desc_node, &VAR_0->free_list);
 FUNC_4(&VAR_0->lock);
}
