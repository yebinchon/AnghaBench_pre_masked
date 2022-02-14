
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_shader_block {int size; int type; } ;
struct a6xx_gpu_state_obj {int data; struct a6xx_shader_block const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_crashdumper {int iova; int * ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int,int) ;
 scalar_t__ FUNC_2 (int *,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct msm_gpu*,struct a6xx_crashdumper*) ;
 int FUNC_5 (struct a6xx_gpu_state*,int *,size_t) ;

__attribute__((used)) static void FUNC_6(struct msm_gpu *VAR_5,
  struct a6xx_gpu_state *VAR_6,
  const struct a6xx_shader_block *VAR_7,
  struct a6xx_gpu_state_obj *VAR_8,
  struct a6xx_crashdumper *VAR_9)
{
 u64 *VAR_10 = VAR_9->ptr;
 size_t VAR_11 = VAR_7->size * VAR_2 * sizeof(u32);
 int VAR_12;

 if (FUNC_3(VAR_11 > VAR_1))
  return;

 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++) {
  VAR_10 += FUNC_2(VAR_10, VAR_4,
   (VAR_7->type << 8) | VAR_12);

  VAR_10 += FUNC_1(VAR_10, VAR_3,
   VAR_7->size, VAR_9->iova + VAR_0);
 }

 FUNC_0(VAR_10);

 if (FUNC_4(VAR_5, VAR_9))
  return;

 VAR_8->handle = VAR_7;
 VAR_8->data = FUNC_5(VAR_6, VAR_9->ptr + VAR_0,
  VAR_11);
}
