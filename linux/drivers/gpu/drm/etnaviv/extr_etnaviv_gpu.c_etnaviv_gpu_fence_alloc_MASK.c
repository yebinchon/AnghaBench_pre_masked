
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_gpu {int next_fence; int fence_context; int fence_spinlock; int lock; } ;
struct dma_fence {int dummy; } ;
struct etnaviv_fence {struct dma_fence base; struct etnaviv_gpu* gpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_fence*,int *,int *,int ,int ) ;
 int VAR_1 ;
 struct etnaviv_fence* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct dma_fence *FUNC_3(struct etnaviv_gpu *VAR_2)
{
 struct etnaviv_fence *VAR_3;





 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->gpu = VAR_2;

 FUNC_0(&VAR_3->base, &VAR_1, &VAR_2->fence_spinlock,
         VAR_2->fence_context, ++VAR_2->next_fence);

 return &VAR_3->base;
}
