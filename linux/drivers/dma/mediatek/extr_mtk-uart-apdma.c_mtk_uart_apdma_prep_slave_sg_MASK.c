
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct mtk_uart_apdma_desc {int vd; int addr; int avail_len; } ;
struct mtk_chan {int dir; int vc; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef enum dma_transfer_direction { ____Placeholder_dma_transfer_direction } dma_transfer_direction ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mtk_uart_apdma_desc* FUNC_1 (int,int ) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;
 struct mtk_chan* FUNC_4 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_5 (int *,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_6
 (struct dma_chan *VAR_1, struct scatterlist *VAR_2,
 unsigned int VAR_3, enum dma_transfer_direction VAR_4,
 unsigned long VAR_5, void *VAR_6)
{
 struct mtk_chan *VAR_7 = FUNC_4(VAR_1);
 struct mtk_uart_apdma_desc *VAR_8;

 if (!FUNC_0(VAR_4) || VAR_3 != 1)
  return ((void*)0);


 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->avail_len = FUNC_3(VAR_2);
 VAR_8->addr = FUNC_2(VAR_2);
 VAR_7->dir = VAR_4;

 return FUNC_5(&VAR_7->vc, &VAR_8->vd, VAR_5);
}
