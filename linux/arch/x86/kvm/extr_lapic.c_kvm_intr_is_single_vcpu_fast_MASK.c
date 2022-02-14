
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_lapic_irq {scalar_t__ shorthand; } ;
struct kvm_lapic {struct kvm_vcpu* vcpu; } ;
struct kvm_apic_map {int dummy; } ;
struct TYPE_2__ {int apic_map; } ;
struct kvm {TYPE_1__ arch; } ;


 unsigned long FUNC_0 (unsigned long*,int) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct kvm*,int *,struct kvm_lapic_irq*,struct kvm_apic_map*,struct kvm_lapic***,unsigned long*) ;
 struct kvm_apic_map* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

bool FUNC_6(struct kvm *VAR_0, struct kvm_lapic_irq *VAR_1,
   struct kvm_vcpu **VAR_2)
{
 struct kvm_apic_map *VAR_3;
 unsigned long VAR_4;
 struct kvm_lapic **VAR_5 = ((void*)0);
 bool VAR_6 = 0;

 if (VAR_1->shorthand)
  return 0;

 FUNC_4();
 VAR_3 = FUNC_3(VAR_0->arch.apic_map);

 if (FUNC_2(VAR_0, ((void*)0), VAR_1, VAR_3, &VAR_5, &VAR_4) &&
   FUNC_1(VAR_4) == 1) {
  unsigned long VAR_7 = FUNC_0(&VAR_4, 16);

  if (VAR_5[VAR_7]) {
   *VAR_2 = VAR_5[VAR_7]->vcpu;
   VAR_6 = 1;
  }
 }

 FUNC_5();
 return VAR_6;
}
