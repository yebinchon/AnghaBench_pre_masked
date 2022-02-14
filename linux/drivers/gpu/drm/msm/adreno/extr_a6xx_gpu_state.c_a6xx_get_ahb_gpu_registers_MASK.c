
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_registers {int count; scalar_t__* registers; } ;
struct a6xx_gpu_state_obj {int * data; void const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (struct msm_gpu*,scalar_t__) ;
 int * FUNC_2 (struct a6xx_gpu_state*,int,int) ;

__attribute__((used)) static void FUNC_3(struct msm_gpu *VAR_0,
  struct a6xx_gpu_state *VAR_1,
  const struct a6xx_registers *VAR_2,
  struct a6xx_gpu_state_obj *VAR_3)
{
 int VAR_4, VAR_5 = 0, VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4 += 2)
  VAR_5 += FUNC_0(VAR_2->registers, VAR_4);

 VAR_3->handle = (const void *) VAR_2;
 VAR_3->data = FUNC_2(VAR_1, VAR_5, sizeof(u32));
 if (!VAR_3->data)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4 += 2) {
  u32 VAR_7 = FUNC_0(VAR_2->registers, VAR_4);
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
   VAR_3->data[VAR_6++] = FUNC_1(VAR_0,
    VAR_2->registers[VAR_4] + VAR_8);
 }
}
