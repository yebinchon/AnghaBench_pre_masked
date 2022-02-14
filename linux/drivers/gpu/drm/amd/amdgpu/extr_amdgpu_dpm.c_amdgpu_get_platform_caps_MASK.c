
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int usVoltageTime; int usBackbiasTime; int ulPlatformCaps; } ;
union power_info {TYPE_3__ pplib; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct amdgpu_mode_info {TYPE_4__* atom_context; } ;
struct TYPE_5__ {void* voltage_response_time; void* backbias_response_time; int platform_caps; } ;
struct TYPE_6__ {TYPE_1__ dpm; } ;
struct amdgpu_device {TYPE_2__ pm; struct amdgpu_mode_info mode_info; } ;
struct TYPE_8__ {scalar_t__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,int,int *,int *,int *,scalar_t__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct amdgpu_device *VAR_3)
{
 struct amdgpu_mode_info *VAR_4 = &VAR_3->mode_info;
 union power_info *VAR_5;
 int VAR_6 = FUNC_0(VAR_0, VAR_2);
 u16 VAR_7;
 u8 VAR_8, VAR_9;

 if (!FUNC_1(VAR_4->atom_context, VAR_6, ((void*)0),
       &VAR_8, &VAR_9, &VAR_7))
  return -VAR_1;
 VAR_5 = (union power_info *)(VAR_4->atom_context->bios + VAR_7);

 VAR_3->pm.dpm.platform_caps = FUNC_3(VAR_5->pplib.ulPlatformCaps);
 VAR_3->pm.dpm.backbias_response_time = FUNC_2(VAR_5->pplib.usBackbiasTime);
 VAR_3->pm.dpm.voltage_response_time = FUNC_2(VAR_5->pplib.usVoltageTime);

 return 0;
}
