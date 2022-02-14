
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu {TYPE_1__* dev; } ;
struct adreno_gpu {int * fw; } ;
struct a5xx_gpu {int pfp_iova; int pm4_iova; int * pfp_bo; int * pm4_bo; } ;
struct TYPE_2__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (struct msm_gpu*,int ,int *) ;
 int FUNC_4 (struct msm_gpu*,int ,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 struct a5xx_gpu* FUNC_6 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_7 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_8(struct msm_gpu *VAR_6)
{
 struct adreno_gpu *VAR_7 = FUNC_7(VAR_6);
 struct a5xx_gpu *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;

 if (!VAR_8->pm4_bo) {
  VAR_8->pm4_bo = FUNC_3(VAR_6,
   VAR_7->fw[VAR_1], &VAR_8->pm4_iova);


  if (FUNC_1(VAR_8->pm4_bo)) {
   VAR_9 = FUNC_2(VAR_8->pm4_bo);
   VAR_8->pm4_bo = ((void*)0);
   FUNC_0(VAR_6->dev->dev, "could not allocate PM4: %d\n",
    VAR_9);
   return VAR_9;
  }

  FUNC_5(VAR_8->pm4_bo, "pm4fw");
 }

 if (!VAR_8->pfp_bo) {
  VAR_8->pfp_bo = FUNC_3(VAR_6,
   VAR_7->fw[VAR_0], &VAR_8->pfp_iova);

  if (FUNC_1(VAR_8->pfp_bo)) {
   VAR_9 = FUNC_2(VAR_8->pfp_bo);
   VAR_8->pfp_bo = ((void*)0);
   FUNC_0(VAR_6->dev->dev, "could not allocate PFP: %d\n",
    VAR_9);
   return VAR_9;
  }

  FUNC_5(VAR_8->pfp_bo, "pfpfw");
 }

 FUNC_4(VAR_6, VAR_3,
  VAR_2, VAR_8->pm4_iova);

 FUNC_4(VAR_6, VAR_5,
  VAR_4, VAR_8->pfp_iova);

 return 0;
}
