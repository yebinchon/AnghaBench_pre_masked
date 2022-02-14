
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serror_pending; int serror_has_esr; } ;
struct kvm_vcpu_events {TYPE_1__ exception; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;

int FUNC_1(struct kvm_vcpu *VAR_1,
         struct kvm_vcpu_events *VAR_2)
{
 bool VAR_3 = VAR_2->exception.serror_pending;
 bool VAR_4 = VAR_2->exception.serror_has_esr;

 if (VAR_3 && VAR_4)
  return -VAR_0;
 else if (VAR_3)
  FUNC_0(VAR_1);

 return 0;
}
