
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* s_fence; } ;
struct TYPE_9__ {scalar_t__ irq_fence; TYPE_3__ base; struct v3d_dev* v3d; } ;
struct v3d_render_job {int end; int start; TYPE_4__ base; } ;
struct drm_device {int dummy; } ;
struct v3d_dev {struct v3d_render_job* render_job; struct drm_device drm; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_10__ {int seqno; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_7__ {TYPE_1__ finished; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (scalar_t__) ;
 struct v3d_render_job* FUNC_4 (struct drm_sched_job*) ;
 TYPE_5__* FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct drm_device*,int,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct dma_fence* FUNC_8 (struct v3d_dev*,int ) ;
 int FUNC_9 (struct v3d_dev*) ;

__attribute__((used)) static struct dma_fence *FUNC_10(struct drm_sched_job *VAR_3)
{
 struct v3d_render_job *VAR_4 = FUNC_4(VAR_3);
 struct v3d_dev *VAR_5 = VAR_4->base.v3d;
 struct drm_device *VAR_6 = &VAR_5->drm;
 struct dma_fence *VAR_7;

 if (FUNC_7(VAR_4->base.base.s_fence->finished.error))
  return ((void*)0);

 VAR_5->render_job = VAR_4;







 FUNC_9(VAR_5);

 VAR_7 = FUNC_8(VAR_5, VAR_2);
 if (FUNC_0(VAR_7))
  return ((void*)0);

 if (VAR_4->base.irq_fence)
  FUNC_3(VAR_4->base.irq_fence);
 VAR_4->base.irq_fence = FUNC_2(VAR_7);

 FUNC_6(VAR_6, 1, FUNC_5(VAR_7)->seqno,
       VAR_4->start, VAR_4->end);






 FUNC_1(0, VAR_0, VAR_4->start);
 FUNC_1(0, VAR_1, VAR_4->end);

 return VAR_7;
}
