
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu_state {int rbbm_status; } ;
struct msm_gpu {int dummy; } ;


 int VAR_0 ;
 struct msm_gpu_state* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct msm_gpu*,struct msm_gpu_state*) ;
 int FUNC_2 (struct msm_gpu*,int ) ;
 struct msm_gpu_state* FUNC_3 (int,int ) ;

__attribute__((used)) static struct msm_gpu_state *FUNC_4(struct msm_gpu *VAR_3)
{
 struct msm_gpu_state *VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_3, VAR_4);

 VAR_4->rbbm_status = FUNC_2(VAR_3, VAR_2);

 return VAR_4;
}
