
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct v3d_dev {int job_lock; struct v3d_bin_job* bin_job; struct drm_device drm; } ;
struct TYPE_8__ {TYPE_2__* s_fence; } ;
struct TYPE_9__ {scalar_t__ irq_fence; TYPE_3__ base; struct v3d_dev* v3d; } ;
struct v3d_bin_job {int start; int end; int qma; int qms; int qts; TYPE_4__ base; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_10__ {int seqno; } ;
struct TYPE_6__ {int error; } ;
struct TYPE_7__ {TYPE_1__ finished; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct v3d_bin_job* FUNC_6 (struct drm_sched_job*) ;
 TYPE_5__* FUNC_7 (struct dma_fence*) ;
 int FUNC_8 (struct drm_device*,int,int ,int,int) ;
 scalar_t__ FUNC_9 (int ) ;
 struct dma_fence* FUNC_10 (struct v3d_dev*,int ) ;
 int FUNC_11 (struct v3d_dev*) ;

__attribute__((used)) static struct dma_fence *FUNC_12(struct drm_sched_job *VAR_8)
{
 struct v3d_bin_job *VAR_9 = FUNC_6(VAR_8);
 struct v3d_dev *VAR_10 = VAR_9->base.v3d;
 struct drm_device *VAR_11 = &VAR_10->drm;
 struct dma_fence *VAR_12;
 unsigned long VAR_13;

 if (FUNC_9(VAR_9->base.base.s_fence->finished.error))
  return ((void*)0);




 FUNC_4(&VAR_10->job_lock, VAR_13);
 VAR_10->bin_job = VAR_9;



 FUNC_1(0, VAR_7, 0);
 FUNC_5(&VAR_10->job_lock, VAR_13);

 FUNC_11(VAR_10);

 VAR_12 = FUNC_10(VAR_10, VAR_0);
 if (FUNC_0(VAR_12))
  return ((void*)0);

 if (VAR_9->base.irq_fence)
  FUNC_3(VAR_9->base.irq_fence);
 VAR_9->base.irq_fence = FUNC_2(VAR_12);

 FUNC_8(VAR_11, 0, FUNC_7(VAR_12)->seqno,
       VAR_9->start, VAR_9->end);




 if (VAR_9->qma) {
  FUNC_1(0, VAR_3, VAR_9->qma);
  FUNC_1(0, VAR_4, VAR_9->qms);
 }
 if (VAR_9->qts) {
  FUNC_1(0, VAR_5,
          VAR_6 |
          VAR_9->qts);
 }
 FUNC_1(0, VAR_1, VAR_9->start);
 FUNC_1(0, VAR_2, VAR_9->end);

 return VAR_12;
}
