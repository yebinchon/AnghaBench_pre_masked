
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_gfx_rings; int num_compute_rings; TYPE_1__* compute_ring; TYPE_2__* gfx_ring; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
struct TYPE_5__ {int * funcs; } ;
struct TYPE_4__ {int * funcs; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->gfx.num_gfx_rings; VAR_3++)
  VAR_2->gfx.gfx_ring[VAR_3].funcs = &VAR_1;
 for (VAR_3 = 0; VAR_3 < VAR_2->gfx.num_compute_rings; VAR_3++)
  VAR_2->gfx.compute_ring[VAR_3].funcs = &VAR_0;
}
