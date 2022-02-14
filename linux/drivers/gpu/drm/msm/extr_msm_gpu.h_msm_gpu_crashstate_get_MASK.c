
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_gpu_state {int ref; } ;
struct msm_gpu {TYPE_1__* dev; struct msm_gpu_state* crashstate; } ;
struct TYPE_2__ {int struct_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct msm_gpu_state *FUNC_3(struct msm_gpu *VAR_0)
{
 struct msm_gpu_state *VAR_1 = ((void*)0);

 FUNC_1(&VAR_0->dev->struct_mutex);

 if (VAR_0->crashstate) {
  FUNC_0(&VAR_0->crashstate->ref);
  VAR_1 = VAR_0->crashstate;
 }

 FUNC_2(&VAR_0->dev->struct_mutex);

 return VAR_1;
}
