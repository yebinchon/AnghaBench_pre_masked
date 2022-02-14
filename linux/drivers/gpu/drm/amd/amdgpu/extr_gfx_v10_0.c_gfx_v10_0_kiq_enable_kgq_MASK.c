
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {TYPE_3__ sched; } ;
struct amdgpu_kiq {TYPE_1__* pmf; struct amdgpu_ring ring; } ;
struct TYPE_5__ {int num_gfx_rings; int * gfx_ring; struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_4__ {int map_queues_size; int (* kiq_map_queues ) (struct amdgpu_ring*,int *) ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_ring*,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_ring*,int *) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_1)
{
 struct amdgpu_kiq *VAR_2 = &VAR_1->gfx.kiq;
 struct amdgpu_ring *VAR_3 = &VAR_1->gfx.kiq.ring;
 int VAR_4, VAR_5;

 if (!VAR_2->pmf || !VAR_2->pmf->kiq_map_queues)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3, VAR_2->pmf->map_queues_size *
     VAR_1->gfx.num_gfx_rings);
 if (VAR_4) {
  FUNC_0("Failed to lock KIQ (%d).\n", VAR_4);
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1->gfx.num_gfx_rings; VAR_5++)
  VAR_2->pmf->kiq_map_queues(VAR_3, &VAR_1->gfx.gfx_ring[VAR_5]);

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0("kfq enable failed\n");
  VAR_3->sched.ready = 0;
 }
 return VAR_4;
}
