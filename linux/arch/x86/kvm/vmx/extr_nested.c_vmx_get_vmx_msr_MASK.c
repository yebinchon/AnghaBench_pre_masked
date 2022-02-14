
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct nested_vmx_msrs {int basic; int cr0_fixed0; int cr0_fixed1; int cr4_fixed0; int cr4_fixed1; int vmcs_enum; int ept_caps; int vmfunc_controls; int vpid_caps; int secondary_ctls_high; int secondary_ctls_low; int misc_high; int misc_low; int entry_ctls_high; int entry_ctls_low; int exit_ctls_high; int exit_ctls_low; int procbased_ctls_high; int procbased_ctls_low; int pinbased_ctls_high; int pinbased_ctls_low; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct nested_vmx_msrs *VAR_4, u32 VAR_5, u64 *VAR_6)
{
 switch (VAR_5) {
 case 145:
  *VAR_6 = VAR_4->basic;
  break;
 case 131:
 case 136:
  *VAR_6 = FUNC_0(
   VAR_4->pinbased_ctls_low,
   VAR_4->pinbased_ctls_high);
  if (VAR_5 == 136)
   *VAR_6 |= VAR_1;
  break;
 case 130:
 case 135:
  *VAR_6 = FUNC_0(
   VAR_4->procbased_ctls_low,
   VAR_4->procbased_ctls_high);
  if (VAR_5 == 135)
   *VAR_6 |= VAR_0;
  break;
 case 132:
 case 138:
  *VAR_6 = FUNC_0(
   VAR_4->exit_ctls_low,
   VAR_4->exit_ctls_high);
  if (VAR_5 == 138)
   *VAR_6 |= VAR_3;
  break;
 case 133:
 case 140:
  *VAR_6 = FUNC_0(
   VAR_4->entry_ctls_low,
   VAR_4->entry_ctls_high);
  if (VAR_5 == 140)
   *VAR_6 |= VAR_2;
  break;
 case 137:
  *VAR_6 = FUNC_0(
   VAR_4->misc_low,
   VAR_4->misc_high);
  break;
 case 144:
  *VAR_6 = VAR_4->cr0_fixed0;
  break;
 case 143:
  *VAR_6 = VAR_4->cr0_fixed1;
  break;
 case 142:
  *VAR_6 = VAR_4->cr4_fixed0;
  break;
 case 141:
  *VAR_6 = VAR_4->cr4_fixed1;
  break;
 case 129:
  *VAR_6 = VAR_4->vmcs_enum;
  break;
 case 134:
  *VAR_6 = FUNC_0(
   VAR_4->secondary_ctls_low,
   VAR_4->secondary_ctls_high);
  break;
 case 139:
  *VAR_6 = VAR_4->ept_caps |
   ((u64)VAR_4->vpid_caps << 32);
  break;
 case 128:
  *VAR_6 = VAR_4->vmfunc_controls;
  break;
 default:
  return 1;
 }

 return 0;
}
