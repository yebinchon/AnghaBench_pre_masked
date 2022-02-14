
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* sr_ptr; int* reg_list; int reg_list_size; int save_restore_obj; int save_restore_gpu_addr; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct amdgpu_device *VAR_2, u32 VAR_3)
{
 const u32 *VAR_4;
 volatile u32 *VAR_5;
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_2, VAR_3 * 4, VAR_1,
          VAR_0,
          &VAR_2->gfx.rlc.save_restore_obj,
          &VAR_2->gfx.rlc.save_restore_gpu_addr,
          (void **)&VAR_2->gfx.rlc.sr_ptr);
 if (VAR_7) {
  FUNC_5(VAR_2->dev, "(%d) create RLC sr bo failed\n", VAR_7);
  FUNC_3(VAR_2);
  return VAR_7;
 }


 VAR_4 = VAR_2->gfx.rlc.reg_list;
 VAR_5 = VAR_2->gfx.rlc.sr_ptr;
 for (VAR_6 = 0; VAR_6 < VAR_2->gfx.rlc.reg_list_size; VAR_6++)
  VAR_5[VAR_6] = FUNC_4(VAR_4[VAR_6]);
 FUNC_1(VAR_2->gfx.rlc.save_restore_obj);
 FUNC_2(VAR_2->gfx.rlc.save_restore_obj);

 return 0;
}
