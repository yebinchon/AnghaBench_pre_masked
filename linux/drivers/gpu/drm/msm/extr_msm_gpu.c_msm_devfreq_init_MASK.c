
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * devfreq; } ;
struct msm_gpu {TYPE_3__ devfreq; TYPE_1__* pdev; int fast_rate; TYPE_2__* funcs; } ;
struct TYPE_9__ {int initial_freq; } ;
struct TYPE_7__ {int gpu_busy; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,TYPE_4__*,int ,int *) ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct msm_gpu *VAR_2)
{

 if (!VAR_2->funcs->gpu_busy)
  return;

 VAR_1.initial_freq = VAR_2->fast_rate;






 VAR_2->devfreq.devfreq = FUNC_3(&VAR_2->pdev->dev,
   &VAR_1, VAR_0,
   ((void*)0));

 if (FUNC_1(VAR_2->devfreq.devfreq)) {
  FUNC_0(&VAR_2->pdev->dev, "Couldn't initialize GPU devfreq\n");
  VAR_2->devfreq.devfreq = ((void*)0);
 }

 FUNC_2(VAR_2->devfreq.devfreq);
}
