
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {unsigned long cr4_guest_host_mask; unsigned long guest_cr4; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1, unsigned long VAR_2)
{
 if (FUNC_1(VAR_1)) {
  struct vmcs12 *VAR_3 = FUNC_0(VAR_1);
  unsigned long VAR_4 = VAR_2;


  VAR_2 = (VAR_2 & ~VAR_3->cr4_guest_host_mask) |
   (VAR_3->guest_cr4 & VAR_3->cr4_guest_host_mask);
  if (FUNC_2(VAR_1, VAR_2))
   return 1;
  FUNC_3(VAR_0, VAR_4);
  return 0;
 } else
  return FUNC_2(VAR_1, VAR_2);
}
