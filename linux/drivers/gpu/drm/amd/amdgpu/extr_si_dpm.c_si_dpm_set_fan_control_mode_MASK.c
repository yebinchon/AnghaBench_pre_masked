
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ ucode_fan_control; } ;
struct TYPE_5__ {TYPE_1__ fan; } ;
struct TYPE_6__ {TYPE_2__ dpm; } ;
struct amdgpu_device {TYPE_3__ pm; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, u32 VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_0;

 if (VAR_1) {

  if (VAR_2->pm.dpm.fan.ucode_fan_control)
   FUNC_2(VAR_2);
  FUNC_1(VAR_2, VAR_1);
 } else {

  if (VAR_2->pm.dpm.fan.ucode_fan_control)
   FUNC_3(VAR_2);
  else
   FUNC_0(VAR_2);
 }
}
