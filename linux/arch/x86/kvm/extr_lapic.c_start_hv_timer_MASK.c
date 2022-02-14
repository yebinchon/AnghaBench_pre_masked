
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int vcpu_id; } ;
struct kvm_timer {int hv_timer_in_use; int pending; int timer; int tscdeadline; } ;
struct kvm_lapic {struct kvm_vcpu* vcpu; struct kvm_timer lapic_timer; } ;
struct TYPE_2__ {scalar_t__ (* set_hv_timer ) (struct kvm_vcpu*,int ,int*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_lapic*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct kvm_lapic*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,int ,int*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static bool FUNC_9(struct kvm_lapic *VAR_1)
{
 struct kvm_timer *VAR_2 = &VAR_1->lapic_timer;
 struct kvm_vcpu *VAR_3 = VAR_1->vcpu;
 bool VAR_4;

 FUNC_0(FUNC_6());
 if (!VAR_0->set_hv_timer)
  return 0;

 if (!VAR_2->tscdeadline)
  return 0;

 if (VAR_0->set_hv_timer(VAR_3, VAR_2->tscdeadline, &VAR_4))
  return 0;

 VAR_2->hv_timer_in_use = 1;
 FUNC_5(&VAR_2->timer);






 if (!FUNC_1(VAR_1)) {




  if (FUNC_3(&VAR_2->pending)) {
   FUNC_4(VAR_1);
  } else if (VAR_4) {
   FUNC_2(VAR_1);
   FUNC_4(VAR_1);
  }
 }

 FUNC_8(VAR_3->vcpu_id, VAR_2->hv_timer_in_use);

 return 1;
}
