
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vector; int trig_mode; int mask; scalar_t__ remote_irr; } ;
union kvm_ioapic_redirect_entry {int bits; TYPE_3__ fields; } ;
struct TYPE_5__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_2__ arch; } ;
struct kvm_lapic {int dummy; } ;
struct dest_map {int* vectors; int map; } ;
struct TYPE_4__ {struct dest_map dest_map; } ;
struct kvm_ioapic {int irr; scalar_t__* irq_eoi; int eoi_inject; int lock; int kvm; union kvm_ioapic_redirect_entry* redirtbl; TYPE_1__ rtc_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct kvm_ioapic*,int,int) ;
 int FUNC_2 (struct kvm_lapic*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct kvm_ioapic*,struct kvm_vcpu*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (size_t,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct kvm_vcpu *VAR_7,
   struct kvm_ioapic *VAR_8, int VAR_9, int VAR_10)
{
 struct dest_map *VAR_11 = &VAR_8->rtc_status.dest_map;
 struct kvm_lapic *VAR_12 = VAR_7->arch.apic;
 int VAR_13;


 if (FUNC_8(VAR_7->vcpu_id, VAR_11->map) &&
     VAR_9 == VAR_11->vectors[VAR_7->vcpu_id])
  FUNC_4(VAR_8, VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  union kvm_ioapic_redirect_entry *VAR_14 = &VAR_8->redirtbl[VAR_13];

  if (VAR_14->fields.vector != VAR_9)
   continue;
  FUNC_7(&VAR_8->lock);
  FUNC_3(VAR_8->kvm, VAR_6, VAR_13);
  FUNC_6(&VAR_8->lock);

  if (VAR_10 != VAR_3 ||
      FUNC_2(VAR_12, VAR_0) & VAR_1)
   continue;

  FUNC_0(VAR_14->fields.trig_mode == VAR_3);
  VAR_14->fields.remote_irr = 0;
  if (!VAR_14->fields.mask && (VAR_8->irr & (1 << VAR_13))) {
   ++VAR_8->irq_eoi[VAR_13];
   if (VAR_8->irq_eoi[VAR_13] == VAR_5) {
    FUNC_5(&VAR_8->eoi_inject, VAR_2 / 100);
    VAR_8->irq_eoi[VAR_13] = 0;
    FUNC_9(VAR_14->bits);
   } else {
    FUNC_1(VAR_8, VAR_13, 0);
   }
  } else {
   VAR_8->irq_eoi[VAR_13] = 0;
  }
 }
}
