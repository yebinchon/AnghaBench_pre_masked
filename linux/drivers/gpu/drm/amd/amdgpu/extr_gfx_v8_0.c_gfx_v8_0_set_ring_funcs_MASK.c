
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * funcs; } ;
struct TYPE_9__ {TYPE_3__ ring; } ;
struct TYPE_10__ {int num_gfx_rings; int num_compute_rings; TYPE_2__* compute_ring; TYPE_1__* gfx_ring; TYPE_4__ kiq; } ;
struct amdgpu_device {TYPE_5__ gfx; } ;
struct TYPE_7__ {int * funcs; } ;
struct TYPE_6__ {int * funcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_3)
{
 int VAR_4;

 VAR_3->gfx.kiq.ring.funcs = &VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_3->gfx.num_gfx_rings; VAR_4++)
  VAR_3->gfx.gfx_ring[VAR_4].funcs = &VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_3->gfx.num_compute_rings; VAR_4++)
  VAR_3->gfx.compute_ring[VAR_4].funcs = &VAR_0;
}
