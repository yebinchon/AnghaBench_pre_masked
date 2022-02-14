
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hv_timer_in_use; } ;
struct kvm_lapic {TYPE_1__ lapic_timer; int vcpu; } ;
struct TYPE_4__ {int (* cancel_hv_timer ) (int ) ;} ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_lapic *VAR_1)
{
 FUNC_0(FUNC_1());
 FUNC_0(!VAR_1->lapic_timer.hv_timer_in_use);
 VAR_0->cancel_hv_timer(VAR_1->vcpu);
 VAR_1->lapic_timer.hv_timer_in_use = 0;
}
