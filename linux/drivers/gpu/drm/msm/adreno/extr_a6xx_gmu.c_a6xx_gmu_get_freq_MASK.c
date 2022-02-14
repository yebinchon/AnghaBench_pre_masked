
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gmu {unsigned long freq; } ;
struct a6xx_gpu {struct a6xx_gmu gmu; } ;


 struct a6xx_gpu* FUNC_0 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_1 (struct msm_gpu*) ;

unsigned long FUNC_2(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_1(VAR_0);
 struct a6xx_gpu *VAR_2 = FUNC_0(VAR_1);
 struct a6xx_gmu *VAR_3 = &VAR_2->gmu;

 return VAR_3->freq;
}
