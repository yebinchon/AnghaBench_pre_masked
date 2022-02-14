
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_registers {int count; int * registers; int val1; int val0; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_registers const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_crashdumper {int* ptr; int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int ,int,int) ;
 scalar_t__ FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_6 (struct a6xx_gpu_state*,int*,int) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_2,
  struct a6xx_gpu_state *VAR_3,
  const struct a6xx_registers *VAR_4,
  struct a6xx_gpu_state_obj *VAR_5,
  struct a6xx_crashdumper *VAR_6)

{
 u64 *VAR_7 = VAR_6->ptr;
 u64 VAR_8 = VAR_6->iova + VAR_0;
 int VAR_9, VAR_10 = 0;


 if (VAR_4->val0)
  VAR_7 += FUNC_2(VAR_7, VAR_4->val0, VAR_4->val1);

 for (VAR_9 = 0; VAR_9 < VAR_4->count; VAR_9 += 2) {
  u32 VAR_11 = FUNC_3(VAR_4->registers, VAR_9);

  VAR_7 += FUNC_1(VAR_7, VAR_4->registers[VAR_9], VAR_11, VAR_8);

  VAR_8 += VAR_11 * sizeof(u32);
  VAR_10 += VAR_11;
 }

 FUNC_0(VAR_7);

 if (FUNC_4((VAR_10 * sizeof(u32)) > VAR_1))
  return;

 if (FUNC_5(VAR_2, VAR_6))
  return;

 VAR_5->handle = VAR_4;
 VAR_5->data = FUNC_6(VAR_3, VAR_6->ptr + VAR_0,
  VAR_10 * sizeof(u32));
}
