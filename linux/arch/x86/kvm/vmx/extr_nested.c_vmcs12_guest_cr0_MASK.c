
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmcs12 {unsigned long guest_cr0; unsigned long cr0_guest_host_mask; } ;
struct TYPE_2__ {unsigned long cr0_guest_owned_bits; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long
FUNC_1(struct kvm_vcpu *VAR_2, struct vmcs12 *VAR_3)
{
 return
       (FUNC_0(VAR_1) & VAR_2->arch.cr0_guest_owned_bits) |
       (VAR_3->guest_cr0 & VAR_3->cr0_guest_host_mask) |
       (FUNC_0(VAR_0) & ~(VAR_3->cr0_guest_host_mask |
   VAR_2->arch.cr0_guest_owned_bits));
}
