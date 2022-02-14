
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
struct kvm_pmu {int nr_arch_fixed_counters; int fixed_ctr_ctrl; } ;
struct kvm_pmc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct kvm_pmc* FUNC_1 (struct kvm_pmu*,scalar_t__) ;
 int FUNC_2 (struct kvm_pmc*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_pmu *VAR_1, u64 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_arch_fixed_counters; VAR_3++) {
  u8 VAR_4 = FUNC_0(VAR_2, VAR_3);
  u8 VAR_5 = FUNC_0(VAR_1->fixed_ctr_ctrl, VAR_3);
  struct kvm_pmc *VAR_6;

  VAR_6 = FUNC_1(VAR_1, VAR_0 + VAR_3);

  if (VAR_5 == VAR_4)
   continue;

  FUNC_2(VAR_6, VAR_4, VAR_3);
 }

 VAR_1->fixed_ctr_ctrl = VAR_2;
}
