
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int intr_msr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_2, u64 VAR_3)
{
 if (VAR_3 & VAR_0)
  VAR_2->arch.intr_msr |= VAR_1;
 else
  VAR_2->arch.intr_msr &= ~VAR_1;
}
