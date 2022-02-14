
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct si_power_info {scalar_t__ pspp_notify_required; } ;
struct amdgpu_ps {int dummy; } ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_pcie_gen { ____Placeholder_amdgpu_pcie_gen } amdgpu_pcie_gen ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct amdgpu_device*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ps*) ;
 struct si_power_info* FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_5,
          struct amdgpu_ps *VAR_6,
          struct amdgpu_ps *VAR_7)
{
 struct si_power_info *VAR_8 = FUNC_3(VAR_5);
 enum amdgpu_pcie_gen VAR_9 = FUNC_2(VAR_5, VAR_6);
 u8 VAR_10;

 if (VAR_8->pspp_notify_required) {
  if (VAR_9 == VAR_1)
   VAR_10 = VAR_4;
  else if (VAR_9 == VAR_0)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_2;

  if ((VAR_10 == VAR_2) &&
      (FUNC_1(VAR_5) > 0))
   return;




 }
}
