
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {int icc_path; } ;
struct adreno_gpu {struct msm_gpu base; int * fw; TYPE_1__* info; } ;
struct TYPE_2__ {int fw; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct adreno_gpu *VAR_0)
{
 struct msm_gpu *VAR_1 = &VAR_0->base;
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->info->fw); VAR_2++)
  FUNC_3(VAR_0->fw[VAR_2]);

 FUNC_1(VAR_1->icc_path);

 FUNC_2(&VAR_0->base);
}
