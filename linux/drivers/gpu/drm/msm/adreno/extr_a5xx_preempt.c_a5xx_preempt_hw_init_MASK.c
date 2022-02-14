
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {int nr_rings; TYPE_2__** rb; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {TYPE_1__** preempt; TYPE_2__* cur_ring; } ;
struct TYPE_4__ {int iova; } ;
struct TYPE_3__ {int rbase; scalar_t__ rptr; scalar_t__ wptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msm_gpu*,int ,int ,int ) ;
 int FUNC_1 (struct a5xx_gpu*,int ) ;
 struct a5xx_gpu* FUNC_2 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

void FUNC_4(struct msm_gpu *VAR_3)
{
 struct adreno_gpu *VAR_4 = FUNC_3(VAR_3);
 struct a5xx_gpu *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;


 VAR_5->cur_ring = VAR_3->rb[0];


 if (VAR_3->nr_rings == 1)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_3->nr_rings; VAR_6++) {
  VAR_5->preempt[VAR_6]->wptr = 0;
  VAR_5->preempt[VAR_6]->rptr = 0;
  VAR_5->preempt[VAR_6]->rbase = VAR_3->rb[VAR_6]->iova;
 }


 FUNC_0(VAR_3, VAR_2,
  VAR_1, 0);


 FUNC_1(VAR_5, VAR_0);
}
