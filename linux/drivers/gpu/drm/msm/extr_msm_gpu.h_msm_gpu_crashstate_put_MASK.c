
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct msm_gpu {TYPE_2__* dev; int * crashstate; TYPE_1__* funcs; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct TYPE_3__ {scalar_t__ (* gpu_state_put ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct msm_gpu *VAR_0)
{
 FUNC_0(&VAR_0->dev->struct_mutex);

 if (VAR_0->crashstate) {
  if (VAR_0->funcs->gpu_state_put(VAR_0->crashstate))
   VAR_0->crashstate = ((void*)0);
 }

 FUNC_1(&VAR_0->dev->struct_mutex);
}
