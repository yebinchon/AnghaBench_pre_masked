
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_s390_gisa_interrupt {scalar_t__ origin; } ;
struct TYPE_3__ {struct kvm_s390_gisa_interrupt gisa_int; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_s390_gisa_interrupt *VAR_2 = &VAR_1->kvm->arch.gisa_int;
 unsigned long VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_2->origin)
  VAR_3 |= FUNC_0(VAR_2->origin) << VAR_0;
 return VAR_3;
}
