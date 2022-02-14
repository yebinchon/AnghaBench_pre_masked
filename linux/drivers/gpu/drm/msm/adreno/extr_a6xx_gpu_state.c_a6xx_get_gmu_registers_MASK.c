
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_gpu_state {int nr_gmu_registers; int * gmu_registers; } ;
struct a6xx_gpu {int gmu; } ;


 int VAR_0 ;
 int FUNC_0 (struct msm_gpu*,struct a6xx_gpu_state*,int *,int *) ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int FUNC_2 (struct msm_gpu*,int ,int ) ;
 int * FUNC_3 (struct a6xx_gpu_state*,int,int) ;
 struct a6xx_gpu* FUNC_4 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_5 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_2,
  struct a6xx_gpu_state *VAR_3)
{
 struct adreno_gpu *VAR_4 = FUNC_5(VAR_2);
 struct a6xx_gpu *VAR_5 = FUNC_4(VAR_4);

 VAR_3->gmu_registers = FUNC_3(VAR_3,
  2, sizeof(*VAR_3->gmu_registers));

 if (!VAR_3->gmu_registers)
  return;

 VAR_3->nr_gmu_registers = 2;


 FUNC_0(VAR_2, VAR_3, &VAR_1[0],
  &VAR_3->gmu_registers[0]);

 if (!FUNC_1(&VAR_5->gmu))
  return;


 FUNC_2(VAR_2, VAR_0, 0);

 FUNC_0(VAR_2, VAR_3, &VAR_1[1],
  &VAR_3->gmu_registers[1]);
}
