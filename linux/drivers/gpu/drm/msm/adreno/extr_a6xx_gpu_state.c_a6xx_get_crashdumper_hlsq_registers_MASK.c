
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_registers {int count; int* registers; int val0; int val1; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_registers const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_crashdumper {int* ptr; int iova; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int,int,int) ;
 scalar_t__ FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_6 (struct a6xx_gpu_state*,int*,int) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_4,
  struct a6xx_gpu_state *VAR_5,
  const struct a6xx_registers *VAR_6,
  struct a6xx_gpu_state_obj *VAR_7,
  struct a6xx_crashdumper *VAR_8)

{
 u64 *VAR_9 = VAR_8->ptr;
 u64 VAR_10 = VAR_8->iova + VAR_0;
 int VAR_11, VAR_12 = 0;

 VAR_9 += FUNC_2(VAR_9, VAR_3, VAR_6->val1);

 for (VAR_11 = 0; VAR_11 < VAR_6->count; VAR_11 += 2) {
  u32 VAR_13 = FUNC_3(VAR_6->registers, VAR_11);
  u32 VAR_14 = VAR_2 +
   VAR_6->registers[VAR_11] - (VAR_6->val0 >> 2);

  VAR_9 += FUNC_1(VAR_9, VAR_14, VAR_13, VAR_10);

  VAR_10 += VAR_13 * sizeof(u32);
  VAR_12 += VAR_13;
 }

 FUNC_0(VAR_9);

 if (FUNC_4((VAR_12 * sizeof(u32)) > VAR_1))
  return;

 if (FUNC_5(VAR_4, VAR_8))
  return;

 VAR_7->handle = VAR_6;
 VAR_7->data = FUNC_6(VAR_5, VAR_8->ptr + VAR_0,
  VAR_12 * sizeof(u32));
}
