
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_gpu {int dummy; } ;
struct a6xx_gpu_state_obj {int* data; int * handle; } ;
struct a6xx_gpu_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct msm_gpu*,int ) ;
 int FUNC_1 (struct msm_gpu*,int ,int) ;
 int* FUNC_2 (struct a6xx_gpu_state*,int ,int) ;
 int FUNC_3 (struct msm_gpu*,int ,int ,int,int,int*) ;

__attribute__((used)) static void FUNC_4(struct msm_gpu *VAR_11,
  struct a6xx_gpu_state *VAR_12,
  struct a6xx_gpu_state_obj *VAR_13)
{
 u32 VAR_14, *VAR_15;
 int VAR_16;

 VAR_13->data = FUNC_2(VAR_12, VAR_8,
  sizeof(u32));
 if (!VAR_13->data)
  return;

 VAR_13->handle = ((void*)0);


 VAR_14 = FUNC_0(VAR_11, VAR_2);


 FUNC_1(VAR_11, VAR_2,
  VAR_14 | VAR_0);


 FUNC_1(VAR_11, VAR_3, 0);


 FUNC_1(VAR_11, VAR_7, 1);

 VAR_15 = VAR_13->data;

 for (VAR_16 = 0; VAR_16 < VAR_1; VAR_16++)
  VAR_15 += FUNC_3(VAR_11,
   VAR_5,
   VAR_6,
   1 << (VAR_16 + 16), 16, VAR_15);

 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
  VAR_15 += FUNC_3(VAR_11,
   VAR_5,
   VAR_6,
   1 << VAR_16, 18, VAR_15);


 FUNC_1(VAR_11, VAR_5, 0);

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
  VAR_15 += FUNC_3(VAR_11,
   VAR_3,
   VAR_4,
   1 << VAR_16, 12, VAR_15);


 FUNC_1(VAR_11, VAR_2, VAR_14);
}
