
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int nr_rings; int * rb; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {int preempt_timer; } ;


 int FUNC_0 (struct msm_gpu*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct a5xx_gpu*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct a5xx_gpu* FUNC_3 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

void FUNC_5(struct msm_gpu *VAR_1)
{
 struct adreno_gpu *VAR_2 = FUNC_4(VAR_1);
 struct a5xx_gpu *VAR_3 = FUNC_3(VAR_2);
 int VAR_4;


 if (VAR_1->nr_rings <= 1)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_1->nr_rings; VAR_4++) {
  if (FUNC_1(VAR_3, VAR_1->rb[VAR_4])) {




   FUNC_0(VAR_1);
   VAR_1->nr_rings = 1;

   return;
  }
 }

 FUNC_2(&VAR_3->preempt_timer, VAR_0, 0);
}
