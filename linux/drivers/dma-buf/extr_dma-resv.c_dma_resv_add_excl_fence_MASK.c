
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct dma_resv_list {size_t shared_count; int * shared; } ;
struct dma_resv {int seq; int fence_excl; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int ,struct dma_fence*) ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (struct dma_resv*) ;
 struct dma_fence* FUNC_4 (struct dma_resv*) ;
 struct dma_resv_list* FUNC_5 (struct dma_resv*) ;
 int FUNC_6 (struct dma_resv*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct dma_fence* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct dma_resv *VAR_0, struct dma_fence *VAR_1)
{
 struct dma_fence *VAR_2 = FUNC_4(VAR_0);
 struct dma_resv_list *VAR_3;
 u32 VAR_4 = 0;

 FUNC_3(VAR_0);

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3)
  VAR_4 = VAR_3->shared_count;

 if (VAR_1)
  FUNC_1(VAR_1);

 FUNC_7();
 FUNC_10(&VAR_0->seq);

 FUNC_0(VAR_0->fence_excl, VAR_1);
 if (VAR_3)
  VAR_3->shared_count = 0;
 FUNC_11(&VAR_0->seq);
 FUNC_8();


 while (VAR_4--)
  FUNC_2(FUNC_9(VAR_3->shared[VAR_4],
      FUNC_6(VAR_0)));

 FUNC_2(VAR_2);
}
