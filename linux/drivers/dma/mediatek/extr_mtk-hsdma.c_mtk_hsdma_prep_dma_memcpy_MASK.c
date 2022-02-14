
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_hsdma_vdesc {size_t len; size_t residue; int vd; void* dest; void* src; } ;
struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int dummy; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 struct mtk_hsdma_vdesc* FUNC_0 (int,int ) ;
 int FUNC_1 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_2 (int ,int *,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_3(struct dma_chan *VAR_1, dma_addr_t VAR_2,
     dma_addr_t VAR_3, size_t VAR_4, unsigned long VAR_5)
{
 struct mtk_hsdma_vdesc *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->len = VAR_4;
 VAR_6->residue = VAR_4;
 VAR_6->src = VAR_3;
 VAR_6->dest = VAR_2;

 return FUNC_2(FUNC_1(VAR_1), &VAR_6->vd, VAR_5);
}
