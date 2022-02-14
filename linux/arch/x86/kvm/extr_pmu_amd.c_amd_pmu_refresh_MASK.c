
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int* counter_bitmask; int reserved_bits; int version; scalar_t__ global_status; scalar_t__ nr_arch_fixed_counters; int nr_arch_gp_counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*,int ) ;
 struct kvm_pmu* FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_5)
{
 struct kvm_pmu *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_5, VAR_4))
  VAR_6->nr_arch_gp_counters = VAR_1;
 else
  VAR_6->nr_arch_gp_counters = VAR_0;

 VAR_6->counter_bitmask[VAR_3] = ((u64)1 << 48) - 1;
 VAR_6->reserved_bits = 0xffffffff00200000ull;
 VAR_6->version = 1;

 VAR_6->counter_bitmask[VAR_2] = 0;
 VAR_6->nr_arch_fixed_counters = 0;
 VAR_6->global_status = 0;
}
