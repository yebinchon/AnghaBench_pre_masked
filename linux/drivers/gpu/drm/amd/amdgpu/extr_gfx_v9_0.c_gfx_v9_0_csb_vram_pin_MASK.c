
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int clear_state_obj; int clear_state_gpu_addr; } ;
struct TYPE_3__ {TYPE_2__ rlc; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->gfx.rlc.clear_state_obj, 0);
 if (FUNC_4(VAR_2 != 0))
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->gfx.rlc.clear_state_obj,
   VAR_0);
 if (!VAR_2)
  VAR_1->gfx.rlc.clear_state_gpu_addr =
   FUNC_0(VAR_1->gfx.rlc.clear_state_obj);

 FUNC_3(VAR_1->gfx.rlc.clear_state_obj);

 return VAR_2;
}
