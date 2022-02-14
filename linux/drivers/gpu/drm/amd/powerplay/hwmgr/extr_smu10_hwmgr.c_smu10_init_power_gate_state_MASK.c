
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu10_hwmgr {int vcn_power_gated; int isp_tileA_power_gated; int isp_tileB_power_gated; } ;
struct pp_hwmgr {struct amdgpu_device* adev; scalar_t__ backend; } ;
struct amdgpu_device {int pg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_2)
{
 struct smu10_hwmgr *VAR_3 = (struct smu10_hwmgr *)(VAR_2->backend);
 struct amdgpu_device *VAR_4 = VAR_2->adev;

 VAR_3->vcn_power_gated = 1;
 VAR_3->isp_tileA_power_gated = 1;
 VAR_3->isp_tileB_power_gated = 1;

 if (VAR_4->pg_flags & VAR_0)
  return FUNC_0(VAR_2,
          VAR_1,
          1);
 else
  return 0;
}
