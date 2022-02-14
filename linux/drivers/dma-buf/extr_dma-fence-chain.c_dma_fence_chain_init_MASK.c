
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct dma_fence_chain {int lock; int base; scalar_t__ prev_seqno; int work; struct dma_fence* fence; int prev; } ;
struct dma_fence {scalar_t__ seqno; int context; int ops; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,struct dma_fence*) ;
 int FUNC_6 (int *) ;
 struct dma_fence_chain* FUNC_7 (struct dma_fence*) ;

void FUNC_8(struct dma_fence_chain *VAR_2,
     struct dma_fence *VAR_3,
     struct dma_fence *VAR_4,
     uint64_t VAR_5)
{
 struct dma_fence_chain *VAR_6 = FUNC_7(VAR_3);
 uint64_t VAR_7;

 FUNC_6(&VAR_2->lock);
 FUNC_5(VAR_2->prev, VAR_3);
 VAR_2->fence = VAR_4;
 VAR_2->prev_seqno = 0;
 FUNC_3(&VAR_2->work, VAR_0);


 if (VAR_6 && FUNC_0(VAR_5, VAR_3->seqno, VAR_3->ops)) {
  VAR_7 = VAR_3->context;
  VAR_2->prev_seqno = VAR_3->seqno;
 } else {
  VAR_7 = FUNC_1(1);

  if (VAR_6)
   VAR_5 = FUNC_4(VAR_3->seqno, VAR_5);
 }

 FUNC_2(&VAR_2->base, &VAR_1,
         &VAR_2->lock, VAR_7, VAR_5);
}
