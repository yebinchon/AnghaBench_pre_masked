
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_iv_entry {int ring_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_2__ {int * compute_ring; int * gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_0,
       struct amdgpu_irq_src *VAR_1,
       struct amdgpu_iv_entry *VAR_2)
{
 switch (VAR_2->ring_id) {
 case 0:
  FUNC_0(&VAR_0->gfx.gfx_ring[0]);
  break;
 case 1:
 case 2:
  FUNC_0(&VAR_0->gfx.compute_ring[VAR_2->ring_id - 1]);
  break;
 default:
  break;
 }
 return 0;
}
