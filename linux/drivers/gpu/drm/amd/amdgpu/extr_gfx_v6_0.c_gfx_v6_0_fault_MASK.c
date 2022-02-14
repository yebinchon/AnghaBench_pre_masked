
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int sched; } ;
struct amdgpu_iv_entry {int ring_id; } ;
struct TYPE_2__ {struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct amdgpu_device *VAR_0,
      struct amdgpu_iv_entry *VAR_1)
{
 struct amdgpu_ring *VAR_2;

 switch (VAR_1->ring_id) {
 case 0:
  VAR_2 = &VAR_0->gfx.gfx_ring[0];
  break;
 case 1:
 case 2:
  VAR_2 = &VAR_0->gfx.compute_ring[VAR_1->ring_id - 1];
  break;
 default:
  return;
 }
 FUNC_0(&VAR_2->sched);
}
