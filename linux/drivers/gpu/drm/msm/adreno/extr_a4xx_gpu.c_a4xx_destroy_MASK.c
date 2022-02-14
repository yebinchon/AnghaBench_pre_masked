
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int name; } ;
struct adreno_gpu {int dummy; } ;
struct a4xx_gpu {int ocmem_hdl; scalar_t__ ocmem_base; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct adreno_gpu*) ;
 int FUNC_2 (struct a4xx_gpu*) ;
 int FUNC_3 (int ,int ) ;
 struct a4xx_gpu* FUNC_4 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_1)
{
 struct adreno_gpu *VAR_2 = FUNC_5(VAR_1);
 struct a4xx_gpu *VAR_3 = FUNC_4(VAR_2);

 FUNC_0("%s", VAR_1->name);

 FUNC_1(VAR_2);






 FUNC_2(VAR_3);
}
