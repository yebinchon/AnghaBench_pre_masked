
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long intr_msr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3 = VAR_2->arch.intr_msr;
 unsigned long VAR_4 = FUNC_1(VAR_2);


 if (FUNC_0(VAR_4))
  VAR_3 |= VAR_1;
 else
  VAR_3 |= VAR_4 & VAR_0;

 FUNC_2(VAR_2, VAR_3);
}
