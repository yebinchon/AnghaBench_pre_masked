
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_ring {int me; int pipe; int sched; } ;
struct amdgpu_iv_entry {int ring_id; } ;
struct TYPE_4__ {int num_compute_rings; struct amdgpu_ring* compute_ring; TYPE_1__* gfx_ring; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_3__ {int sched; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0,
      struct amdgpu_iv_entry *VAR_1)
{
 struct amdgpu_ring *VAR_2;
 u8 VAR_3, VAR_4;
 int VAR_5;

 VAR_3 = (VAR_1->ring_id & 0x0c) >> 2;
 VAR_4 = (VAR_1->ring_id & 0x03) >> 0;
 switch (VAR_3) {
 case 0:
  FUNC_0(&VAR_0->gfx.gfx_ring[0].sched);
  break;
 case 1:
 case 2:
  for (VAR_5 = 0; VAR_5 < VAR_0->gfx.num_compute_rings; VAR_5++) {
   VAR_2 = &VAR_0->gfx.compute_ring[VAR_5];
   if ((VAR_2->me == VAR_3) && (VAR_2->pipe == VAR_4))
    FUNC_0(&VAR_2->sched);
  }
  break;
 }
}
