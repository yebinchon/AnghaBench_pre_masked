
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;


 int FUNC_0 (struct msm_gpu*) ;
 int FUNC_1 (struct msm_gpu*) ;
 int FUNC_2 (struct msm_gpu*) ;
 int FUNC_3 (struct msm_gpu*) ;
 int FUNC_4 (struct msm_gpu*) ;
 scalar_t__ FUNC_5 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_6 (struct msm_gpu*) ;

int FUNC_7(struct msm_gpu *VAR_0)
{
 struct adreno_gpu *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;


 if (FUNC_5(VAR_1))
  FUNC_0(VAR_0);
 else
  FUNC_1(VAR_0);


 FUNC_4(VAR_0);


 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  return VAR_2;


 FUNC_3(VAR_0);

 return 0;
}
