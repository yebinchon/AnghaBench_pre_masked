
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct adreno_gpu {int dummy; } ;
struct a6xx_registers {int count; scalar_t__* registers; } ;
struct a6xx_gpu_state_obj {int * data; void const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_gmu {int dummy; } ;
struct a6xx_gpu {struct a6xx_gmu gmu; } ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct a6xx_gmu*,scalar_t__) ;
 int * FUNC_2 (struct a6xx_gpu_state*,int,int) ;
 struct a6xx_gpu* FUNC_3 (struct adreno_gpu*) ;
 struct adreno_gpu* FUNC_4 (struct msm_gpu*) ;

__attribute__((used)) static void FUNC_5(struct msm_gpu *VAR_0,
  struct a6xx_gpu_state *VAR_1,
  const struct a6xx_registers *VAR_2,
  struct a6xx_gpu_state_obj *VAR_3)
{
 struct adreno_gpu *VAR_4 = FUNC_4(VAR_0);
 struct a6xx_gpu *VAR_5 = FUNC_3(VAR_4);
 struct a6xx_gmu *VAR_6 = &VAR_5->gmu;
 int VAR_7, VAR_8 = 0, VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7 += 2)
  VAR_8 += FUNC_0(VAR_2->registers, VAR_7);

 VAR_3->handle = (const void *) VAR_2;
 VAR_3->data = FUNC_2(VAR_1, VAR_8, sizeof(u32));
 if (!VAR_3->data)
  return;

 for (VAR_7 = 0; VAR_7 < VAR_2->count; VAR_7 += 2) {
  u32 VAR_10 = FUNC_0(VAR_2->registers, VAR_7);
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   VAR_3->data[VAR_9++] = FUNC_1(VAR_6,
    VAR_2->registers[VAR_7] + VAR_11);
 }
}
