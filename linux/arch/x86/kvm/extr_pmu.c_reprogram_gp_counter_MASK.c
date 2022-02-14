
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct kvm_pmu_event_filter {int nevents; int* events; scalar_t__ action; } ;
struct kvm_pmc {int eventsel; TYPE_1__* vcpu; } ;
struct TYPE_6__ {int pmu_event_filter; } ;
struct kvm {int srcu; TYPE_2__ arch; } ;
struct TYPE_8__ {TYPE_3__* pmu_ops; } ;
struct TYPE_7__ {unsigned int (* find_arch_event ) (int ,int,int) ;} ;
struct TYPE_5__ {struct kvm* kvm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 TYPE_4__* VAR_19 ;
 int FUNC_0 (struct kvm_pmc*) ;
 int FUNC_1 (struct kvm_pmc*,unsigned int,unsigned int,int,int,int,int,int) ;
 int FUNC_2 (struct kvm_pmc*) ;
 int FUNC_3 (struct kvm_pmc*) ;
 int FUNC_4 (char*) ;
 struct kvm_pmu_event_filter* FUNC_5 (int ,int *) ;
 unsigned int FUNC_6 (int ,int,int) ;

void FUNC_7(struct kvm_pmc *VAR_20, u64 VAR_21)
{
 unsigned VAR_22, VAR_23 = VAR_17;
 u8 VAR_24, VAR_25;
 struct kvm *VAR_26 = VAR_20->vcpu->kvm;
 struct kvm_pmu_event_filter *VAR_27;
 int VAR_28;
 bool VAR_29 = 1;

 if (VAR_21 & VAR_8)
  FUNC_4("kvm pmu: pin control bit is ignored\n");

 VAR_20->eventsel = VAR_21;

 FUNC_2(VAR_20);

 if (!(VAR_21 & VAR_3) || !FUNC_0(VAR_20))
  return;

 VAR_27 = FUNC_5(VAR_26->arch.pmu_event_filter, &VAR_26->srcu);
 if (VAR_27) {
  for (VAR_28 = 0; VAR_28 < VAR_27->nevents; VAR_28++)
   if (VAR_27->events[VAR_28] ==
       (VAR_21 & VAR_0))
    break;
  if (VAR_27->action == VAR_13 &&
      VAR_28 == VAR_27->nevents)
   VAR_29 = 0;
  if (VAR_27->action == VAR_14 &&
      VAR_28 < VAR_27->nevents)
   VAR_29 = 0;
 }
 if (!VAR_29)
  return;

 VAR_24 = VAR_21 & VAR_4;
 VAR_25 = (VAR_21 & VAR_9) >> 8;

 if (!(VAR_21 & (VAR_2 |
     VAR_6 |
     VAR_1 |
     VAR_11 |
     VAR_12))) {
  VAR_22 = VAR_19->pmu_ops->find_arch_event(FUNC_3(VAR_20),
            VAR_24,
            VAR_25);
  if (VAR_22 != VAR_15)
   VAR_23 = VAR_16;
 }

 if (VAR_23 == VAR_17)
  VAR_22 = VAR_21 & VAR_18;

 FUNC_1(VAR_20, VAR_23, VAR_22,
         !(VAR_21 & VAR_10),
         !(VAR_21 & VAR_7),
         VAR_21 & VAR_5,
         (VAR_21 & VAR_11),
         (VAR_21 & VAR_12));
}
