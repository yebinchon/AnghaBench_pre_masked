
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int singlestep_rip; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; } ;
struct TYPE_4__ {int (* set_rflags ) (struct kvm_vcpu*,unsigned long) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 if (VAR_3->guest_debug & VAR_0 &&
     FUNC_0(VAR_3, VAR_3->arch.singlestep_rip))
  VAR_4 |= VAR_1;
 VAR_2->set_rflags(VAR_3, VAR_4);
}
