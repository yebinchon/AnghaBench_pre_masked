
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcr; int tsr; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_4)
{
 if ((VAR_4->arch.tcr & VAR_0) && (VAR_4->arch.tsr & VAR_2))
  FUNC_2(VAR_4);
 else
  FUNC_0(VAR_4);

 if ((VAR_4->arch.tcr & VAR_1) && (VAR_4->arch.tsr & VAR_3))
  FUNC_3(VAR_4);
 else
  FUNC_1(VAR_4);
}
