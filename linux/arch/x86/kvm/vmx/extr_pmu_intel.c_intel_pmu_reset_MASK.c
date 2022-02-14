
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {scalar_t__ global_ovf_ctrl; scalar_t__ global_status; scalar_t__ global_ctrl; scalar_t__ fixed_ctr_ctrl; struct kvm_pmc* fixed_counters; struct kvm_pmc* gp_counters; } ;
struct kvm_pmc {scalar_t__ counter; scalar_t__ eventsel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_pmc*) ;
 struct kvm_pmu* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 struct kvm_pmu *VAR_3 = FUNC_1(VAR_2);
 struct kvm_pmc *VAR_4 = ((void*)0);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_3->gp_counters[VAR_5];

  FUNC_0(VAR_4);
  VAR_4->counter = VAR_4->eventsel = 0;
 }

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = &VAR_3->fixed_counters[VAR_5];

  FUNC_0(VAR_4);
  VAR_4->counter = 0;
 }

 VAR_3->fixed_ctr_ctrl = VAR_3->global_ctrl = VAR_3->global_status =
  VAR_3->global_ovf_ctrl = 0;
}
