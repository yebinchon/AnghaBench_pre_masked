
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct kvm_nested_guest* nested; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_nested_guest {int cpu_in_guest; int need_tlb_flush; } ;
struct TYPE_3__ {int cpu_in_guest; int need_tlb_flush; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int cpumask_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int,int ,int *,int) ;
 int FUNC_4 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_2, int VAR_3, struct kvm_vcpu *VAR_4)
{
 struct kvm_nested_guest *VAR_5 = VAR_4->arch.nested;
 cpumask_t *VAR_6;
 int VAR_7;

 VAR_3 = FUNC_0(VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_3, &VAR_5->need_tlb_flush);
  VAR_6 = &VAR_5->cpu_in_guest;
 } else {
  FUNC_1(VAR_3, &VAR_2->arch.need_tlb_flush);
  VAR_6 = &VAR_2->arch.cpu_in_guest;
 }





 FUNC_4();
 for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7)
  if (FUNC_2(VAR_3 + VAR_7, VAR_6))
   FUNC_3(VAR_3 + VAR_7, VAR_0, ((void*)0), 1);
}
