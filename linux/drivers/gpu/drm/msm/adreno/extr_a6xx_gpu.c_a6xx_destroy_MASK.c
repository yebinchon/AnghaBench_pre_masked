
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int aspace; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {scalar_t__ sqe_bo; } ;


 int FUNC_0 (struct a6xx_gpu*) ;
 int FUNC_1 (struct adreno_gpu*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct a6xx_gpu*) ;
 int FUNC_4 (scalar_t__,int ) ;
 struct a6xx_gpu* FUNC_5 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_6(VAR_0);
 struct a6xx_gpu *VAR_2 = FUNC_5(VAR_1);

 if (VAR_2->sqe_bo) {
  FUNC_4(VAR_2->sqe_bo, VAR_0->aspace);
  FUNC_2(VAR_2->sqe_bo);
 }

 FUNC_0(VAR_2);

 FUNC_1(VAR_1);
 FUNC_3(VAR_2);
}
