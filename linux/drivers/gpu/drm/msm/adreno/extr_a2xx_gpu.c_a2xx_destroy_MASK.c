
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int name; } ;
struct adreno_gpu {int dummy; } ;
struct a2xx_gpu {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct adreno_gpu*) ;
 int FUNC_2 (struct a2xx_gpu*) ;
 struct a2xx_gpu* FUNC_3 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_4(VAR_0);
 struct a2xx_gpu *VAR_2 = FUNC_3(VAR_1);

 FUNC_0("%s", VAR_0->name);

 FUNC_1(VAR_1);

 FUNC_2(VAR_2);
}
