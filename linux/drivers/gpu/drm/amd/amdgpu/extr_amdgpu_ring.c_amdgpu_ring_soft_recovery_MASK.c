
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_ring {TYPE_1__* funcs; TYPE_2__* adev; } ;
typedef int ktime_t ;
struct TYPE_4__ {int gpu_reset_counter; } ;
struct TYPE_3__ {int (* soft_recovery ) (struct amdgpu_ring*,unsigned int) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct amdgpu_ring*,unsigned int) ;

bool FUNC_8(struct amdgpu_ring *VAR_0, unsigned int VAR_1,
          struct dma_fence *VAR_2)
{
 ktime_t VAR_3 = FUNC_3(FUNC_4(), 10000);

 if (FUNC_0(VAR_0->adev) || !VAR_0->funcs->soft_recovery || !VAR_2)
  return 0;

 FUNC_1(&VAR_0->adev->gpu_reset_counter);
 while (!FUNC_2(VAR_2) &&
        FUNC_6(FUNC_5(VAR_3, FUNC_4())) > 0)
  VAR_0->funcs->soft_recovery(VAR_0, VAR_1);

 return FUNC_2(VAR_2);
}
