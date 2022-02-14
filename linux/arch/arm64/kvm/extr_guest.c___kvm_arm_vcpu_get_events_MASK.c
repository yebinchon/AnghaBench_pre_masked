
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int serror_pending; int serror_esr; scalar_t__ serror_has_esr; } ;
struct kvm_vcpu_events {TYPE_2__ exception; } ;
struct TYPE_3__ {int hcr_el2; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;

int FUNC_2(struct kvm_vcpu *VAR_2,
         struct kvm_vcpu_events *VAR_3)
{
 VAR_3->exception.serror_pending = !!(VAR_2->arch.hcr_el2 & VAR_1);
 VAR_3->exception.serror_has_esr = FUNC_0(VAR_0);

 if (VAR_3->exception.serror_pending && VAR_3->exception.serror_has_esr)
  VAR_3->exception.serror_esr = FUNC_1(VAR_2);

 return 0;
}
