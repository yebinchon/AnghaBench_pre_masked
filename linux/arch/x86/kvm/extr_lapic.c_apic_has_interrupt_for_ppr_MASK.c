
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct kvm_lapic {TYPE_2__* vcpu; } ;
struct TYPE_6__ {int (* sync_pir_to_irr ) (TYPE_2__*) ;} ;
struct TYPE_4__ {scalar_t__ apicv_active; } ;
struct TYPE_5__ {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_lapic*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct kvm_lapic *VAR_1, u32 VAR_2)
{
 int VAR_3;
 if (VAR_1->vcpu->arch.apicv_active)
  VAR_3 = VAR_0->sync_pir_to_irr(VAR_1->vcpu);
 else
  VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == -1 || (VAR_3 & 0xF0) <= VAR_2)
  return -1;
 return VAR_3;
}
