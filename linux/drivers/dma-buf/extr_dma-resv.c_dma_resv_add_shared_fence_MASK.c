
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; unsigned int shared_max; int * shared; } ;
struct dma_resv {int seq; } ;
struct dma_fence {scalar_t__ context; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 scalar_t__ FUNC_3 (struct dma_fence*) ;
 int FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_6 (struct dma_resv*) ;
 int FUNC_7 (struct dma_resv*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct dma_fence* FUNC_10 (int ,int ) ;
 int FUNC_11 (unsigned int,unsigned int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(struct dma_resv *VAR_0, struct dma_fence *VAR_1)
{
 struct dma_resv_list *VAR_2;
 struct dma_fence *VAR_3;
 unsigned int VAR_4, VAR_5;

 FUNC_2(VAR_1);

 FUNC_5(VAR_0);

 VAR_2 = FUNC_6(VAR_0);
 VAR_5 = VAR_2->shared_count;

 FUNC_8();
 FUNC_12(&VAR_0->seq);

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {

  VAR_3 = FUNC_10(VAR_2->shared[VAR_4],
      FUNC_7(VAR_0));
  if (VAR_3->context == VAR_1->context ||
      FUNC_3(VAR_3))
   goto replace;
 }

 FUNC_0(VAR_2->shared_count >= VAR_2->shared_max);
 VAR_3 = ((void*)0);
 VAR_5++;

replace:
 FUNC_1(VAR_2->shared[VAR_4], VAR_1);

 FUNC_11(VAR_2->shared_count, VAR_5);

 FUNC_13(&VAR_0->seq);
 FUNC_9();
 FUNC_4(VAR_3);
}
