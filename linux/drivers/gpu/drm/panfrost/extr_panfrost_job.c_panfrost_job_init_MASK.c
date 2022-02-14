
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panfrost_job_slot {TYPE_1__* queue; int job_lock; } ;
struct panfrost_device {int dev; struct panfrost_job_slot* js; } ;
struct TYPE_2__ {int sched; int fence_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct panfrost_job_slot* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ,int ,char*,struct panfrost_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int,int ,int ,char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct panfrost_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

int FUNC_11(struct panfrost_device *VAR_7)
{
 struct panfrost_job_slot *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_7->js = VAR_8 = FUNC_1(VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_9(&VAR_8->job_lock);

 VAR_11 = FUNC_8(FUNC_10(VAR_7->dev), "job");
 if (VAR_11 <= 0)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7->dev, VAR_11, VAR_5,
          VAR_3, "job", VAR_7);
 if (VAR_9) {
  FUNC_0(VAR_7->dev, "failed to request job irq");
  return VAR_9;
 }

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8->queue[VAR_10].fence_context = FUNC_3(1);

  VAR_9 = FUNC_5(&VAR_8->queue[VAR_10].sched,
         &VAR_6,
         1, 0, FUNC_6(500),
         "pan_js");
  if (VAR_9) {
   FUNC_0(VAR_7->dev, "Failed to create scheduler: %d.", VAR_9);
   goto err_sched;
  }
 }

 FUNC_7(VAR_7);

 return 0;

err_sched:
 for (VAR_10--; VAR_10 >= 0; VAR_10--)
  FUNC_4(&VAR_8->queue[VAR_10].sched);

 return VAR_9;
}
