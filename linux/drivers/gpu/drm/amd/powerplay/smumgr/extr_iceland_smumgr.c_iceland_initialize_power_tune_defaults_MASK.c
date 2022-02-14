
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ smu_backend; } ;
struct iceland_smumgr {int * power_tune_defaults; } ;
struct amdgpu_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_3)
{
 struct iceland_smumgr *VAR_4 = (struct iceland_smumgr *)(VAR_3->smu_backend);
 struct amdgpu_device *VAR_5 = VAR_3->adev;
 uint32_t VAR_6;

 VAR_6 = VAR_5->pdev->device;

 switch (VAR_6) {
 case 131:
 case 128:
  VAR_4->power_tune_defaults = &VAR_2;
  break;

 case 130:
 case 129:
  VAR_4->power_tune_defaults = &VAR_1;
  break;
 default:
  VAR_4->power_tune_defaults = &VAR_0;
  FUNC_0("Unknown V.I. Device ID.\n");
  break;
 }
 return;
}
