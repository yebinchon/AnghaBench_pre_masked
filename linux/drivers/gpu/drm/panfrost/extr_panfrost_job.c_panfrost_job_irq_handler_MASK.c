
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct panfrost_job {int done_fence; TYPE_2__* file_priv; } ;
struct panfrost_device {TYPE_3__* js; int dev; struct panfrost_job** jobs; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int job_lock; TYPE_1__* queue; } ;
struct TYPE_5__ {int mmu; } ;
struct TYPE_4__ {int sched; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,char*,int,int ,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct panfrost_device*,int ) ;
 int FUNC_12 (struct panfrost_device*,int ,int) ;
 int FUNC_13 (struct panfrost_device*,int) ;
 int FUNC_14 (struct panfrost_device*,int) ;
 int FUNC_15 (struct panfrost_device*,int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_20(int VAR_5, void *VAR_6)
{
 struct panfrost_device *VAR_7 = VAR_6;
 u32 VAR_8 = FUNC_11(VAR_7, VAR_3);
 int VAR_9;

 FUNC_7(VAR_7->dev, "jobslot irq status=%x\n", VAR_8);

 if (!VAR_8)
  return VAR_1;

 FUNC_16(VAR_7->dev);

 for (VAR_9 = 0; VAR_8; VAR_9++) {
  u32 VAR_10 = FUNC_6(VAR_9);

  if (!(VAR_8 & VAR_10))
   continue;

  FUNC_12(VAR_7, VAR_2, VAR_10);

  if (VAR_8 & FUNC_1(VAR_9)) {
   FUNC_12(VAR_7, FUNC_2(VAR_9), VAR_4);

   FUNC_8(VAR_7->dev, "js fault, js=%d, status=%s, head=0x%x, tail=0x%x",
    VAR_9,
    FUNC_14(VAR_7, FUNC_11(VAR_7, FUNC_4(VAR_9))),
    FUNC_11(VAR_7, FUNC_3(VAR_9)),
    FUNC_11(VAR_7, FUNC_5(VAR_9)));

   FUNC_10(&VAR_7->js->queue[VAR_9].sched);
  }

  if (VAR_8 & FUNC_0(VAR_9)) {
   struct panfrost_job *VAR_11;

   FUNC_18(&VAR_7->js->job_lock);
   VAR_11 = VAR_7->jobs[VAR_9];

   if (VAR_11) {
    VAR_7->jobs[VAR_9] = ((void*)0);

    FUNC_15(VAR_7, &VAR_11->file_priv->mmu);
    FUNC_13(VAR_7, VAR_9);

    FUNC_9(VAR_11->done_fence);
    FUNC_17(VAR_7->dev);
   }
   FUNC_19(&VAR_7->js->job_lock);
  }

  VAR_8 &= ~VAR_10;
 }

 return VAR_0;
}
