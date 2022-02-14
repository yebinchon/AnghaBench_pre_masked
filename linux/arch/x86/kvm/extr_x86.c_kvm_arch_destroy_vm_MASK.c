
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pmu_event_filter; int apic_map; } ;
struct kvm {scalar_t__ mm; int srcu; TYPE_1__ arch; } ;
struct TYPE_6__ {scalar_t__ mm; } ;
struct TYPE_5__ {int (* vm_destroy ) (struct kvm*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*) ;
 int FUNC_6 (struct kvm*) ;
 int FUNC_7 (struct kvm*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int *,int) ;
 int FUNC_10 (struct kvm*) ;
 int FUNC_11 (struct kvm*,int ,int ,int ) ;

void FUNC_12(struct kvm *VAR_5)
{
 if (VAR_3->mm == VAR_5->mm) {





  FUNC_11(VAR_5, VAR_0, 0, 0);
  FUNC_11(VAR_5, VAR_1, 0, 0);
  FUNC_11(VAR_5, VAR_2, 0, 0);
 }
 if (VAR_4->vm_destroy)
  VAR_4->vm_destroy(VAR_5);
 FUNC_7(VAR_5);
 FUNC_4(VAR_5);
 FUNC_2(VAR_5);
 FUNC_1(FUNC_8(VAR_5->arch.apic_map, 1));
 FUNC_0(FUNC_9(VAR_5->arch.pmu_event_filter, &VAR_5->srcu, 1));
 FUNC_5(VAR_5);
 FUNC_6(VAR_5);
 FUNC_3(VAR_5);
}
