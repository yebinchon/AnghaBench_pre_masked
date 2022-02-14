
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {int ready; } ;
struct kvm_apic_map {unsigned long max_apic_id; TYPE_2__** phys_map; } ;
struct TYPE_3__ {int apic_map; } ;
struct kvm {TYPE_1__ arch; } ;
struct TYPE_4__ {struct kvm_vcpu* vcpu; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_apic_map*) ;
 struct kvm_apic_map* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_0, unsigned long VAR_1)
{
 struct kvm_vcpu *VAR_2 = ((void*)0);
 struct kvm_apic_map *VAR_3;

 FUNC_4();
 VAR_3 = FUNC_3(VAR_0->arch.apic_map);

 if (FUNC_2(VAR_3) && VAR_1 <= VAR_3->max_apic_id && VAR_3->phys_map[VAR_1])
  VAR_2 = VAR_3->phys_map[VAR_1]->vcpu;

 FUNC_5();

 if (VAR_2 && FUNC_0(VAR_2->ready))
  FUNC_1(VAR_2);
}
