
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ trig_mode; int vector; int dest_mode; int dest_id; } ;
union kvm_ioapic_redirect_entry {TYPE_4__ fields; } ;
typedef int ulong ;
struct kvm_vcpu {size_t vcpu_id; TYPE_2__* kvm; } ;
struct dest_map {int * vectors; int map; } ;
struct TYPE_7__ {struct dest_map dest_map; } ;
struct kvm_ioapic {int lock; int kvm; union kvm_ioapic_redirect_entry* redirtbl; TYPE_3__ rtc_status; } ;
struct TYPE_5__ {struct kvm_ioapic* vioapic; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (size_t,int ) ;

void FUNC_7(struct kvm_vcpu *VAR_4, ulong *VAR_5)
{
 struct kvm_ioapic *VAR_6 = VAR_4->kvm->arch.vioapic;
 struct dest_map *VAR_7 = &VAR_6->rtc_status.dest_map;
 union kvm_ioapic_redirect_entry *VAR_8;
 int VAR_9;

 FUNC_4(&VAR_6->lock);


 if (FUNC_6(VAR_4->vcpu_id, VAR_7->map))
  FUNC_0(VAR_7->vectors[VAR_4->vcpu_id],
     VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_8 = &VAR_6->redirtbl[VAR_9];
  if (VAR_8->fields.trig_mode == VAR_0 ||
      FUNC_3(VAR_6->kvm, VAR_2, VAR_9) ||
      VAR_9 == VAR_3) {
   if (FUNC_1(VAR_4, ((void*)0), 0,
                VAR_8->fields.dest_id, VAR_8->fields.dest_mode) ||
       FUNC_2(VAR_4, VAR_8->fields.vector))
    FUNC_0(VAR_8->fields.vector,
       VAR_5);
  }
 }
 FUNC_5(&VAR_6->lock);
}
