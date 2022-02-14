
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clear_state_obj; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->gfx.rlc.clear_state_obj)
  return;

 VAR_1 = FUNC_0(VAR_0->gfx.rlc.clear_state_obj, 1);
 if (FUNC_3(VAR_1 == 0)) {
  FUNC_1(VAR_0->gfx.rlc.clear_state_obj);
  FUNC_2(VAR_0->gfx.rlc.clear_state_obj);
 }
}
