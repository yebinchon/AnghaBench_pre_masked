
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct amdgpu_ring {int queue; int pipe; int me; } ;
struct amdgpu_kiq {TYPE_2__* pmf; struct amdgpu_ring ring; } ;
struct TYPE_4__ {int queue_bitmap; } ;
struct TYPE_6__ {int num_compute_rings; int * compute_ring; TYPE_1__ mec; struct amdgpu_kiq kiq; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;
typedef int queue_mask ;
struct TYPE_5__ {int map_queues_size; int (* kiq_map_queues ) (struct amdgpu_ring*,int *) ;int (* kiq_set_resources ) (struct amdgpu_ring*,unsigned long long) ;scalar_t__ set_resources_size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_ring*,scalar_t__) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 int FUNC_5 (struct amdgpu_ring*,unsigned long long) ;
 int FUNC_6 (struct amdgpu_ring*,int *) ;
 int FUNC_7 (int,int ) ;

int FUNC_8(struct amdgpu_device *VAR_2)
{
 struct amdgpu_kiq *VAR_3 = &VAR_2->gfx.kiq;
 struct amdgpu_ring *VAR_4 = &VAR_2->gfx.kiq.ring;
 uint64_t VAR_5 = 0;
 int VAR_6, VAR_7;

 if (!VAR_3->pmf || !VAR_3->pmf->kiq_map_queues || !VAR_3->pmf->kiq_set_resources)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  if (!FUNC_7(VAR_7, VAR_2->gfx.mec.queue_bitmap))
   continue;




  if (FUNC_2(VAR_7 > (sizeof(VAR_5)*8))) {
   FUNC_0("Invalid KCQ enabled: %d\n", VAR_7);
   break;
  }

  VAR_5 |= (1ull << VAR_7);
 }

 FUNC_1("kiq ring mec %d pipe %d q %d\n", VAR_4->me, VAR_4->pipe,
       VAR_4->queue);

 VAR_6 = FUNC_3(VAR_4, VAR_3->pmf->map_queues_size *
     VAR_2->gfx.num_compute_rings +
     VAR_3->pmf->set_resources_size);
 if (VAR_6) {
  FUNC_0("Failed to lock KIQ (%d).\n", VAR_6);
  return VAR_6;
 }

 VAR_3->pmf->kiq_set_resources(VAR_4, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_2->gfx.num_compute_rings; VAR_7++)
  VAR_3->pmf->kiq_map_queues(VAR_4, &VAR_2->gfx.compute_ring[VAR_7]);

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6)
  FUNC_0("KCQ enable failed\n");

 return VAR_6;
}
