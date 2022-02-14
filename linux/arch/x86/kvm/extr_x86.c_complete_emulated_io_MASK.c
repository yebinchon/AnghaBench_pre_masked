
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int srcu_idx; TYPE_1__* kvm; } ;
struct TYPE_2__ {int srcu; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline int FUNC_3(struct kvm_vcpu *VAR_1)
{
 int VAR_2;

 VAR_1->srcu_idx = FUNC_1(&VAR_1->kvm->srcu);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->kvm->srcu, VAR_1->srcu_idx);
 return VAR_2;
}
