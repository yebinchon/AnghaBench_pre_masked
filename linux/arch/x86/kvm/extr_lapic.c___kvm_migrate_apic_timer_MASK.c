
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct hrtimer {int dummy; } ;
struct TYPE_4__ {struct hrtimer timer; } ;
struct TYPE_5__ {TYPE_1__ lapic_timer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hrtimer*) ;
 int FUNC_1 (struct hrtimer*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct hrtimer *VAR_2;

 if (!FUNC_3(VAR_1) ||
  FUNC_2(VAR_1))
  return;

 VAR_2 = &VAR_1->arch.apic->lapic_timer.timer;
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2, VAR_0);
}
