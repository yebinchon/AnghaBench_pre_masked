
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu_hv_stimer {int msg_pending; scalar_t__ exp_time; int index; int timer; } ;
struct kvm_vcpu {int vcpu_id; } ;
struct TYPE_2__ {int stimer_pending_bitmap; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct kvm_vcpu* FUNC_2 (struct kvm_vcpu_hv_stimer*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu_hv_stimer *VAR_0)
{
 struct kvm_vcpu *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(FUNC_2(VAR_0)->vcpu_id,
        VAR_0->index);

 FUNC_1(&VAR_0->timer);
 FUNC_0(VAR_0->index,
    FUNC_4(VAR_1)->stimer_pending_bitmap);
 VAR_0->msg_pending = 0;
 VAR_0->exp_time = 0;
}
