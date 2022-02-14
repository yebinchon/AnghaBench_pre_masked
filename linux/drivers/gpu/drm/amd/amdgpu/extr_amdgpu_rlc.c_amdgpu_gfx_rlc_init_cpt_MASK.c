
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cp_table_obj; int cp_table_ptr; int cp_table_gpu_addr; int cp_table_size; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int *,int *,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ,char*,int) ;

int FUNC_6(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_2->gfx.rlc.cp_table_size,
          VAR_1, VAR_0,
          &VAR_2->gfx.rlc.cp_table_obj,
          &VAR_2->gfx.rlc.cp_table_gpu_addr,
          (void **)&VAR_2->gfx.rlc.cp_table_ptr);
 if (VAR_3) {
  FUNC_5(VAR_2->dev, "(%d) failed to create cp table bo\n", VAR_3);
  FUNC_3(VAR_2);
  return VAR_3;
 }


 FUNC_4(VAR_2);
 FUNC_1(VAR_2->gfx.rlc.cp_table_obj);
 FUNC_2(VAR_2->gfx.rlc.cp_table_obj);

 return 0;
}
