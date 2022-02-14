
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct v3d_dev {struct v3d_csd_job* csd_job; struct drm_device drm; } ;
struct TYPE_5__ {int * cfg; } ;
struct TYPE_4__ {scalar_t__ irq_fence; struct v3d_dev* v3d; } ;
struct v3d_csd_job {TYPE_2__ args; TYPE_1__ base; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_6__ {int seqno; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (scalar_t__) ;
 struct v3d_csd_job* FUNC_4 (struct drm_sched_job*) ;
 TYPE_3__* FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 struct dma_fence* FUNC_7 (struct v3d_dev*,int ) ;
 int FUNC_8 (struct v3d_dev*) ;

__attribute__((used)) static struct dma_fence *
FUNC_9(struct drm_sched_job *VAR_2)
{
 struct v3d_csd_job *VAR_3 = FUNC_4(VAR_2);
 struct v3d_dev *VAR_4 = VAR_3->base.v3d;
 struct drm_device *VAR_5 = &VAR_4->drm;
 struct dma_fence *VAR_6;
 int VAR_7;

 VAR_4->csd_job = VAR_3;

 FUNC_8(VAR_4);

 VAR_6 = FUNC_7(VAR_4, VAR_0);
 if (FUNC_0(VAR_6))
  return ((void*)0);

 if (VAR_3->base.irq_fence)
  FUNC_3(VAR_3->base.irq_fence);
 VAR_3->base.irq_fence = FUNC_2(VAR_6);

 FUNC_6(VAR_5, FUNC_5(VAR_6)->seqno);

 for (VAR_7 = 1; VAR_7 <= 6; VAR_7++)
  FUNC_1(0, VAR_1 + 4 * VAR_7, VAR_3->args.cfg[VAR_7]);

 FUNC_1(0, VAR_1, VAR_3->args.cfg[0]);

 return VAR_6;
}
