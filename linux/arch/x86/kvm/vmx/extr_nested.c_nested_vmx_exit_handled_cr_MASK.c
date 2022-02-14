
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {unsigned long cr0_guest_host_mask; unsigned long cr0_read_shadow; int cr3_target_count; unsigned long cr3_target_value0; unsigned long cr3_target_value1; unsigned long cr3_target_value2; unsigned long cr3_target_value3; unsigned long cr4_guest_host_mask; unsigned long cr4_read_shadow; int cpu_based_vm_exec_control; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,int) ;
 int FUNC_1 (struct vmcs12*,int ) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_7,
 struct vmcs12 *VAR_8)
{
 unsigned long VAR_9 = FUNC_2(VAR_4);
 int VAR_10 = VAR_9 & 15;
 int VAR_11;
 unsigned long VAR_12;

 switch ((VAR_9 >> 4) & 3) {
 case 0:
  VAR_11 = (VAR_9 >> 8) & 15;
  VAR_12 = FUNC_0(VAR_7, VAR_11);
  switch (VAR_10) {
  case 0:
   if (VAR_8->cr0_guest_host_mask &
       (VAR_12 ^ VAR_8->cr0_read_shadow))
    return 1;
   break;
  case 3:
   if ((VAR_8->cr3_target_count >= 1 &&
     VAR_8->cr3_target_value0 == VAR_12) ||
    (VAR_8->cr3_target_count >= 2 &&
     VAR_8->cr3_target_value1 == VAR_12) ||
    (VAR_8->cr3_target_count >= 3 &&
     VAR_8->cr3_target_value2 == VAR_12) ||
    (VAR_8->cr3_target_count >= 4 &&
     VAR_8->cr3_target_value3 == VAR_12))
    return 0;
   if (FUNC_1(VAR_8, VAR_0))
    return 1;
   break;
  case 4:
   if (VAR_8->cr4_guest_host_mask &
       (VAR_8->cr4_read_shadow ^ VAR_12))
    return 1;
   break;
  case 8:
   if (FUNC_1(VAR_8, VAR_2))
    return 1;
   break;
  }
  break;
 case 2:
  if ((VAR_8->cr0_guest_host_mask & VAR_6) &&
      (VAR_8->cr0_read_shadow & VAR_6))
   return 1;
  break;
 case 1:
  switch (VAR_10) {
  case 3:
   if (VAR_8->cpu_based_vm_exec_control &
       VAR_1)
    return 1;
   break;
  case 8:
   if (VAR_8->cpu_based_vm_exec_control &
       VAR_3)
    return 1;
   break;
  }
  break;
 case 3:




  VAR_12 = (VAR_9 >> VAR_5) & 0x0f;
  if (VAR_8->cr0_guest_host_mask & 0xe &
      (VAR_12 ^ VAR_8->cr0_read_shadow))
   return 1;
  if ((VAR_8->cr0_guest_host_mask & 0x1) &&
      !(VAR_8->cr0_read_shadow & 0x1) &&
      (VAR_12 & 0x1))
   return 1;
  break;
 }
 return 0;
}
