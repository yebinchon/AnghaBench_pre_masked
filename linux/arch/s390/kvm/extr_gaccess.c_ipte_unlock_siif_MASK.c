
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ipte_control {scalar_t__ val; int kh; scalar_t__ k; } ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_3__ {int ipte_wq; int sca_lock; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 union ipte_control FUNC_0 (union ipte_control) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 union ipte_control* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0)
{
 union ipte_control VAR_1, VAR_2, *VAR_3;

 FUNC_3(&VAR_0->kvm->arch.sca_lock);
 VAR_3 = FUNC_2(VAR_0->kvm);
 do {
  VAR_1 = FUNC_0(*VAR_3);
  VAR_2 = VAR_1;
  VAR_2.kh--;
  if (!VAR_2.kh)
   VAR_2.k = 0;
 } while (FUNC_1(&VAR_3->val, VAR_1.val, VAR_2.val) != VAR_1.val);
 FUNC_4(&VAR_0->kvm->arch.sca_lock);
 if (!VAR_2.kh)
  FUNC_5(&VAR_0->kvm->arch.ipte_wq);
}
