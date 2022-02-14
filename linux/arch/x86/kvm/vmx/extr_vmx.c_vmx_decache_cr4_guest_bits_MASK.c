
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_2__ {int cr4_guest_owned_bits; int cr4; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1)
{
 ulong VAR_2 = VAR_1->arch.cr4_guest_owned_bits;

 VAR_1->arch.cr4 &= ~VAR_2;
 VAR_1->arch.cr4 |= FUNC_0(VAR_0) & VAR_2;
}
