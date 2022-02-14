
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vmcs12 {int guest_cr0; int vm_entry_controls; int guest_ia32_efer; int guest_bndcfgs; int guest_ia32_pat; int guest_cr4; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ nested_run_pending; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
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
 int FUNC_1 (int,struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_4 (struct vmcs12*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,struct vmcs12*) ;
 TYPE_2__* FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_9(struct kvm_vcpu *VAR_12,
     struct vmcs12 *VAR_13,
     u32 *VAR_14)
{
 bool VAR_15;

 *VAR_14 = VAR_3;

 if (FUNC_0(!FUNC_5(VAR_12, VAR_13->guest_cr0)) ||
     FUNC_0(!FUNC_6(VAR_12, VAR_13->guest_cr4)))
  return -VAR_2;

 if ((VAR_13->vm_entry_controls & VAR_10) &&
     FUNC_0(!FUNC_2(VAR_13->guest_ia32_pat)))
  return -VAR_2;

 if (FUNC_7(VAR_12, VAR_13)) {
  *VAR_14 = VAR_4;
  return -VAR_2;
 }
 if (FUNC_8(VAR_12)->nested.nested_run_pending &&
     (VAR_13->vm_entry_controls & VAR_9)) {
  VAR_15 = (VAR_13->vm_entry_controls & VAR_7) != 0;
  if (FUNC_0(!FUNC_3(VAR_12, VAR_13->guest_ia32_efer)) ||
      FUNC_0(VAR_15 != !!(VAR_13->guest_ia32_efer & VAR_0)) ||
      FUNC_0(((VAR_13->guest_cr0 & VAR_11) &&
       VAR_15 != !!(VAR_13->guest_ia32_efer & VAR_1))))
   return -VAR_2;
 }

 if ((VAR_13->vm_entry_controls & VAR_8) &&
     (FUNC_0(FUNC_1(VAR_13->guest_bndcfgs & VAR_6, VAR_12)) ||
      FUNC_0((VAR_13->guest_bndcfgs & VAR_5))))
  return -VAR_2;

 if (FUNC_4(VAR_13))
  return -VAR_2;

 return 0;
}
