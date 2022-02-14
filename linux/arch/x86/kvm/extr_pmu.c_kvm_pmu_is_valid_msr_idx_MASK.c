
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pmu_ops; } ;
struct TYPE_3__ {int (* is_valid_msr_idx ) (struct kvm_vcpu*,unsigned int) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,unsigned int) ;

int FUNC_1(struct kvm_vcpu *VAR_1, unsigned VAR_2)
{
 return VAR_0->pmu_ops->is_valid_msr_idx(VAR_1, VAR_2);
}
