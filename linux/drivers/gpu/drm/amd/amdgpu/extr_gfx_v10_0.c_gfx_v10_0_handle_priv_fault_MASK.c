
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_ring {int me; int pipe; int queue; int sched; } ;
struct amdgpu_iv_entry {int ring_id; } ;
struct TYPE_2__ {int num_gfx_rings; int num_compute_rings; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0,
     struct amdgpu_iv_entry *VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 struct amdgpu_ring *VAR_5;
 int VAR_6;

 VAR_2 = (VAR_1->ring_id & 0x0c) >> 2;
 VAR_3 = (VAR_1->ring_id & 0x03) >> 0;
 VAR_4 = (VAR_1->ring_id & 0x70) >> 4;

 switch (VAR_2) {
 case 0:
  for (VAR_6 = 0; VAR_6 < VAR_0->gfx.num_gfx_rings; VAR_6++) {
   VAR_5 = &VAR_0->gfx.gfx_ring[VAR_6];

   if (VAR_5->me == VAR_2 && VAR_5->pipe == VAR_3)
    FUNC_1(&VAR_5->sched);
  }
  break;
 case 1:
 case 2:
  for (VAR_6 = 0; VAR_6 < VAR_0->gfx.num_compute_rings; VAR_6++) {
   VAR_5 = &VAR_0->gfx.compute_ring[VAR_6];
   if (VAR_5->me == VAR_2 && VAR_5->pipe == VAR_3 &&
       VAR_5->queue == VAR_4)
    FUNC_1(&VAR_5->sched);
  }
  break;
 default:
  FUNC_0();
 }
}
