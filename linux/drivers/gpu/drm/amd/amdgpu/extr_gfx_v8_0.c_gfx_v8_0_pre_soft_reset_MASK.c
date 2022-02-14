
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct amdgpu_ring {int queue; int pipe; int me; } ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_2__ rlc; scalar_t__ grbm_soft_reset; int srbm_soft_reset; } ;
struct amdgpu_device {int srbm_mutex; TYPE_3__ gfx; } ;
struct TYPE_4__ {int (* stop ) (struct amdgpu_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct amdgpu_device*,int) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(void *VAR_6)
{
 struct amdgpu_device *VAR_7 = (struct amdgpu_device *)VAR_6;
 u32 VAR_8 = 0;

 if ((!VAR_7->gfx.grbm_soft_reset) &&
     (!VAR_7->gfx.srbm_soft_reset))
  return 0;

 VAR_8 = VAR_7->gfx.grbm_soft_reset;


 VAR_7->gfx.rlc.funcs->stop(VAR_7);

 if (FUNC_0(VAR_8, VAR_0, VAR_1) ||
     FUNC_0(VAR_8, VAR_0, VAR_5))

  FUNC_2(VAR_7, 0);

 if (FUNC_0(VAR_8, VAR_0, VAR_1) ||
     FUNC_0(VAR_8, VAR_0, VAR_3) ||
     FUNC_0(VAR_8, VAR_0, VAR_2) ||
     FUNC_0(VAR_8, VAR_0, VAR_4)) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_7->gfx.num_compute_rings; VAR_9++) {
   struct amdgpu_ring *VAR_10 = &VAR_7->gfx.compute_ring[VAR_9];

   FUNC_4(&VAR_7->srbm_mutex);
   FUNC_7(VAR_7, VAR_10->me, VAR_10->pipe, VAR_10->queue, 0);
   FUNC_3(VAR_7, 2);
   FUNC_7(VAR_7, 0, 0, 0, 0);
   FUNC_5(&VAR_7->srbm_mutex);
  }

  FUNC_1(VAR_7, 0);
 }

       return 0;
}
