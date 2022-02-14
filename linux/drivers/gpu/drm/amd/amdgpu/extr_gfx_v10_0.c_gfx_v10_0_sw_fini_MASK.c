
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ load_type; } ;
struct TYPE_4__ {int irq; int ring; } ;
struct TYPE_5__ {int num_gfx_rings; int num_compute_rings; TYPE_1__ kiq; int * compute_ring; int * gfx_ring; } ;
struct amdgpu_device {TYPE_3__ firmware; TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_11(void *VAR_1)
{
 int VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_3->gfx.num_gfx_rings; VAR_2++)
  FUNC_3(&VAR_3->gfx.gfx_ring[VAR_2]);
 for (VAR_2 = 0; VAR_2 < VAR_3->gfx.num_compute_rings; VAR_2++)
  FUNC_3(&VAR_3->gfx.compute_ring[VAR_2]);

 FUNC_2(VAR_3);
 FUNC_1(&VAR_3->gfx.kiq.ring, &VAR_3->gfx.kiq.irq);
 FUNC_0(VAR_3);

 FUNC_8(VAR_3);
 FUNC_4(VAR_3);
 FUNC_6(VAR_3);
 FUNC_10(VAR_3);
 FUNC_7(VAR_3);

 if (VAR_3->firmware.load_type == VAR_0)
  FUNC_9(VAR_3);

 FUNC_5(VAR_3);

 return 0;
}
