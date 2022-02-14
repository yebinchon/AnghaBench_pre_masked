
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panfrost_job_slot {TYPE_1__* queue; int job_lock; } ;
struct dma_fence {int dummy; } ;
struct panfrost_fence {int queue; struct dma_fence base; scalar_t__ seqno; int dev; } ;
struct panfrost_device {int ddev; struct panfrost_job_slot* js; } ;
struct TYPE_2__ {int fence_context; scalar_t__ emit_seqno; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,scalar_t__) ;
 struct panfrost_fence* FUNC_2 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct dma_fence *FUNC_3(struct panfrost_device *VAR_3, int VAR_4)
{
 struct panfrost_fence *VAR_5;
 struct panfrost_job_slot *VAR_6 = VAR_3->js;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->dev = VAR_3->ddev;
 VAR_5->queue = VAR_4;
 VAR_5->seqno = ++VAR_6->queue[VAR_4].emit_seqno;
 FUNC_1(&VAR_5->base, &VAR_2, &VAR_6->job_lock,
         VAR_6->queue[VAR_4].fence_context, VAR_5->seqno);

 return &VAR_5->base;
}
