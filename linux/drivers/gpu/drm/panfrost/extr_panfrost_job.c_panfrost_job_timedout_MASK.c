
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panfrost_job {int done_fence; struct panfrost_device* pfdev; } ;
struct panfrost_device {int reset_lock; TYPE_2__* js; int ** jobs; int dev; } ;
struct drm_sched_job {int dummy; } ;
struct drm_gpu_scheduler {int work_tdr; } ;
struct TYPE_4__ {TYPE_1__* queue; int job_lock; } ;
struct TYPE_3__ {struct drm_gpu_scheduler sched; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int,int ,int ,int ,int ,struct drm_sched_job*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct drm_sched_job*) ;
 int FUNC_8 (struct drm_gpu_scheduler*) ;
 int FUNC_9 (struct drm_gpu_scheduler*,int) ;
 int FUNC_10 (struct drm_gpu_scheduler*,struct drm_sched_job*) ;
 int FUNC_11 (struct panfrost_device*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct panfrost_device*,int) ;
 int FUNC_15 (struct panfrost_device*) ;
 int FUNC_16 (struct panfrost_job*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 struct panfrost_job* FUNC_20 (struct drm_sched_job*) ;

__attribute__((used)) static void FUNC_21(struct drm_sched_job *VAR_1)
{
 struct panfrost_job *VAR_2 = FUNC_20(VAR_1);
 struct panfrost_device *VAR_3 = VAR_2->pfdev;
 int VAR_4 = FUNC_16(VAR_2);
 unsigned long VAR_5;
 int VAR_6;





 if (FUNC_6(VAR_2->done_fence))
  return;

 FUNC_5(VAR_3->dev, "gpu sched timeout, js=%d, config=0x%x, status=0x%x, head=0x%x, tail=0x%x, sched_job=%p",
  VAR_4,
  FUNC_11(VAR_3, FUNC_0(VAR_4)),
  FUNC_11(VAR_3, FUNC_2(VAR_4)),
  FUNC_11(VAR_3, FUNC_1(VAR_4)),
  FUNC_11(VAR_3, FUNC_3(VAR_4)),
  VAR_1);

 if (!FUNC_12(&VAR_3->reset_lock))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct drm_gpu_scheduler *VAR_7 = &VAR_3->js->queue[VAR_6].sched;

  FUNC_10(VAR_7, VAR_1);
  if (VAR_4 != VAR_6)

   FUNC_4(&VAR_7->work_tdr);
 }

 FUNC_7(VAR_1);

 FUNC_18(&VAR_3->js->job_lock, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->jobs[VAR_6]) {
   FUNC_17(VAR_3->dev);
   VAR_3->jobs[VAR_6] = ((void*)0);
  }
 }
 FUNC_19(&VAR_3->js->job_lock, VAR_5);



 FUNC_14(VAR_3, VAR_4);
 FUNC_15(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_8(&VAR_3->js->queue[VAR_6].sched);


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_9(&VAR_3->js->queue[VAR_6].sched, 1);

 FUNC_13(&VAR_3->reset_lock);
}
