
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int dummy; } ;
struct TYPE_4__ {struct amdgpu_ring ring; } ;
struct TYPE_3__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_2__ kiq; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (struct amdgpu_ring*) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;
 struct amdgpu_ring *VAR_3;


 VAR_3 = &VAR_0->gfx.gfx_ring[0];
 VAR_1 = FUNC_0(VAR_3);
 if (VAR_1)
  return VAR_1;

 VAR_3 = &VAR_0->gfx.kiq.ring;
 VAR_1 = FUNC_0(VAR_3);
 if (VAR_1)
  return VAR_1;

 for (VAR_2 = 0; VAR_2 < VAR_0->gfx.num_compute_rings; VAR_2++) {
  VAR_3 = &VAR_0->gfx.compute_ring[VAR_2];
  FUNC_0(VAR_3);
 }

 return 0;
}
