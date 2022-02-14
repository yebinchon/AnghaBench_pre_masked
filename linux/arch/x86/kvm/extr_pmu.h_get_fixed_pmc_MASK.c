
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvm_pmu {int nr_arch_fixed_counters; struct kvm_pmc* fixed_counters; } ;
struct kvm_pmc {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct kvm_pmc *FUNC_0(struct kvm_pmu *VAR_1, u32 VAR_2)
{
 int VAR_3 = VAR_0;

 if (VAR_2 >= VAR_3 && VAR_2 < VAR_3 + VAR_1->nr_arch_fixed_counters)
  return &VAR_1->fixed_counters[VAR_2 - VAR_3];

 return ((void*)0);
}
