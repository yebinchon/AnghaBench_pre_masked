
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; int * shared; } ;
struct dma_resv {int seq; int fence; int fence_excl; } ;
struct dma_fence {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 long FUNC_3 (struct dma_fence*,int,long) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 unsigned int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,unsigned int) ;
 scalar_t__ FUNC_9 (int ,int *) ;

long FUNC_10(struct dma_resv *VAR_1,
          bool VAR_2, bool VAR_3,
          unsigned long VAR_4)
{
 struct dma_fence *VAR_5;
 unsigned VAR_6, VAR_7;
 long VAR_8 = VAR_4 ? VAR_4 : 1;
 int VAR_9;

retry:
 VAR_7 = 0;
 VAR_6 = FUNC_7(&VAR_1->seq);
 FUNC_5();
 VAR_9 = -1;

 VAR_5 = FUNC_4(VAR_1->fence_excl);
 if (VAR_5 && !FUNC_9(VAR_0, &VAR_5->flags)) {
  if (!FUNC_0(VAR_5))
   goto unlock_retry;

  if (FUNC_1(VAR_5)) {
   FUNC_2(VAR_5);
   VAR_5 = ((void*)0);
  }

 } else {
  VAR_5 = ((void*)0);
 }

 if (VAR_2) {
  struct dma_resv_list *VAR_10 = FUNC_4(VAR_1->fence);

  if (VAR_10)
   VAR_7 = VAR_10->shared_count;

  for (VAR_9 = 0; !VAR_5 && VAR_9 < VAR_7; ++VAR_9) {
   struct dma_fence *VAR_11 = FUNC_4(VAR_10->shared[VAR_9]);

   if (FUNC_9(VAR_0,
         &VAR_11->flags))
    continue;

   if (!FUNC_0(VAR_11))
    goto unlock_retry;

   if (FUNC_1(VAR_11)) {
    FUNC_2(VAR_11);
    continue;
   }

   VAR_5 = VAR_11;
   break;
  }
 }

 FUNC_6();
 if (VAR_5) {
  if (FUNC_8(&VAR_1->seq, VAR_6)) {
   FUNC_2(VAR_5);
   goto retry;
  }

  VAR_8 = FUNC_3(VAR_5, VAR_3, VAR_8);
  FUNC_2(VAR_5);
  if (VAR_8 > 0 && VAR_2 && (VAR_9 + 1 < VAR_7))
   goto retry;
 }
 return VAR_8;

unlock_retry:
 FUNC_6();
 goto retry;
}
