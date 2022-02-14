
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_resv_list {unsigned int shared_count; int * shared; } ;
struct dma_resv {int seq; int fence_excl; int fence; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (struct dma_fence*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned int) ;

bool FUNC_6(struct dma_resv *VAR_0, bool VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4;

 FUNC_2();
retry:
 VAR_4 = 1;
 VAR_3 = 0;
 VAR_2 = FUNC_4(&VAR_0->seq);

 if (VAR_1) {
  unsigned VAR_5;

  struct dma_resv_list *VAR_6 = FUNC_1(VAR_0->fence);

  if (VAR_6)
   VAR_3 = VAR_6->shared_count;

  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
   struct dma_fence *VAR_7 = FUNC_1(VAR_6->shared[VAR_5]);

   VAR_4 = FUNC_0(VAR_7);
   if (VAR_4 < 0)
    goto retry;
   else if (!VAR_4)
    break;
  }

  if (FUNC_5(&VAR_0->seq, VAR_2))
   goto retry;
 }

 if (!VAR_3) {
  struct dma_fence *VAR_8 = FUNC_1(VAR_0->fence_excl);

  if (VAR_8) {
   VAR_4 = FUNC_0(VAR_8);
   if (VAR_4 < 0)
    goto retry;

   if (FUNC_5(&VAR_0->seq, VAR_2))
    goto retry;
  }
 }

 FUNC_3();
 return VAR_4;
}
