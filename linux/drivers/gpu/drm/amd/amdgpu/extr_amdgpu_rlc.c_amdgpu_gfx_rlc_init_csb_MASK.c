
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int clear_state_size; int* cs_ptr; int clear_state_obj; TYPE_1__* funcs; int clear_state_gpu_addr; } ;
struct TYPE_6__ {TYPE_2__ rlc; } ;
struct amdgpu_device {TYPE_3__ gfx; int dev; } ;
struct TYPE_4__ {int (* get_csb_size ) (struct amdgpu_device*) ;int (* get_csb_buffer ) (struct amdgpu_device*,int volatile*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*,int volatile*) ;

int FUNC_8(struct amdgpu_device *VAR_2)
{
 volatile u32 *VAR_3;
 u32 VAR_4;
 int VAR_5;


 VAR_2->gfx.rlc.clear_state_size = VAR_4 = VAR_2->gfx.rlc.funcs->get_csb_size(VAR_2);
 VAR_5 = FUNC_0(VAR_2, VAR_4 * 4, VAR_1,
          VAR_0,
          &VAR_2->gfx.rlc.clear_state_obj,
          &VAR_2->gfx.rlc.clear_state_gpu_addr,
          (void **)&VAR_2->gfx.rlc.cs_ptr);
 if (VAR_5) {
  FUNC_5(VAR_2->dev, "(%d) failed to create rlc csb bo\n", VAR_5);
  FUNC_4(VAR_2);
  return VAR_5;
 }


 VAR_3 = VAR_2->gfx.rlc.cs_ptr;
 VAR_2->gfx.rlc.funcs->get_csb_buffer(VAR_2, VAR_3);
 FUNC_1(VAR_2->gfx.rlc.clear_state_obj);
 FUNC_2(VAR_2->gfx.rlc.clear_state_obj);
 FUNC_3(VAR_2->gfx.rlc.clear_state_obj);

 return 0;
}
