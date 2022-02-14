
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_lapic {TYPE_2__* vcpu; scalar_t__ regs; } ;
struct TYPE_4__ {int pending_ioapic_eoi; } ;
struct TYPE_5__ {TYPE_1__ arch; int kvm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct kvm_lapic*,int) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct kvm_lapic *VAR_4, int VAR_5)
{
 int VAR_6;


 if (!FUNC_2(VAR_4, VAR_5))
  return;


 if (FUNC_1(VAR_4->vcpu->kvm)) {
  VAR_4->vcpu->arch.pending_ioapic_eoi = VAR_5;
  FUNC_4(VAR_3, VAR_4->vcpu);
  return;
 }

 if (FUNC_0(VAR_5, VAR_4->regs + VAR_0))
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 FUNC_3(VAR_4->vcpu, VAR_5, VAR_6);
}
