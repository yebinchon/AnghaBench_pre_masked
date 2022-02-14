
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ulong ;
struct msr_data {int host_initiated; int data; } ;
struct TYPE_10__ {scalar_t__ cr3; scalar_t__ efer; scalar_t__ cr0; int mp_state; int walk_mmu; int regs_avail; int cr2; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_3__* kvm; } ;
struct TYPE_12__ {int selector; int base; } ;
struct TYPE_8__ {int base; int limit; } ;
struct TYPE_7__ {int base; int limit; } ;
struct kvm_sregs {scalar_t__ cr3; scalar_t__ efer; scalar_t__ cr0; int cr4; TYPE_6__ cs; TYPE_6__ ldt; TYPE_6__ tr; TYPE_6__ ss; TYPE_6__ gs; TYPE_6__ fs; TYPE_6__ es; TYPE_6__ ds; scalar_t__ interrupt_bitmap; int cr8; int cr2; TYPE_2__ gdt; TYPE_1__ idt; int apic_base; } ;
struct desc_ptr {int address; int size; } ;
struct TYPE_11__ {int (* set_cr4 ) (struct kvm_vcpu*,int) ;int (* set_cr0 ) (struct kvm_vcpu*,scalar_t__) ;int (* set_efer ) (struct kvm_vcpu*,scalar_t__) ;int (* set_gdt ) (struct kvm_vcpu*,struct desc_ptr*) ;int (* set_idt ) (struct kvm_vcpu*,struct desc_ptr*) ;} ;
struct TYPE_9__ {int srcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long const*,int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int,int) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_11 (struct kvm_vcpu*,struct msr_data*) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 int FUNC_13 (struct kvm_vcpu*,TYPE_6__*,int ) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_15 (struct kvm_vcpu*,struct kvm_sregs*) ;
 scalar_t__ FUNC_16 (struct kvm_vcpu*) ;
 TYPE_5__* VAR_15 ;
 int FUNC_17 (struct kvm_vcpu*,int ,scalar_t__) ;
 int FUNC_18 (char*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (struct kvm_vcpu*,struct desc_ptr*) ;
 int FUNC_22 (struct kvm_vcpu*,struct desc_ptr*) ;
 int FUNC_23 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_24 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_25 (struct kvm_vcpu*,int) ;
 int FUNC_26 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_27(struct kvm_vcpu *VAR_16, struct kvm_sregs *VAR_17)
{
 struct msr_data VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21, VAR_22, VAR_23;
 struct desc_ptr VAR_24;
 int VAR_25 = -VAR_0;

 if (FUNC_15(VAR_16, VAR_17))
  goto out;

 VAR_18.data = VAR_17->apic_base;
 VAR_18.host_initiated = 1;
 if (FUNC_11(VAR_16, &VAR_18))
  goto out;

 VAR_24.size = VAR_17->idt.limit;
 VAR_24.address = VAR_17->idt.base;
 VAR_15->set_idt(VAR_16, &VAR_24);
 VAR_24.size = VAR_17->gdt.limit;
 VAR_24.address = VAR_17->gdt.base;
 VAR_15->set_gdt(VAR_16, &VAR_24);

 VAR_16->arch.cr2 = VAR_17->cr2;
 VAR_19 |= FUNC_8(VAR_16) != VAR_17->cr3;
 VAR_16->arch.cr3 = VAR_17->cr3;
 FUNC_0(VAR_4, (ulong *)&VAR_16->arch.regs_avail);

 FUNC_12(VAR_16, VAR_17->cr8);

 VAR_19 |= VAR_16->arch.efer != VAR_17->efer;
 VAR_15->set_efer(VAR_16, VAR_17->efer);

 VAR_19 |= FUNC_7(VAR_16) != VAR_17->cr0;
 VAR_15->set_cr0(VAR_16, VAR_17->cr0);
 VAR_16->arch.cr0 = VAR_17->cr0;

 VAR_19 |= FUNC_9(VAR_16) != VAR_17->cr4;
 VAR_20 |= ((FUNC_9(VAR_16) ^ VAR_17->cr4) &
    (VAR_13 | VAR_14));
 VAR_15->set_cr4(VAR_16, VAR_17->cr4);
 if (VAR_20)
  FUNC_14(VAR_16);

 VAR_23 = FUNC_19(&VAR_16->kvm->srcu);
 if (FUNC_2(VAR_16)) {
  FUNC_17(VAR_16, VAR_16->arch.walk_mmu, FUNC_8(VAR_16));
  VAR_19 = 1;
 }
 FUNC_20(&VAR_16->kvm->srcu, VAR_23);

 if (VAR_19)
  FUNC_5(VAR_16);

 VAR_22 = VAR_2;
 VAR_21 = FUNC_1(
  (const unsigned long *)VAR_17->interrupt_bitmap, VAR_22);
 if (VAR_21 < VAR_22) {
  FUNC_6(VAR_16, VAR_21, 0);
  FUNC_18("Set back pending irq %d\n", VAR_21);
 }

 FUNC_13(VAR_16, &VAR_17->cs, VAR_5);
 FUNC_13(VAR_16, &VAR_17->ds, VAR_6);
 FUNC_13(VAR_16, &VAR_17->es, VAR_7);
 FUNC_13(VAR_16, &VAR_17->fs, VAR_8);
 FUNC_13(VAR_16, &VAR_17->gs, VAR_9);
 FUNC_13(VAR_16, &VAR_17->ss, VAR_11);

 FUNC_13(VAR_16, &VAR_17->tr, VAR_12);
 FUNC_13(VAR_16, &VAR_17->ldt, VAR_10);

 FUNC_26(VAR_16);


 if (FUNC_16(VAR_16) && FUNC_10(VAR_16) == 0xfff0 &&
     VAR_17->cs.selector == 0xf000 && VAR_17->cs.base == 0xffff0000 &&
     !FUNC_3(VAR_16))
  VAR_16->arch.mp_state = VAR_1;

 FUNC_4(VAR_3, VAR_16);

 VAR_25 = 0;
out:
 return VAR_25;
}
