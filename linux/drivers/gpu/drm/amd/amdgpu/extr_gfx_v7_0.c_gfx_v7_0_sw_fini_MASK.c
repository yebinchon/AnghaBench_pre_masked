
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_table_ptr; int cp_table_gpu_addr; int cp_table_obj; scalar_t__ cp_table_size; int cs_ptr; int clear_state_gpu_addr; int clear_state_obj; } ;
struct TYPE_4__ {int num_gfx_rings; int num_compute_rings; TYPE_1__ rlc; int * compute_ring; int * gfx_ring; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_6(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->gfx.num_gfx_rings; VAR_2++)
  FUNC_2(&VAR_1->gfx.gfx_ring[VAR_2]);
 for (VAR_2 = 0; VAR_2 < VAR_1->gfx.num_compute_rings; VAR_2++)
  FUNC_2(&VAR_1->gfx.compute_ring[VAR_2]);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
 FUNC_5(VAR_1);
 FUNC_0(&VAR_1->gfx.rlc.clear_state_obj,
    &VAR_1->gfx.rlc.clear_state_gpu_addr,
    (void **)&VAR_1->gfx.rlc.cs_ptr);
 if (VAR_1->gfx.rlc.cp_table_size) {
  FUNC_0(&VAR_1->gfx.rlc.cp_table_obj,
    &VAR_1->gfx.rlc.cp_table_gpu_addr,
    (void **)&VAR_1->gfx.rlc.cp_table_ptr);
 }
 FUNC_4(VAR_1);

 return 0;
}
