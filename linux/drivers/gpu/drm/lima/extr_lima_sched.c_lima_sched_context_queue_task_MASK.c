
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* s_fence; } ;
struct lima_sched_task {TYPE_2__ base; } ;
struct lima_sched_context {int base; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {int finished; } ;


 struct dma_fence* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;

struct dma_fence *FUNC_2(struct lima_sched_context *VAR_0,
      struct lima_sched_task *VAR_1)
{
 struct dma_fence *VAR_2 = FUNC_0(&VAR_1->base.s_fence->finished);

 FUNC_1(&VAR_1->base, &VAR_0->base);
 return VAR_2;
}
