
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;
typedef enum amdgpu_pcie_gen { ____Placeholder_amdgpu_pcie_gen } amdgpu_pcie_gen ;





 int VAR_0 ;
 int VAR_1 ;

enum amdgpu_pcie_gen FUNC_0(struct amdgpu_device *VAR_2,
       u32 VAR_3,
       enum amdgpu_pcie_gen VAR_4,
       enum amdgpu_pcie_gen VAR_5)
{
 switch (VAR_4) {
 case 130:
  return 130;
 case 129:
  return 129;
 case 128:
  return 128;
 default:
  if ((VAR_3 & VAR_1) &&
      (VAR_5 == 128))
   return 128;
  else if ((VAR_3 & VAR_0) &&
    (VAR_5 == 129))
   return 129;
  else
   return 130;
 }
 return 130;
}
