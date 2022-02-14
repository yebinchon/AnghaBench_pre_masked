
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_6__ {int key; } ;
struct TYPE_4__ {int apic_base; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct kvm_lapic *VAR_2)
{
 if (FUNC_0(&VAR_1.key))
  return VAR_2->vcpu->arch.apic_base & VAR_0;
 return VAR_0;
}
