
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct msm_gpu {int perf_lock; scalar_t__ totaltime; scalar_t__ activetime; int perfcntr_active; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct msm_gpu*,scalar_t__,scalar_t__*) ;

int FUNC_3(struct msm_gpu *VAR_1, uint32_t *VAR_2,
  uint32_t *VAR_3, uint32_t VAR_4, uint32_t *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_1->perf_lock, VAR_6);

 if (!VAR_1->perfcntr_active) {
  VAR_7 = -VAR_0;
  goto out;
 }

 *VAR_2 = VAR_1->activetime;
 *VAR_3 = VAR_1->totaltime;

 VAR_1->activetime = VAR_1->totaltime = 0;

 VAR_7 = FUNC_2(VAR_1, VAR_4, VAR_5);

out:
 FUNC_1(&VAR_1->perf_lock, VAR_6);

 return VAR_7;
}
