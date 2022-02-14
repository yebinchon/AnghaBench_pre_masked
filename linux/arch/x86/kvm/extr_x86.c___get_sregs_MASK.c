
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nr; int soft; scalar_t__ injected; } ;
struct TYPE_9__ {TYPE_3__ interrupt; int efer; int cr2; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_7__ {int base; int limit; } ;
struct TYPE_6__ {int base; int limit; } ;
struct kvm_sregs {scalar_t__ interrupt_bitmap; int apic_base; int efer; int cr8; int cr4; int cr3; int cr2; int cr0; TYPE_2__ gdt; TYPE_1__ idt; int ldt; int tr; int ss; int gs; int fs; int es; int ds; int cs; } ;
struct desc_ptr {int address; int size; } ;
struct TYPE_10__ {int (* get_gdt ) (struct kvm_vcpu*,struct desc_ptr*) ;int (* get_idt ) (struct kvm_vcpu*,struct desc_ptr*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int *,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 TYPE_5__* VAR_8 ;
 int FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (int ,unsigned long*) ;
 int FUNC_8 (struct kvm_vcpu*,struct desc_ptr*) ;
 int FUNC_9 (struct kvm_vcpu*,struct desc_ptr*) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_9, struct kvm_sregs *VAR_10)
{
 struct desc_ptr VAR_11;

 FUNC_2(VAR_9, &VAR_10->cs, VAR_0);
 FUNC_2(VAR_9, &VAR_10->ds, VAR_1);
 FUNC_2(VAR_9, &VAR_10->es, VAR_2);
 FUNC_2(VAR_9, &VAR_10->fs, VAR_3);
 FUNC_2(VAR_9, &VAR_10->gs, VAR_4);
 FUNC_2(VAR_9, &VAR_10->ss, VAR_6);

 FUNC_2(VAR_9, &VAR_10->tr, VAR_7);
 FUNC_2(VAR_9, &VAR_10->ldt, VAR_5);

 VAR_8->get_idt(VAR_9, &VAR_11);
 VAR_10->idt.limit = VAR_11.size;
 VAR_10->idt.base = VAR_11.address;
 VAR_8->get_gdt(VAR_9, &VAR_11);
 VAR_10->gdt.limit = VAR_11.size;
 VAR_10->gdt.base = VAR_11.address;

 VAR_10->cr0 = FUNC_3(VAR_9);
 VAR_10->cr2 = VAR_9->arch.cr2;
 VAR_10->cr3 = FUNC_4(VAR_9);
 VAR_10->cr4 = FUNC_5(VAR_9);
 VAR_10->cr8 = FUNC_1(VAR_9);
 VAR_10->efer = VAR_9->arch.efer;
 VAR_10->apic_base = FUNC_0(VAR_9);

 FUNC_6(VAR_10->interrupt_bitmap, 0, sizeof(VAR_10->interrupt_bitmap));

 if (VAR_9->arch.interrupt.injected && !VAR_9->arch.interrupt.soft)
  FUNC_7(VAR_9->arch.interrupt.nr,
   (unsigned long *)VAR_10->interrupt_bitmap);
}
