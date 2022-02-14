
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state_obj {int * data; struct a6xx_debugbus_block const* handle; } ;
struct a6xx_gpu_state {int dummy; } ;
struct a6xx_debugbus_block {int count; int id; } ;


 int FUNC_0 (struct msm_gpu*,int ,int,int *) ;
 int * FUNC_1 (struct a6xx_gpu_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct msm_gpu *VAR_0,
  struct a6xx_gpu_state *VAR_1,
  const struct a6xx_debugbus_block *VAR_2,
  struct a6xx_gpu_state_obj *VAR_3)
{
 int VAR_4;
 u32 *VAR_5;

 VAR_3->data = FUNC_1(VAR_1, VAR_2->count, sizeof(u64));
 if (!VAR_3->data)
  return;

 VAR_3->handle = VAR_2;

 for (VAR_5 = VAR_3->data, VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++)
  VAR_5 += FUNC_0(VAR_0, VAR_2->id, VAR_4, VAR_5);
}
