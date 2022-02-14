
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {struct dma_async_tx_descriptor* next; } ;
struct TYPE_2__ {struct dma_async_tx_descriptor tx; } ;
struct mtk_cqdma_vdesc {size_t len; size_t src; size_t dest; size_t residue; TYPE_1__ vd; struct mtk_cqdma_vdesc* parent; struct dma_chan* ch; } ;
struct dma_chan {int dummy; } ;
typedef size_t dma_addr_t ;


 size_t FUNC_0 (size_t,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct mtk_cqdma_vdesc** FUNC_1 (size_t,int,int ) ;
 int FUNC_2 (struct mtk_cqdma_vdesc*) ;
 struct mtk_cqdma_vdesc* FUNC_3 (int,int ) ;
 int FUNC_4 (struct dma_chan*) ;
 struct dma_async_tx_descriptor* FUNC_5 (int ,TYPE_1__*,unsigned long) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_6(struct dma_chan *VAR_2, dma_addr_t VAR_3,
     dma_addr_t VAR_4, size_t VAR_5, unsigned long VAR_6)
{
 struct mtk_cqdma_vdesc **VAR_7;
 struct dma_async_tx_descriptor *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 size_t VAR_10, VAR_11, VAR_12;
 VAR_12 = FUNC_0(VAR_5, VAR_1);
 VAR_7 = FUNC_1(VAR_12, sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return ((void*)0);

 for (VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10) {
  VAR_7[VAR_10] = FUNC_3(sizeof(*VAR_7[VAR_10]), VAR_0);
  if (!VAR_7[VAR_10]) {
   for (; VAR_10 > 0; --VAR_10)
    FUNC_2(VAR_7[VAR_10 - 1]);
   return ((void*)0);
  }


  VAR_7[VAR_10]->ch = VAR_2;


  VAR_11 = (VAR_5 > VAR_1) ? VAR_1 : VAR_5;
  VAR_7[VAR_10]->len = VAR_11;
  VAR_7[VAR_10]->src = VAR_4;
  VAR_7[VAR_10]->dest = VAR_3;


  VAR_8 = FUNC_5(FUNC_4(VAR_2), &VAR_7[VAR_10]->vd, VAR_6);
  VAR_8->next = ((void*)0);

  if (!VAR_10) {
   VAR_7[0]->residue = VAR_5;
  } else {
   VAR_9->next = VAR_8;
   VAR_7[VAR_10]->residue = VAR_11;
  }

  VAR_7[VAR_10]->parent = VAR_7[0];


  VAR_4 += VAR_11;
  VAR_3 += VAR_11;
  VAR_5 -= VAR_11;
  VAR_9 = VAR_8;
 }

 return &VAR_7[0]->vd.tx;
}
