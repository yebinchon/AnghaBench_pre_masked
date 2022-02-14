
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_table_ptr; int cp_table_gpu_addr; scalar_t__ cp_table_obj; int cs_ptr; int clear_state_gpu_addr; scalar_t__ clear_state_obj; int sr_ptr; int save_restore_gpu_addr; scalar_t__ save_restore_obj; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (scalar_t__*,int *,void**) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{

 if (VAR_0->gfx.rlc.save_restore_obj) {
  FUNC_0(&VAR_0->gfx.rlc.save_restore_obj,
          &VAR_0->gfx.rlc.save_restore_gpu_addr,
          (void **)&VAR_0->gfx.rlc.sr_ptr);
 }


 FUNC_0(&VAR_0->gfx.rlc.clear_state_obj,
         &VAR_0->gfx.rlc.clear_state_gpu_addr,
         (void **)&VAR_0->gfx.rlc.cs_ptr);


 FUNC_0(&VAR_0->gfx.rlc.cp_table_obj,
         &VAR_0->gfx.rlc.cp_table_gpu_addr,
         (void **)&VAR_0->gfx.rlc.cp_table_ptr);
}
