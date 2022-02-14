
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_gfx_rings; int num_compute_rings; int * compute_ring; int * gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 int VAR_1;
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 for (VAR_1 = 0; VAR_1 < VAR_2->gfx.num_gfx_rings; VAR_1++)
  FUNC_1(&VAR_2->gfx.gfx_ring[VAR_1]);
 for (VAR_1 = 0; VAR_1 < VAR_2->gfx.num_compute_rings; VAR_1++)
  FUNC_1(&VAR_2->gfx.compute_ring[VAR_1]);

 FUNC_0(VAR_2);

 return 0;
}
