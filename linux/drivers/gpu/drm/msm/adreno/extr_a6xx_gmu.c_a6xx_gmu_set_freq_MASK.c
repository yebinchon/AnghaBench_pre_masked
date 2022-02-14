
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gmu {unsigned long freq; int nr_gpu_freqs; unsigned long* gpu_freqs; } ;
struct a6xx_gpu {struct a6xx_gmu gmu; } ;


 int FUNC_0 (struct a6xx_gmu*,int) ;
 struct a6xx_gpu* FUNC_1 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_2 (struct msm_gpu*) ;

void FUNC_3(struct msm_gpu *VAR_0, unsigned long VAR_1)
{
 struct adreno_gpu *VAR_2 = FUNC_2(VAR_0);
 struct a6xx_gpu *VAR_3 = FUNC_1(VAR_2);
 struct a6xx_gmu *VAR_4 = &VAR_3->gmu;
 u32 VAR_5 = 0;

 if (VAR_1 == VAR_4->freq)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_4->nr_gpu_freqs - 1; VAR_5++)
  if (VAR_1 == VAR_4->gpu_freqs[VAR_5])
   break;

 FUNC_0(VAR_4, VAR_5);
}
