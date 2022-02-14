
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devfreq; } ;
struct msm_gpu {TYPE_1__ devfreq; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int dummy; } ;


 int FUNC_0 (struct a6xx_gpu*) ;
 int FUNC_1 (int ) ;
 struct a6xx_gpu* FUNC_2 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_3 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_4(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_3(VAR_0);
 struct a6xx_gpu *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0->devfreq.devfreq);

 return FUNC_0(VAR_2);
}
