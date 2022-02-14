
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgdma_sw_desc {int node; } ;
struct msgdma_device {int lock; int pending_list; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct msgdma_device* FUNC_4 (int ) ;
 struct msgdma_sw_desc* FUNC_5 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_6(struct dma_async_tx_descriptor *VAR_0)
{
 struct msgdma_device *VAR_1 = FUNC_4(VAR_0->chan);
 struct msgdma_sw_desc *VAR_2;
 dma_cookie_t VAR_3;
 unsigned long VAR_4;

 VAR_2 = FUNC_5(VAR_0);
 FUNC_2(&VAR_1->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->node, &VAR_1->pending_list);
 FUNC_3(&VAR_1->lock, VAR_4);

 return VAR_3;
}
