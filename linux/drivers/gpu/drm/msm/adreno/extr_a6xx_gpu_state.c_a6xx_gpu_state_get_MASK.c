
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu_state {int dummy; } ;
struct msm_gpu {int aspace; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu_state {struct msm_gpu_state base; int objs; } ;
struct a6xx_gpu {int gmu; } ;
struct a6xx_crashdumper {int bo; int member_0; } ;


 int VAR_0 ;
 struct msm_gpu_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_3 (struct msm_gpu*,struct a6xx_gpu_state*,struct a6xx_crashdumper*) ;
 int FUNC_4 (struct msm_gpu*,struct a6xx_gpu_state*,struct a6xx_crashdumper*) ;
 int FUNC_5 (struct msm_gpu*,struct a6xx_gpu_state*) ;
 int FUNC_6 (struct msm_gpu*,struct a6xx_gpu_state*) ;
 int FUNC_7 (struct msm_gpu*,struct a6xx_gpu_state*) ;
 int FUNC_8 (struct msm_gpu*,struct a6xx_gpu_state*,struct a6xx_crashdumper*) ;
 int FUNC_9 (struct msm_gpu*,struct a6xx_gpu_state*,struct a6xx_crashdumper*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct msm_gpu*,struct msm_gpu_state*) ;
 struct a6xx_gpu_state* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int ,int) ;
 struct a6xx_gpu* FUNC_14 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_15 (struct msm_gpu*) ;

struct msm_gpu_state *FUNC_16(struct msm_gpu *VAR_2)
{
 struct a6xx_crashdumper VAR_3 = { 0 };
 struct adreno_gpu *VAR_4 = FUNC_15(VAR_2);
 struct a6xx_gpu *VAR_5 = FUNC_14(VAR_4);
 struct a6xx_gpu_state *VAR_6 = FUNC_12(sizeof(*VAR_6),
  VAR_1);

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_6->objs);


 FUNC_11(VAR_2, &VAR_6->base);

 FUNC_6(VAR_2, VAR_6);


 if (!FUNC_10(&VAR_5->gmu))
  return &VAR_6->base;


 FUNC_7(VAR_2, VAR_6);


 if (!FUNC_2(VAR_2, &VAR_3)) {
  FUNC_8(VAR_2, VAR_6, &VAR_3);
  FUNC_9(VAR_2, VAR_6, &VAR_3);
  FUNC_3(VAR_2, VAR_6, &VAR_3);
  FUNC_4(VAR_2, VAR_6, &VAR_3);

  FUNC_13(VAR_3.bo, VAR_2->aspace, 1);
 }

 FUNC_5(VAR_2, VAR_6);

 return &VAR_6->base;
}
