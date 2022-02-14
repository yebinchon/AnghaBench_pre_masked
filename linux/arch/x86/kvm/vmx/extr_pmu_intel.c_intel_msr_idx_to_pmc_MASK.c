
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {unsigned int nr_arch_gp_counters; unsigned int nr_arch_fixed_counters; int * counter_bitmask; struct kvm_pmc* gp_counters; struct kvm_pmc* fixed_counters; } ;
struct kvm_pmc {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct kvm_pmu* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static struct kvm_pmc *FUNC_1(struct kvm_vcpu *VAR_2,
         unsigned VAR_3, u64 *VAR_4)
{
 struct kvm_pmu *VAR_5 = FUNC_0(VAR_2);
 bool VAR_6 = VAR_3 & (1u << 30);
 struct kvm_pmc *VAR_7;

 VAR_3 &= ~(3u << 30);
 if (!VAR_6 && VAR_3 >= VAR_5->nr_arch_gp_counters)
  return ((void*)0);
 if (VAR_6 && VAR_3 >= VAR_5->nr_arch_fixed_counters)
  return ((void*)0);
 VAR_7 = VAR_6 ? VAR_5->fixed_counters : VAR_5->gp_counters;
 *VAR_4 &= VAR_5->counter_bitmask[VAR_6 ? VAR_0 : VAR_1];

 return &VAR_7[VAR_3];
}
