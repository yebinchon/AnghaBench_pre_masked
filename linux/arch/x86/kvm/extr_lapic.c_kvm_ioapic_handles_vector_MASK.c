
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_3__ {int ioapic_handled_vectors; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(struct kvm_lapic *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_1, VAR_0->vcpu->arch.ioapic_handled_vectors);
}
