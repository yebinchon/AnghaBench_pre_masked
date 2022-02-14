
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long msr; } ;
struct TYPE_4__ {unsigned long intr_msr; TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 unsigned long VAR_3 = VAR_2->arch.intr_msr;


 if (FUNC_0(VAR_2->arch.shregs.msr))
  VAR_3 |= VAR_1;
 else
  VAR_3 |= VAR_2->arch.shregs.msr & VAR_0;
 FUNC_1(VAR_2, VAR_3);
}
