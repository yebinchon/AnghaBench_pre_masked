
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmcs12 {unsigned long cr0_guest_host_mask; unsigned long guest_cr0; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {scalar_t__ vmxon; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*,unsigned long) ;
 TYPE_2__* FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 if (FUNC_1(VAR_1)) {
  struct vmcs12 *VAR_3 = FUNC_0(VAR_1);
  unsigned long VAR_4 = VAR_2;
  VAR_2 = (VAR_2 & ~VAR_3->cr0_guest_host_mask) |
   (VAR_3->guest_cr0 & VAR_3->cr0_guest_host_mask);

  if (!FUNC_3(VAR_1, VAR_2))
   return 1;

  if (FUNC_2(VAR_1, VAR_2))
   return 1;
  FUNC_6(VAR_0, VAR_4);
  return 0;
 } else {
  if (FUNC_5(VAR_1)->nested.vmxon &&
      !FUNC_4(VAR_1, VAR_2))
   return 1;

  return FUNC_2(VAR_1, VAR_2);
 }
}
