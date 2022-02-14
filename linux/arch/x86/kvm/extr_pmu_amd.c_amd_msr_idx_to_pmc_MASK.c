
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {unsigned int nr_arch_gp_counters; struct kvm_pmc* gp_counters; } ;
struct kvm_pmc {int dummy; } ;


 struct kvm_pmu* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static struct kvm_pmc *FUNC_1(struct kvm_vcpu *VAR_0, unsigned VAR_1, u64 *VAR_2)
{
 struct kvm_pmu *VAR_3 = FUNC_0(VAR_0);
 struct kvm_pmc *VAR_4;

 VAR_1 &= ~(3u << 30);
 if (VAR_1 >= VAR_3->nr_arch_gp_counters)
  return ((void*)0);
 VAR_4 = VAR_3->gp_counters;

 return &VAR_4[VAR_1];
}
