
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int smu_version; struct amdgpu_device* adev; } ;
struct TYPE_4__ {int fw_version; int pp_feature; } ;
struct amdgpu_device {int rev_id; TYPE_2__ pm; TYPE_1__* pdev; } ;
struct TYPE_3__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 scalar_t__ FUNC_1 (struct pp_hwmgr*) ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_3(struct pp_hwmgr *VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_3->adev;

 FUNC_2(VAR_3, VAR_1);
 VAR_3->smu_version = FUNC_0(VAR_3);
 VAR_4->pm.fw_version = VAR_3->smu_version >> 8;

 if (VAR_4->rev_id < 0x8 && VAR_4->pdev->device != 0x15d8 &&
     VAR_4->pm.fw_version < 0x1e45)
  VAR_4->pm.pp_feature &= ~VAR_2;

 if (FUNC_1(VAR_3))
  return -VAR_0;

 return 0;
}
