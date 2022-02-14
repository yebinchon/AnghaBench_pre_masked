
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct kvm_pmu {int fixed_ctr_ctrl; } ;
struct kvm_pmc {int eventsel; } ;
struct TYPE_4__ {TYPE_1__* pmu_ops; } ;
struct TYPE_3__ {struct kvm_pmc* (* pmc_idx_to_pmc ) (struct kvm_pmu*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_1 (struct kvm_pmc*) ;
 int FUNC_2 (struct kvm_pmc*,int ,int) ;
 int FUNC_3 (struct kvm_pmc*,int ) ;
 struct kvm_pmc* FUNC_4 (struct kvm_pmu*,int) ;

void FUNC_5(struct kvm_pmu *VAR_2, int VAR_3)
{
 struct kvm_pmc *VAR_4 = VAR_1->pmu_ops->pmc_idx_to_pmc(VAR_2, VAR_3);

 if (!VAR_4)
  return;

 if (FUNC_1(VAR_4))
  FUNC_3(VAR_4, VAR_4->eventsel);
 else {
  int VAR_5 = VAR_3 - VAR_0;
  u8 VAR_6 = FUNC_0(VAR_2->fixed_ctr_ctrl, VAR_5);

  FUNC_2(VAR_4, VAR_6, VAR_5);
 }
}
