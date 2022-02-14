
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int dummy; } ;
struct amdgpu_kiq {TYPE_1__* pmf; struct amdgpu_ring ring; } ;
struct TYPE_4__ {int num_compute_rings; int * compute_ring; struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_3__ {int unmap_queues_size; int (* kiq_unmap_queues ) (struct amdgpu_ring*,int *,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct amdgpu_ring*,int) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_ring*,int *,int ,int ,int ) ;

int FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_kiq *VAR_4 = &VAR_3->gfx.kiq;
 struct amdgpu_ring *VAR_5 = &VAR_4->ring;
 int VAR_6;

 if (!VAR_4->pmf || !VAR_4->pmf->kiq_unmap_queues)
  return -VAR_0;

 if (FUNC_0(VAR_5, VAR_4->pmf->unmap_queues_size *
     VAR_3->gfx.num_compute_rings))
  return -VAR_1;

 for (VAR_6 = 0; VAR_6 < VAR_3->gfx.num_compute_rings; VAR_6++)
  VAR_4->pmf->kiq_unmap_queues(VAR_5, &VAR_3->gfx.compute_ring[VAR_6],
        VAR_2, 0, 0);

 return FUNC_1(VAR_5);
}
