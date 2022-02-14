
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xilinx_dma_tx_descriptor {scalar_t__ cyclic; } ;
struct xilinx_dma_chan {int cyclic; int lock; scalar_t__ err; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (struct xilinx_dma_chan*,struct xilinx_dma_tx_descriptor*) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct xilinx_dma_tx_descriptor* FUNC_4 (struct dma_async_tx_descriptor*) ;
 struct xilinx_dma_chan* FUNC_5 (int ) ;
 int FUNC_6 (struct xilinx_dma_chan*) ;
 int FUNC_7 (struct xilinx_dma_chan*,struct xilinx_dma_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_8(struct dma_async_tx_descriptor *VAR_1)
{
 struct xilinx_dma_tx_descriptor *VAR_2 = FUNC_4(VAR_1);
 struct xilinx_dma_chan *VAR_3 = FUNC_5(VAR_1->chan);
 dma_cookie_t VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 if (VAR_3->cyclic) {
  FUNC_7(VAR_3, VAR_2);
  return -VAR_0;
 }

 if (VAR_3->err) {




  VAR_6 = FUNC_6(VAR_3);
  if (VAR_6 < 0)
   return VAR_6;
 }

 FUNC_2(&VAR_3->lock, VAR_5);

 VAR_4 = FUNC_1(VAR_1);


 FUNC_0(VAR_3, VAR_2);

 if (VAR_2->cyclic)
  VAR_3->cyclic = 1;

 FUNC_3(&VAR_3->lock, VAR_5);

 return VAR_4;
}
