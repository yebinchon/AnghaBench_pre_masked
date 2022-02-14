
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_power_info {scalar_t__ force_pcie_gen; int pspp_notify_required; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_pcie_gen { ____Placeholder_amdgpu_pcie_gen } amdgpu_pcie_gen ;




 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;
 struct si_power_info* FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_3,
            struct amdgpu_ps *VAR_4,
            struct amdgpu_ps *VAR_5)
{
 struct si_power_info *VAR_6 = FUNC_3(VAR_3);
 enum amdgpu_pcie_gen VAR_7 = FUNC_2(VAR_3, VAR_4);
 enum amdgpu_pcie_gen VAR_8;

 if (VAR_6->force_pcie_gen == VAR_0)
  VAR_8 = FUNC_2(VAR_3, VAR_5);
 else
  VAR_8 = VAR_6->force_pcie_gen;

 VAR_6->force_pcie_gen = VAR_0;
 VAR_6->pspp_notify_required = 0;
 if (VAR_7 > VAR_8) {
  switch (VAR_7) {
  default:
   VAR_6->force_pcie_gen = FUNC_1(VAR_3);
   break;
  }
 } else {
  if (VAR_7 < VAR_8)
   VAR_6->pspp_notify_required = 1;
 }
}
