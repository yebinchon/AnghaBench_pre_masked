
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct v3d_fence {int queue; struct dma_fence base; scalar_t__ seqno; int * dev; } ;
struct v3d_dev {TYPE_1__* queue; int job_lock; int drm; } ;
typedef enum v3d_queue { ____Placeholder_v3d_queue } v3d_queue ;
struct TYPE_2__ {int fence_context; scalar_t__ emit_seqno; } ;


 int VAR_0 ;
 struct dma_fence* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct dma_fence*,int *,int *,int ,scalar_t__) ;
 struct v3d_fence* FUNC_2 (int,int ) ;
 int VAR_2 ;

struct dma_fence *FUNC_3(struct v3d_dev *VAR_3, enum v3d_queue VAR_4)
{
 struct v3d_fence *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->dev = &VAR_3->drm;
 VAR_5->queue = VAR_4;
 VAR_5->seqno = ++VAR_3->queue[VAR_4].emit_seqno;
 FUNC_1(&VAR_5->base, &VAR_2, &VAR_3->job_lock,
         VAR_3->queue[VAR_4].fence_context, VAR_5->seqno);

 return &VAR_5->base;
}
