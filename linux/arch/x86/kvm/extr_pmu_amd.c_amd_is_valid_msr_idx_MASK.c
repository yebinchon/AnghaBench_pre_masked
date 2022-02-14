
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {unsigned int nr_arch_gp_counters; } ;


 struct kvm_pmu* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_0, unsigned VAR_1)
{
 struct kvm_pmu *VAR_2 = FUNC_0(VAR_0);

 VAR_1 &= ~(3u << 30);

 return (VAR_1 >= VAR_2->nr_arch_gp_counters);
}
