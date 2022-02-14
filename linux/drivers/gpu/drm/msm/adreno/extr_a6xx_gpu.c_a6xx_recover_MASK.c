
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* funcs; TYPE_2__* pdev; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* pm_resume ) (struct msm_gpu*) ;int (* pm_suspend ) (struct msm_gpu*) ;} ;


 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct msm_gpu*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (struct msm_gpu*) ;
 int FUNC_7 (struct msm_gpu*) ;
 int FUNC_8 (struct msm_gpu*) ;
 struct a6xx_gpu* FUNC_9 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_10 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_11(struct msm_gpu *VAR_2)
{
 struct adreno_gpu *VAR_3 = FUNC_10(VAR_2);
 struct a6xx_gpu *VAR_4 = FUNC_9(VAR_3);
 int VAR_5;

 FUNC_3(VAR_2);

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_0(&VAR_2->pdev->dev, "CP_SCRATCH_REG%d: %u\n", VAR_5,
   FUNC_5(VAR_2, FUNC_1(VAR_5)));

 if (VAR_1)
  FUNC_2(VAR_2);





 FUNC_4(&VAR_4->gmu, VAR_0, 0);

 VAR_2->funcs->pm_suspend(VAR_2);
 VAR_2->funcs->pm_resume(VAR_2);

 FUNC_6(VAR_2);
}
