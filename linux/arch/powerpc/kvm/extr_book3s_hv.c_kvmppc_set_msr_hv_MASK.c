
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int msr; } ;
struct TYPE_4__ {TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1, u64 VAR_2)
{




 if ((VAR_2 & VAR_0) == VAR_0)
  VAR_2 &= ~VAR_0;
 VAR_1->arch.shregs.msr = VAR_2;
 FUNC_0(VAR_1);
}
