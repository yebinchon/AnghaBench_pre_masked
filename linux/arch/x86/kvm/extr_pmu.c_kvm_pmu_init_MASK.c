
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_pmu {int irq_work; } ;
struct TYPE_4__ {TYPE_1__* pmu_ops; } ;
struct TYPE_3__ {int (* init ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct kvm_pmu*,int ,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 struct kvm_pmu* FUNC_4 (struct kvm_vcpu*) ;

void FUNC_5(struct kvm_vcpu *VAR_2)
{
 struct kvm_pmu *VAR_3 = FUNC_4(VAR_2);

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_1->pmu_ops->init(VAR_2);
 FUNC_0(&VAR_3->irq_work, VAR_0);
 FUNC_1(VAR_2);
}
