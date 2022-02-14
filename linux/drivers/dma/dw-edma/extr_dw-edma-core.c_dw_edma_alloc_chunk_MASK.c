
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dw_edma_desc {int chunks_alloc; struct dw_edma_chunk* chunk; struct dw_edma_chan* chan; } ;
struct TYPE_5__ {scalar_t__ vaddr; scalar_t__ paddr; } ;
struct dw_edma_chunk {int cb; int * burst; int list; TYPE_2__ ll_region; struct dw_edma_chan* chan; } ;
struct dw_edma_chan {scalar_t__ ll_off; TYPE_1__* chip; } ;
struct TYPE_6__ {scalar_t__ vaddr; scalar_t__ paddr; } ;
struct dw_edma {TYPE_3__ ll_region; } ;
struct TYPE_4__ {struct dw_edma* dw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dw_edma_chunk*) ;
 int FUNC_2 (struct dw_edma_chunk*) ;
 struct dw_edma_chunk* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct dw_edma_chunk *FUNC_6(struct dw_edma_desc *VAR_1)
{
 struct dw_edma_chan *VAR_2 = VAR_1->chan;
 struct dw_edma *VAR_3 = VAR_2->chip->dw;
 struct dw_edma_chunk *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (FUNC_5(!VAR_4))
  return ((void*)0);

 FUNC_0(&VAR_4->list);
 VAR_4->chan = VAR_2;






 VAR_4->cb = !(VAR_1->chunks_alloc % 2);
 VAR_4->ll_region.paddr = VAR_3->ll_region.paddr + VAR_2->ll_off;
 VAR_4->ll_region.vaddr = VAR_3->ll_region.vaddr + VAR_2->ll_off;

 if (VAR_1->chunk) {

  VAR_1->chunks_alloc++;
  FUNC_4(&VAR_4->list, &VAR_1->chunk->list);
  if (!FUNC_1(VAR_4)) {
   FUNC_2(VAR_4);
   return ((void*)0);
  }
 } else {

  VAR_4->burst = ((void*)0);
  VAR_1->chunks_alloc = 0;
  VAR_1->chunk = VAR_4;
 }

 return VAR_4;
}
