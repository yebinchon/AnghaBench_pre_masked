
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct amdgpu_ring {int me; int pipe; } ;
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
 u8 VAR_3, VAR_4;
 struct amdgpu_ring *VAR_5;
 int VAR_6;

 FUNC_0("IH: CP EOP\n");
 VAR_3 = (VAR_2->ring_id & 0x0c) >> 2;
 VAR_4 = (VAR_2->ring_id & 0x03) >> 0;
 switch (VAR_3) {
 case 0:
  FUNC_1(&VAR_0->gfx.gfx_ring[0]);
  break;
 case 1:
 case 2:
  for (VAR_6 = 0; VAR_6 < VAR_0->gfx.num_compute_rings; VAR_6++) {
   VAR_5 = &VAR_0->gfx.compute_ring[VAR_6];
   if ((VAR_5->me == VAR_3) && (VAR_5->pipe == VAR_4))
    FUNC_1(VAR_5);
  }
  break;
 }
 return 0;
}
