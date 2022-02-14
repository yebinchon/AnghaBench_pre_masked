
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_lapic {int lvt0_in_nmi_mode; TYPE_3__* vcpu; } ;
struct TYPE_6__ {TYPE_2__* kvm; } ;
struct TYPE_4__ {int vapics_in_nmi_mode; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvm_lapic *VAR_0, u32 VAR_1)
{
 bool VAR_2 = FUNC_0(VAR_1);

 if (VAR_0->lvt0_in_nmi_mode != VAR_2) {
  VAR_0->lvt0_in_nmi_mode = VAR_2;
  if (VAR_2) {
   FUNC_2(&VAR_0->vcpu->kvm->arch.vapics_in_nmi_mode);
  } else
   FUNC_1(&VAR_0->vcpu->kvm->arch.vapics_in_nmi_mode);
 }
}
