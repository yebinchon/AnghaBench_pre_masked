
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t nested_vcpu_id; int prev_cpu; struct kvm_nested_guest* nested; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_nested_guest {int* prev_cpu; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kvm*,int,struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1, int VAR_2)
{
 struct kvm_nested_guest *VAR_3 = VAR_1->arch.nested;
 struct kvm *VAR_4 = VAR_1->kvm;
 int VAR_5;

 if (!FUNC_1(VAR_0))
  return;

 if (VAR_3)
  VAR_5 = VAR_3->prev_cpu[VAR_1->arch.nested_vcpu_id];
 else
  VAR_5 = VAR_1->arch.prev_cpu;
 if (VAR_5 != VAR_2) {
  if (VAR_5 >= 0 &&
      FUNC_0(VAR_5) !=
      FUNC_0(VAR_2))
   FUNC_2(VAR_4, VAR_5, VAR_1);
  if (VAR_3)
   VAR_3->prev_cpu[VAR_1->arch.nested_vcpu_id] = VAR_2;
  else
   VAR_1->arch.prev_cpu = VAR_2;
 }
}
