
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_cluster const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_crashdumper {int* ptr; int iova; } ;
struct a6xx_cluster {int sel_val; int id; int count; int * registers; int sel_reg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int ,int,int) ;
 scalar_t__ FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_6 (struct a6xx_gpu_state*,int*,size_t) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_4,
  struct a6xx_gpu_state *VAR_5,
  const struct a6xx_cluster *VAR_6,
  struct a6xx_gpu_state_obj *VAR_7,
  struct a6xx_crashdumper *VAR_8)
{
 u64 *VAR_9 = VAR_8->ptr;
 u64 VAR_10 = VAR_8->iova + VAR_0;
 size_t VAR_11;
 int VAR_12, VAR_13 = 0;


 if (VAR_6->sel_reg)
  VAR_9 += FUNC_2(VAR_9, VAR_6->sel_reg, VAR_6->sel_val);

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  int VAR_14;

  VAR_9 += FUNC_2(VAR_9, VAR_3,
   (VAR_6->id << 8) | (VAR_12 << 4) | VAR_12);

  for (VAR_14 = 0; VAR_14 < VAR_6->count; VAR_14 += 2) {
   int VAR_15 = FUNC_3(VAR_6->registers, VAR_14);

   VAR_9 += FUNC_1(VAR_9, VAR_6->registers[VAR_14],
    VAR_15, VAR_10);

   VAR_10 += VAR_15 * sizeof(u32);

   if (VAR_12 == 0)
    VAR_13 += VAR_15;
  }
 }

 FUNC_0(VAR_9);

 VAR_11 = VAR_13 * VAR_2 * sizeof(u32);

 if (FUNC_4(VAR_11 > VAR_1))
  return;

 if (FUNC_5(VAR_4, VAR_8))
  return;

 VAR_7->handle = VAR_6;
 VAR_7->data = FUNC_6(VAR_5, VAR_8->ptr + VAR_0,
  VAR_11);
}
