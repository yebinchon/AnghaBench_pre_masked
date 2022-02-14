
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msr; } ;
struct TYPE_4__ {int ceded; scalar_t__ prodded; TYPE_1__ shregs; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct kvm_vcpu *VAR_1)
{
 VAR_1->arch.shregs.msr |= VAR_0;
 VAR_1->arch.ceded = 1;
 FUNC_0();
 if (VAR_1->arch.prodded) {
  VAR_1->arch.prodded = 0;
  FUNC_0();
  VAR_1->arch.ceded = 0;
 }
}
