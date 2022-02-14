
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; int * shared; int flags; } ;
struct dma_resv {int seq; int fence; int fence_excl; } ;
struct dma_fence {unsigned int shared_count; int * shared; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dma_resv_list*) ;
 int FUNC_1 (struct dma_resv_list*) ;
 struct dma_resv_list* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct dma_resv_list*) ;
 int FUNC_4 (struct dma_resv_list*) ;
 int FUNC_5 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_6 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_7 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_8 (unsigned int) ;
 int FUNC_9 (struct dma_resv_list*) ;
 int FUNC_10 (struct dma_resv_list*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,struct dma_resv_list*) ;
 struct dma_resv_list* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

int FUNC_20(struct dma_resv *VAR_2, struct dma_resv *VAR_3)
{
 struct dma_resv_list *VAR_4, *VAR_5;
 struct dma_fence *VAR_6, *VAR_7;
 unsigned VAR_8;

 FUNC_5(VAR_2);

 FUNC_15();
 VAR_4 = FUNC_14(VAR_3->fence);

retry:
 if (VAR_4) {
  unsigned VAR_9 = VAR_4->shared_count;

  FUNC_16();

  VAR_5 = FUNC_8(VAR_9);
  if (!VAR_5)
   return -VAR_1;

  FUNC_15();
  VAR_4 = FUNC_14(VAR_3->fence);
  if (!VAR_4 || VAR_4->shared_count > VAR_9) {
   FUNC_10(VAR_5);
   goto retry;
  }

  VAR_5->shared_count = 0;
  for (VAR_8 = 0; VAR_8 < VAR_4->shared_count; ++VAR_8) {
   struct dma_fence *VAR_10;

   VAR_10 = FUNC_14(VAR_4->shared[VAR_8]);
   if (FUNC_17(VAR_0,
         &VAR_10->flags))
    continue;

   if (!FUNC_1(VAR_10)) {
    FUNC_9(VAR_5);
    VAR_4 = FUNC_14(VAR_3->fence);
    goto retry;
   }

   if (FUNC_3(VAR_10)) {
    FUNC_4(VAR_10);
    continue;
   }

   FUNC_13(VAR_5->shared[VAR_5->shared_count++], VAR_10);
  }
 } else {
  VAR_5 = ((void*)0);
 }

 VAR_7 = FUNC_2(&VAR_3->fence_excl);
 FUNC_16();

 VAR_4 = FUNC_7(VAR_2);
 VAR_6 = FUNC_6(VAR_2);

 FUNC_11();
 FUNC_18(&VAR_2->seq);

 FUNC_0(VAR_2->fence_excl, VAR_7);
 FUNC_0(VAR_2->fence, VAR_5);
 FUNC_19(&VAR_2->seq);
 FUNC_12();

 FUNC_9(VAR_4);
 FUNC_4(VAR_6);

 return 0;
}
