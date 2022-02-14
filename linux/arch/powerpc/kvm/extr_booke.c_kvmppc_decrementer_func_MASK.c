
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tcr; int decar; int dec; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;

void FUNC_2(struct kvm_vcpu *VAR_2)
{
 if (VAR_2->arch.tcr & VAR_0) {
  VAR_2->arch.dec = VAR_2->arch.decar;
  FUNC_0(VAR_2);
 }

 FUNC_1(VAR_2, VAR_1);
}
