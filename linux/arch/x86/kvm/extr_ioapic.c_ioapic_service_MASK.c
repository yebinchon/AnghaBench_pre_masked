
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ trig_mode; int remote_irr; int delivery_mode; int dest_mode; int vector; int dest_id; scalar_t__ mask; } ;
union kvm_ioapic_redirect_entry {TYPE_2__ fields; } ;
struct kvm_lapic_irq {scalar_t__ trig_mode; int delivery_mode; int level; int msi_redir_hint; scalar_t__ shorthand; int dest_mode; int vector; int dest_id; } ;
struct TYPE_3__ {int pending_eoi; int dest_map; } ;
struct kvm_ioapic {int irr_delivered; int kvm; TYPE_1__ rtc_status; union kvm_ioapic_redirect_entry* redirtbl; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,struct kvm_lapic_irq*,int *) ;

__attribute__((used)) static int FUNC_2(struct kvm_ioapic *VAR_3, int VAR_4, bool VAR_5)
{
 union kvm_ioapic_redirect_entry *VAR_6 = &VAR_3->redirtbl[VAR_4];
 struct kvm_lapic_irq VAR_7;
 int VAR_8;

 if (VAR_6->fields.mask ||
     (VAR_6->fields.trig_mode == VAR_1 &&
     VAR_6->fields.remote_irr))
  return -1;

 VAR_7.dest_id = VAR_6->fields.dest_id;
 VAR_7.vector = VAR_6->fields.vector;
 VAR_7.dest_mode = VAR_6->fields.dest_mode;
 VAR_7.trig_mode = VAR_6->fields.trig_mode;
 VAR_7.delivery_mode = VAR_6->fields.delivery_mode << 8;
 VAR_7.level = 1;
 VAR_7.shorthand = 0;
 VAR_7.msi_redir_hint = 0;

 if (VAR_7.trig_mode == VAR_0)
  VAR_3->irr_delivered |= 1 << VAR_4;

 if (VAR_4 == VAR_2 && VAR_5) {






  FUNC_0(VAR_3->rtc_status.pending_eoi != 0);
  VAR_8 = FUNC_1(VAR_3->kvm, ((void*)0), &VAR_7,
            &VAR_3->rtc_status.dest_map);
  VAR_3->rtc_status.pending_eoi = (VAR_8 < 0 ? 0 : VAR_8);
 } else
  VAR_8 = FUNC_1(VAR_3->kvm, ((void*)0), &VAR_7, ((void*)0));

 if (VAR_8 && VAR_7.trig_mode == VAR_1)
  VAR_6->fields.remote_irr = 1;

 return VAR_8;
}
