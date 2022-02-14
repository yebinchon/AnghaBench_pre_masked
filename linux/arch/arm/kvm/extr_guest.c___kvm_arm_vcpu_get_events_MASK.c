
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int serror_pending; } ;
struct kvm_vcpu_events {TYPE_1__ exception; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct kvm_vcpu*) ;

int FUNC_1(struct kvm_vcpu *VAR_1,
         struct kvm_vcpu_events *VAR_2)
{
 VAR_2->exception.serror_pending = !!(*FUNC_0(VAR_1) & VAR_0);

 return 0;
}
