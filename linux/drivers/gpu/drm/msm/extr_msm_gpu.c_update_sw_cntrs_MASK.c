
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int time; scalar_t__ active; } ;
struct msm_gpu {int perf_lock; TYPE_1__ last_sample; int activetime; int totaltime; int perfcntr_active; } ;
typedef int ktime_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_0)
{
 ktime_t VAR_1;
 uint32_t VAR_2;
 unsigned long VAR_3;

 FUNC_4(&VAR_0->perf_lock, VAR_3);
 if (!VAR_0->perfcntr_active)
  goto out;

 VAR_1 = FUNC_0();
 VAR_2 = FUNC_2(FUNC_1(VAR_1, VAR_0->last_sample.time));

 VAR_0->totaltime += VAR_2;
 if (VAR_0->last_sample.active)
  VAR_0->activetime += VAR_2;

 VAR_0->last_sample.active = FUNC_3(VAR_0);
 VAR_0->last_sample.time = VAR_1;

out:
 FUNC_5(&VAR_0->perf_lock, VAR_3);
}
