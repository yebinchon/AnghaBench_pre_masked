
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state {int nr_registers; int * registers; } ;
struct a6xx_crashdumper {int dummy; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct msm_gpu*,struct a6xx_gpu_state*,int *,int *) ;
 int FUNC_2 (struct msm_gpu*,struct a6xx_gpu_state*,int *,int *,struct a6xx_crashdumper*) ;
 int FUNC_3 (struct msm_gpu*,struct a6xx_gpu_state*,int *,int *,struct a6xx_crashdumper*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * FUNC_4 (struct a6xx_gpu_state*,int,int) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_3,
  struct a6xx_gpu_state *VAR_4,
  struct a6xx_crashdumper *VAR_5)
{
 int VAR_6, VAR_7 = FUNC_0(VAR_0) +
  FUNC_0(VAR_2) +
  FUNC_0(VAR_1);
 int VAR_8 = 0;

 VAR_4->registers = FUNC_4(VAR_4,
  VAR_7, sizeof(*VAR_4->registers));

 if (!VAR_4->registers)
  return;

 VAR_4->nr_registers = VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++)
  FUNC_1(VAR_3,
   VAR_4, &VAR_0[VAR_6],
   &VAR_4->registers[VAR_8++]);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  FUNC_3(VAR_3,
   VAR_4, &VAR_2[VAR_6],
   &VAR_4->registers[VAR_8++],
   VAR_5);

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  FUNC_2(VAR_3,
   VAR_4, &VAR_1[VAR_6],
   &VAR_4->registers[VAR_8++],
   VAR_5);
}
