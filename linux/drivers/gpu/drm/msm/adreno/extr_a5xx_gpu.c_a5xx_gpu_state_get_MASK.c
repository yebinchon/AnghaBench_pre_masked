
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu_state {int rbbm_status; } ;
struct msm_gpu {int dummy; } ;
struct a5xx_gpu_state {struct msm_gpu_state base; } ;


 int VAR_0 ;
 struct msm_gpu_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msm_gpu*,struct a5xx_gpu_state*) ;
 int FUNC_2 (struct msm_gpu*,int) ;
 int FUNC_3 (struct msm_gpu*,struct msm_gpu_state*) ;
 int FUNC_4 (struct msm_gpu*,int ) ;
 struct a5xx_gpu_state* FUNC_5 (int,int ) ;

__attribute__((used)) static struct msm_gpu_state *FUNC_6(struct msm_gpu *VAR_3)
{
 struct a5xx_gpu_state *VAR_4 = FUNC_5(sizeof(*VAR_4),
   VAR_1);

 if (!VAR_4)
  return FUNC_0(-VAR_0);


 FUNC_2(VAR_3, 0);


 FUNC_3(VAR_3, &(VAR_4->base));

 VAR_4->base.rbbm_status = FUNC_4(VAR_3, VAR_2);


 FUNC_1(VAR_3, VAR_4);

 FUNC_2(VAR_3, 1);

 return &VAR_4->base;
}
