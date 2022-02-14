
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devfreq; int time; scalar_t__ busy_cycles; } ;
struct msm_gpu {TYPE_1__ devfreq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;

void FUNC_2(struct msm_gpu *VAR_0)
{
 VAR_0->devfreq.busy_cycles = 0;
 VAR_0->devfreq.time = FUNC_1();

 FUNC_0(VAR_0->devfreq.devfreq);
}
