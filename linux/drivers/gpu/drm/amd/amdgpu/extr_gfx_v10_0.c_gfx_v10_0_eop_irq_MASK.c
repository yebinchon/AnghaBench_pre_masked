
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_ring {int me; int pipe; int queue; } ;
struct amdgpu_iv_entry {int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int num_compute_rings; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_ring*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
        struct amdgpu_irq_src *VAR_1,
        struct amdgpu_iv_entry *VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5, VAR_6;
 struct amdgpu_ring *VAR_7;

 FUNC_0("IH: CP EOP\n");
 VAR_4 = (VAR_2->ring_id & 0x0c) >> 2;
 VAR_5 = (VAR_2->ring_id & 0x03) >> 0;
 VAR_6 = (VAR_2->ring_id & 0x70) >> 4;

 switch (VAR_4) {
 case 0:
  if (VAR_5 == 0)
   FUNC_1(&VAR_0->gfx.gfx_ring[0]);
  else
   FUNC_1(&VAR_0->gfx.gfx_ring[1]);
  break;
 case 1:
 case 2:
  for (VAR_3 = 0; VAR_3 < VAR_0->gfx.num_compute_rings; VAR_3++) {
   VAR_7 = &VAR_0->gfx.compute_ring[VAR_3];



   if ((VAR_7->me == VAR_4) && (VAR_7->pipe == VAR_5) && (VAR_7->queue == VAR_6))
    FUNC_1(VAR_7);
  }
  break;
 }
 return 0;
}
