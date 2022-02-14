
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int load_eoi_exitmap_pending; int ioapic_handled_vectors; scalar_t__ apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
struct TYPE_4__ {int (* sync_pir_to_irr ) (struct kvm_vcpu*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (int ,struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_2)
{
 if (!FUNC_4(VAR_2))
  return;

 FUNC_0(VAR_2->arch.ioapic_handled_vectors, 256);

 if (FUNC_2(VAR_2->kvm))
  FUNC_7(VAR_2, VAR_2->arch.ioapic_handled_vectors);
 else {
  if (VAR_2->arch.apicv_active)
   VAR_1->sync_pir_to_irr(VAR_2);
  if (FUNC_1(VAR_2->kvm))
   FUNC_5(VAR_2, VAR_2->arch.ioapic_handled_vectors);
 }

 if (FUNC_3(VAR_2))
  VAR_2->arch.load_eoi_exitmap_pending = 1;
 else
  FUNC_6(VAR_0, VAR_2);
}
