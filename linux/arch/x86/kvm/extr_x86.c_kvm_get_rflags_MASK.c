
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int guest_debug; } ;
struct TYPE_2__ {unsigned long (* get_rflags ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long FUNC_0 (struct kvm_vcpu*) ;

unsigned long FUNC_1(struct kvm_vcpu *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_2->get_rflags(VAR_3);
 if (VAR_3->guest_debug & VAR_0)
  VAR_4 &= ~VAR_1;
 return VAR_4;
}
