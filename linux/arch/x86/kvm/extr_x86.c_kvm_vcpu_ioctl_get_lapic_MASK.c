
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic_state {int dummy; } ;
struct TYPE_4__ {int (* sync_pir_to_irr ) (struct kvm_vcpu*) ;} ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_lapic_state*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
        struct kvm_lapic_state *VAR_2)
{
 if (VAR_1->arch.apicv_active)
  VAR_0->sync_pir_to_irr(VAR_1);

 return FUNC_0(VAR_1, VAR_2);
}
