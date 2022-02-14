
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_3__ {int cr4_guest_owned_bits; int cr4; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int (* decache_cr4_guest_bits ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline ulong FUNC_1(struct kvm_vcpu *VAR_2, ulong VAR_3)
{
 ulong VAR_4 = VAR_3 & VAR_0;
 if (VAR_4 & VAR_2->arch.cr4_guest_owned_bits)
  VAR_1->decache_cr4_guest_bits(VAR_2);
 return VAR_2->arch.cr4 & VAR_3;
}
