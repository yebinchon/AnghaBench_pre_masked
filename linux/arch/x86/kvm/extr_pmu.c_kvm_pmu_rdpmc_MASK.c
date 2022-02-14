
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int version; } ;
struct kvm_pmc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pmu_ops; } ;
struct TYPE_3__ {struct kvm_pmc* (* msr_idx_to_pmc ) (struct kvm_vcpu*,unsigned int,int*) ;} ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned int,int*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct kvm_pmc*) ;
 struct kvm_pmc* FUNC_3 (struct kvm_vcpu*,unsigned int,int*) ;
 struct kvm_pmu* FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1, unsigned VAR_2, u64 *VAR_3)
{
 bool VAR_4 = VAR_2 & (1u << 31);
 struct kvm_pmu *VAR_5 = FUNC_4(VAR_1);
 struct kvm_pmc *VAR_6;
 u64 VAR_7 = VAR_4 ? ~0u : ~0ull;

 if (!VAR_5->version)
  return 1;

 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_6 = VAR_0->pmu_ops->msr_idx_to_pmc(VAR_1, VAR_2, &VAR_7);
 if (!VAR_6)
  return 1;

 *VAR_3 = FUNC_2(VAR_6) & VAR_7;
 return 0;
}
