
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_fence_context {int last_fence; int context; int spinlock; } ;
struct dma_fence {int dummy; } ;
struct msm_fence {struct dma_fence base; struct msm_fence_context* fctx; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,int ) ;
 struct msm_fence* FUNC_2 (int,int ) ;
 int VAR_2 ;

struct dma_fence *
FUNC_3(struct msm_fence_context *VAR_3)
{
 struct msm_fence *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->fctx = VAR_3;

 FUNC_1(&VAR_4->base, &VAR_2, &VAR_3->spinlock,
         VAR_3->context, ++VAR_3->last_fence);

 return &VAR_4->base;
}
