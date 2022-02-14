
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vmcs12 {int vm_entry_intr_info_field; int guest_cr0; int vm_entry_exception_error_code; int vm_entry_instruction_len; int vm_entry_controls; } ;
struct TYPE_3__ {int entry_ctls_high; int entry_ctls_low; } ;
struct TYPE_4__ {TYPE_1__ msrs; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct vmcs12*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*,struct vmcs12*) ;
 struct vcpu_vmx* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_13,
       struct vmcs12 *VAR_14)
{
 struct vcpu_vmx *VAR_15 = FUNC_6(VAR_13);

 if (FUNC_0(!FUNC_7(VAR_14->vm_entry_controls,
        VAR_15->nested.msrs.entry_ctls_low,
        VAR_15->nested.msrs.entry_ctls_high)))
  return -VAR_0;







 if (VAR_14->vm_entry_intr_info_field & VAR_4) {
  u32 VAR_16 = VAR_14->vm_entry_intr_info_field;
  u8 VAR_17 = VAR_16 & VAR_5;
  u32 VAR_18 = VAR_16 & VAR_2;
  bool VAR_19 = VAR_16 & VAR_1;
  bool VAR_20;
  bool VAR_21 = FUNC_2(VAR_14,
        VAR_11);
  bool VAR_22 = !VAR_21 || VAR_14->guest_cr0 & VAR_12;


  if (FUNC_0(VAR_18 == VAR_9) ||
      FUNC_0(VAR_18 == VAR_8 &&
         !FUNC_4(VAR_13)))
   return -VAR_0;


  if (FUNC_0(VAR_18 == VAR_7 && VAR_17 != VAR_10) ||
      FUNC_0(VAR_18 == VAR_6 && VAR_17 > 31) ||
      FUNC_0(VAR_18 == VAR_8 && VAR_17 != 0))
   return -VAR_0;


  VAR_20 =
   VAR_18 == VAR_6 && VAR_22 &&
   FUNC_8(VAR_17);
  if (FUNC_0(VAR_19 != VAR_20))
   return -VAR_0;


  if (FUNC_0(VAR_19 &&
         VAR_14->vm_entry_exception_error_code & FUNC_1(31, 16)))
   return -VAR_0;


  if (FUNC_0(VAR_16 & VAR_3))
   return -VAR_0;


  switch (VAR_18) {
  case 129:
  case 128:
  case 130:
   if (FUNC_0(VAR_14->vm_entry_instruction_len > 15) ||
       FUNC_0(VAR_14->vm_entry_instruction_len == 0 &&
       FUNC_0(!FUNC_3(VAR_13))))
    return -VAR_0;
  }
 }

 if (FUNC_5(VAR_13, VAR_14))
  return -VAR_0;

 return 0;
}
