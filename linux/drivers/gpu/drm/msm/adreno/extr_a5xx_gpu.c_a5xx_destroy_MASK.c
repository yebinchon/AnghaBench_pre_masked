
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int aspace; int name; } ;
struct adreno_gpu {int dummy; } ;
struct a5xx_gpu {scalar_t__ gpmu_bo; scalar_t__ pfp_bo; scalar_t__ pm4_bo; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct adreno_gpu*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct a5xx_gpu*) ;
 int FUNC_5 (scalar_t__,int ) ;
 struct a5xx_gpu* FUNC_6 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_7 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_8(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_7(VAR_0);
 struct a5xx_gpu *VAR_2 = FUNC_6(VAR_1);

 FUNC_0("%s", VAR_0->name);

 FUNC_1(VAR_0);

 if (VAR_2->pm4_bo) {
  FUNC_5(VAR_2->pm4_bo, VAR_0->aspace);
  FUNC_3(VAR_2->pm4_bo);
 }

 if (VAR_2->pfp_bo) {
  FUNC_5(VAR_2->pfp_bo, VAR_0->aspace);
  FUNC_3(VAR_2->pfp_bo);
 }

 if (VAR_2->gpmu_bo) {
  FUNC_5(VAR_2->gpmu_bo, VAR_0->aspace);
  FUNC_3(VAR_2->gpmu_bo);
 }

 FUNC_2(VAR_1);
 FUNC_4(VAR_2);
}
