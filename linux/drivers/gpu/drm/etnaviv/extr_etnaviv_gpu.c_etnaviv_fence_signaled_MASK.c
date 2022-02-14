
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ seqno; } ;
struct etnaviv_fence {TYPE_2__ base; TYPE_1__* gpu; } ;
struct dma_fence {int dummy; } ;
typedef scalar_t__ s32 ;
struct TYPE_3__ {scalar_t__ completed_fence; } ;


 struct etnaviv_fence* FUNC_0 (struct dma_fence*) ;

__attribute__((used)) static bool FUNC_1(struct dma_fence *VAR_0)
{
 struct etnaviv_fence *VAR_1 = FUNC_0(VAR_0);

 return (s32)(VAR_1->gpu->completed_fence - VAR_1->base.seqno) >= 0;
}
