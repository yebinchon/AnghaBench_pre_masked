
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int smu_version; struct amdgpu_device* adev; } ;
struct amdgpu_device {scalar_t__ asic_type; int rev_id; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct pp_hwmgr *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 if ((VAR_2->asic_type == VAR_0) &&
     (VAR_2->rev_id != 0x15d8) &&
     (VAR_1->smu_version >= 0x41e2b))
  return 1;
 else
  return 0;
}
