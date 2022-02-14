
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_fence {TYPE_1__* fctx; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {char const* name; } ;


 struct msm_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static const char *FUNC_1(struct dma_fence *VAR_0)
{
 struct msm_fence *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->fctx->name;
}
