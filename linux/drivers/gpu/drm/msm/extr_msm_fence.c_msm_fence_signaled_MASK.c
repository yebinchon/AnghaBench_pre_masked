
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seqno; } ;
struct msm_fence {TYPE_1__ base; int fctx; } ;
struct dma_fence {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct msm_fence* FUNC_1 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_2(struct dma_fence *VAR_0)
{
 struct msm_fence *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->fctx, VAR_1->base.seqno);
}
