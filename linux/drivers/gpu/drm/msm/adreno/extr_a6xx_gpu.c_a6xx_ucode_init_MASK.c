
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* pdev; } ;
struct adreno_gpu {int * fw; } ;
struct a6xx_gpu {int sqe_iova; int * sqe_bo; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_3 (struct msm_gpu*,int ,int *) ;
 int FUNC_4 (struct msm_gpu*,int ,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 struct a6xx_gpu* FUNC_6 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_7 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_8(struct msm_gpu *VAR_3)
{
 struct adreno_gpu *VAR_4 = FUNC_7(VAR_3);
 struct a6xx_gpu *VAR_5 = FUNC_6(VAR_4);

 if (!VAR_5->sqe_bo) {
  VAR_5->sqe_bo = FUNC_3(VAR_3,
   VAR_4->fw[VAR_0], &VAR_5->sqe_iova);

  if (FUNC_1(VAR_5->sqe_bo)) {
   int VAR_6 = FUNC_2(VAR_5->sqe_bo);

   VAR_5->sqe_bo = ((void*)0);
   FUNC_0(&VAR_3->pdev->dev,
    "Could not allocate SQE ucode: %d\n", VAR_6);

   return VAR_6;
  }

  FUNC_5(VAR_5->sqe_bo, "sqefw");
 }

 FUNC_4(VAR_3, VAR_2,
  VAR_1, VAR_5->sqe_iova);

 return 0;
}
