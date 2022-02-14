
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu {int gmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;
 struct a6xx_gpu* FUNC_3 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

__attribute__((used)) static int FUNC_5(struct msm_gpu *VAR_3, uint64_t *VAR_4)
{
 struct adreno_gpu *VAR_5 = FUNC_4(VAR_3);
 struct a6xx_gpu *VAR_6 = FUNC_3(VAR_5);


 FUNC_1(&VAR_6->gmu, VAR_0);

 *VAR_4 = FUNC_2(VAR_3, VAR_2,
  VAR_1);

 FUNC_0(&VAR_6->gmu, VAR_0);
 return 0;
}
