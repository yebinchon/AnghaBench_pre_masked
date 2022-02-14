
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pmc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pmu_ops; } ;
struct TYPE_3__ {int (* pmc_is_enabled ) (struct kvm_pmc*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_pmc*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_pmc *VAR_1)
{
 return VAR_0->pmu_ops->pmc_is_enabled(VAR_1);
}
