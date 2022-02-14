
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {int in_baco_reset; int dev; TYPE_1__ powerplay; } ;
struct amd_pm_funcs {scalar_t__ (* set_asic_baco_state ) (void*,int) ;int get_asic_baco_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (void*,int) ;
 scalar_t__ FUNC_2 (void*,int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_2)
{
 void *VAR_3 = VAR_2->powerplay.pp_handle;
 const struct amd_pm_funcs *VAR_4 = VAR_2->powerplay.pp_funcs;

 if (!VAR_4 ||!VAR_4->get_asic_baco_state ||!VAR_4->set_asic_baco_state)
  return -VAR_1;


 if (VAR_4->set_asic_baco_state(VAR_3, 1))
  return -VAR_0;


 if (VAR_4->set_asic_baco_state(VAR_3, 0))
  return -VAR_0;

 FUNC_0(VAR_2->dev, "GPU BACO reset\n");

 VAR_2->in_baco_reset = 1;

 return 0;
}
