
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ smu_backend; } ;
struct ci_smumgr {int * power_tune_defaults; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct pp_hwmgr *VAR_4)
{
 struct ci_smumgr *VAR_5 = (struct ci_smumgr *)(VAR_4->smu_backend);
 struct amdgpu_device *VAR_6 = VAR_4->adev;
 uint32_t VAR_7;

 VAR_7 = VAR_6->pdev->device;

 switch (VAR_7) {
 case 0x67BA:
 case 0x66B1:
  VAR_5->power_tune_defaults = &VAR_1;
  break;
 case 0x67B8:
 case 0x66B0:
  VAR_5->power_tune_defaults = &VAR_2;
  break;
 case 0x6640:
 case 0x6641:
 case 0x6646:
 case 0x6647:
  VAR_5->power_tune_defaults = &VAR_3;
  break;
 case 0x6649:
 case 0x6650:
 case 0x6651:
 case 0x6658:
 case 0x665C:
 case 0x665D:
 case 0x67A0:
 case 0x67A1:
 case 0x67A2:
 case 0x67A8:
 case 0x67A9:
 case 0x67AA:
 case 0x67B9:
 case 0x67BE:
 default:
  VAR_5->power_tune_defaults = &VAR_0;
  break;
 }
}
