
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; } ;
struct TYPE_3__ {int (* smu_i2c_bus_access ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;
 struct amdgpu_device* FUNC_1 (struct i2c_adapter*) ;

__attribute__((used)) static bool FUNC_2(struct i2c_adapter *VAR_0)
{
 struct amdgpu_device *VAR_1 = FUNC_1(VAR_0);


 if (!VAR_1->powerplay.pp_funcs->smu_i2c_bus_access)
  goto Fail;


 if (!VAR_1->powerplay.pp_funcs->smu_i2c_bus_access(VAR_1->powerplay.pp_handle,
            0))
  return 1;

Fail:
 return 0;
}
