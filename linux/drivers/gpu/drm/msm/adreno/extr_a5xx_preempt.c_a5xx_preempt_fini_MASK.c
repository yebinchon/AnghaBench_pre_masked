
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int nr_rings; int aspace; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int * preempt_bo; } ;


 int FUNC_0 (int ,int ,int) ;
 struct a5xx_gpu* FUNC_1 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_2 (struct msm_gpu*) ;

void FUNC_3(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_2(VAR_0);
 struct a5xx_gpu *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_rings; VAR_3++)
  FUNC_0(VAR_2->preempt_bo[VAR_3], VAR_0->aspace, 1);
}
