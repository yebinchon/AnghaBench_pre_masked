
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {struct kvm_pmc* gp_counters; } ;
struct kvm_pmc {scalar_t__ eventsel; scalar_t__ counter; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_pmc*) ;
 struct kvm_pmu* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_1)
{
 struct kvm_pmu *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct kvm_pmc *VAR_4 = &VAR_2->gp_counters[VAR_3];

  FUNC_0(VAR_4);
  VAR_4->counter = VAR_4->eventsel = 0;
 }
}
