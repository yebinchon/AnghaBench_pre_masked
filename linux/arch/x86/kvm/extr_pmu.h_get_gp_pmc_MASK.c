
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvm_pmu {scalar_t__ nr_arch_gp_counters; struct kvm_pmc* gp_counters; } ;
struct kvm_pmc {int dummy; } ;



__attribute__((used)) static inline struct kvm_pmc *FUNC_0(struct kvm_pmu *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 if (VAR_1 >= VAR_2 && VAR_1 < VAR_2 + VAR_0->nr_arch_gp_counters)
  return &VAR_0->gp_counters[VAR_1 - VAR_2];

 return ((void*)0);
}
