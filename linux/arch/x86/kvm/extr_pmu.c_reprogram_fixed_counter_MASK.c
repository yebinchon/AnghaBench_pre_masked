
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
typedef int u8 ;
struct kvm_pmu_event_filter {scalar_t__ action; int fixed_counter_bitmap; } ;
struct kvm_pmc {TYPE_1__* vcpu; } ;
struct TYPE_6__ {int pmu_event_filter; } ;
struct kvm {int srcu; TYPE_2__ arch; } ;
struct TYPE_8__ {TYPE_3__* pmu_ops; } ;
struct TYPE_7__ {int (* find_fixed_event ) (int) ;} ;
struct TYPE_5__ {struct kvm* kvm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_0 (struct kvm_pmc*) ;
 int FUNC_1 (struct kvm_pmc*,int ,int ,int,int,int,int,int) ;
 int FUNC_2 (struct kvm_pmc*) ;
 struct kvm_pmu_event_filter* FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int *) ;

void FUNC_6(struct kvm_pmc *VAR_4, u8 VAR_5, int VAR_6)
{
 unsigned VAR_7 = VAR_5 & 0x3;
 bool VAR_8 = VAR_5 & 0x8;
 struct kvm_pmu_event_filter *VAR_9;
 struct kvm *VAR_10 = VAR_4->vcpu->kvm;

 FUNC_2(VAR_4);

 if (!VAR_7 || !FUNC_0(VAR_4))
  return;

 VAR_9 = FUNC_3(VAR_10->arch.pmu_event_filter, &VAR_10->srcu);
 if (VAR_9) {
  if (VAR_9->action == VAR_1 &&
      FUNC_5(VAR_6, (ulong *)&VAR_9->fixed_counter_bitmap))
   return;
  if (VAR_9->action == VAR_0 &&
      !FUNC_5(VAR_6, (ulong *)&VAR_9->fixed_counter_bitmap))
   return;
 }

 FUNC_1(VAR_4, VAR_2,
         VAR_3->pmu_ops->find_fixed_event(VAR_6),
         !(VAR_7 & 0x2),
         !(VAR_7 & 0x1),
         VAR_8, 0, 0);
}
