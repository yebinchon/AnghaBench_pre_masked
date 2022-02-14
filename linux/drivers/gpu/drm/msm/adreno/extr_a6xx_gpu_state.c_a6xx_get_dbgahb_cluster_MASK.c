
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_dbgahb_cluster const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_dbgahb_cluster {int statetype; int count; int base; scalar_t__* registers; } ;
struct a6xx_crashdumper {int* ptr; int iova; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,scalar_t__,int,int) ;
 scalar_t__ FUNC_2 (int*,int ,int) ;
 int FUNC_3 (scalar_t__*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_6 (struct a6xx_gpu_state*,int*,size_t) ;

__attribute__((used)) static void FUNC_7(struct msm_gpu *VAR_5,
  struct a6xx_gpu_state *VAR_6,
  const struct a6xx_dbgahb_cluster *VAR_7,
  struct a6xx_gpu_state_obj *VAR_8,
  struct a6xx_crashdumper *VAR_9)
{
 u64 *VAR_10 = VAR_9->ptr;
 u64 VAR_11 = VAR_9->iova + VAR_0;
 size_t VAR_12;
 int VAR_13, VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
  int VAR_15;

  VAR_10 += FUNC_2(VAR_10, VAR_4,
   (VAR_7->statetype + VAR_13 * 2) << 8);

  for (VAR_15 = 0; VAR_15 < VAR_7->count; VAR_15 += 2) {
   int VAR_16 = FUNC_3(VAR_7->registers, VAR_15);
   u32 VAR_17 = VAR_3 +
    VAR_7->registers[VAR_15] - (VAR_7->base >> 2);

   VAR_10 += FUNC_1(VAR_10, VAR_17, VAR_16, VAR_11);

   VAR_11 += VAR_16 * sizeof(u32);

   if (VAR_13 == 0)
    VAR_14 += VAR_16;
  }
 }

 FUNC_0(VAR_10);

 VAR_12 = VAR_14 * VAR_2 * sizeof(u32);

 if (FUNC_4(VAR_12 > VAR_1))
  return;

 if (FUNC_5(VAR_5, VAR_9))
  return;

 VAR_8->handle = VAR_7;
 VAR_8->data = FUNC_6(VAR_6, VAR_9->ptr + VAR_0,
  VAR_12);
}
