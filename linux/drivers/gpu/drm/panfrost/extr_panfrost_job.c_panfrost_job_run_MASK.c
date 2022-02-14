
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* s_fence; } ;
struct panfrost_job {scalar_t__ done_fence; TYPE_1__ base; struct panfrost_device* pfdev; } ;
struct panfrost_device {struct panfrost_job** jobs; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_5__ {int error; } ;
struct TYPE_6__ {TYPE_2__ finished; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 scalar_t__ FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (scalar_t__) ;
 struct dma_fence* FUNC_3 (struct panfrost_device*,int) ;
 int FUNC_4 (struct panfrost_job*) ;
 int FUNC_5 (struct panfrost_job*,int) ;
 struct panfrost_job* FUNC_6 (struct drm_sched_job*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static struct dma_fence *FUNC_8(struct drm_sched_job *VAR_0)
{
 struct panfrost_job *VAR_1 = FUNC_6(VAR_0);
 struct panfrost_device *VAR_2 = VAR_1->pfdev;
 int VAR_3 = FUNC_4(VAR_1);
 struct dma_fence *VAR_4 = ((void*)0);

 if (FUNC_7(VAR_1->base.s_fence->finished.error))
  return ((void*)0);

 VAR_2->jobs[VAR_3] = VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return ((void*)0);

 if (VAR_1->done_fence)
  FUNC_2(VAR_1->done_fence);
 VAR_1->done_fence = FUNC_1(VAR_4);

 FUNC_5(VAR_1, VAR_3);

 return VAR_4;
}
