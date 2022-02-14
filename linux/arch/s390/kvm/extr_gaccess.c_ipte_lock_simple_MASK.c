
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ipte_control {scalar_t__ val; int k; } ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct TYPE_3__ {int ipte_lock_count; int ipte_mutex; int sca_lock; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 union ipte_control FUNC_0 (union ipte_control) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 union ipte_control* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_0)
{
 union ipte_control VAR_1, VAR_2, *VAR_3;

 FUNC_4(&VAR_0->kvm->arch.ipte_mutex);
 VAR_0->kvm->arch.ipte_lock_count++;
 if (VAR_0->kvm->arch.ipte_lock_count > 1)
  goto out;
retry:
 FUNC_6(&VAR_0->kvm->arch.sca_lock);
 VAR_3 = FUNC_3(VAR_0->kvm);
 do {
  VAR_1 = FUNC_0(*VAR_3);
  if (VAR_1.k) {
   FUNC_7(&VAR_0->kvm->arch.sca_lock);
   FUNC_2();
   goto retry;
  }
  VAR_2 = VAR_1;
  VAR_2.k = 1;
 } while (FUNC_1(&VAR_3->val, VAR_1.val, VAR_2.val) != VAR_1.val);
 FUNC_7(&VAR_0->kvm->arch.sca_lock);
out:
 FUNC_5(&VAR_0->kvm->arch.ipte_mutex);
}
