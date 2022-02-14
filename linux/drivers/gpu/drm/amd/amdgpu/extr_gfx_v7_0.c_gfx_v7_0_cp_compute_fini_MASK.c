
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int mqd_obj; } ;
struct TYPE_2__ {int num_compute_rings; struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->gfx.num_compute_rings; VAR_1++) {
  struct amdgpu_ring *VAR_2 = &VAR_0->gfx.compute_ring[VAR_1];

  FUNC_0(&VAR_2->mqd_obj, ((void*)0), ((void*)0));
 }
}
