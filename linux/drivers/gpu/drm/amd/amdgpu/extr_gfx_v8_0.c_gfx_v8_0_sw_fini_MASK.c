
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cp_table_ptr; int cp_table_gpu_addr; int cp_table_obj; int cs_ptr; int clear_state_gpu_addr; int clear_state_obj; } ;
struct TYPE_4__ {int irq; int ring; } ;
struct TYPE_6__ {int num_gfx_rings; int num_compute_rings; TYPE_2__ rlc; TYPE_1__ kiq; int * compute_ring; int * gfx_ring; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gfx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_2;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->gfx.num_gfx_rings; VAR_4++)
  FUNC_5(&VAR_3->gfx.gfx_ring[VAR_4]);
 for (VAR_4 = 0; VAR_4 < VAR_3->gfx.num_compute_rings; VAR_4++)
  FUNC_5(&VAR_3->gfx.compute_ring[VAR_4]);

 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->gfx.kiq.ring, &VAR_3->gfx.kiq.irq);
 FUNC_1(VAR_3);

 FUNC_7(VAR_3);
 FUNC_4(VAR_3);
 FUNC_0(&VAR_3->gfx.rlc.clear_state_obj,
    &VAR_3->gfx.rlc.clear_state_gpu_addr,
    (void **)&VAR_3->gfx.rlc.cs_ptr);
 if ((VAR_3->asic_type == VAR_0) ||
     (VAR_3->asic_type == VAR_1)) {
  FUNC_0(&VAR_3->gfx.rlc.cp_table_obj,
    &VAR_3->gfx.rlc.cp_table_gpu_addr,
    (void **)&VAR_3->gfx.rlc.cp_table_ptr);
 }
 FUNC_6(VAR_3);

 return 0;
}
