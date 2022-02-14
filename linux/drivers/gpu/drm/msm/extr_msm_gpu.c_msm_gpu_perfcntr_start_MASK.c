
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int time; int active; } ;
struct msm_gpu {int perfcntr_active; int perf_lock; scalar_t__ totaltime; scalar_t__ activetime; TYPE_2__ last_sample; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct msm_gpu*,int ,int *) ;

void FUNC_6(struct msm_gpu *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->pdev->dev);

 FUNC_3(&VAR_0->perf_lock, VAR_1);

 VAR_0->last_sample.active = FUNC_1(VAR_0);
 VAR_0->last_sample.time = FUNC_0();
 VAR_0->activetime = VAR_0->totaltime = 0;
 VAR_0->perfcntr_active = 1;
 FUNC_5(VAR_0, 0, ((void*)0));
 FUNC_4(&VAR_0->perf_lock, VAR_1);
}
