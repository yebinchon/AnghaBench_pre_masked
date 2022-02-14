
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int vector; int dest_mode; int dest_id; } ;
union kvm_ioapic_redirect_entry {TYPE_3__ fields; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_2__* kvm; } ;
struct dest_map {int map; int * vectors; } ;
struct TYPE_8__ {int pending_eoi; struct dest_map dest_map; } ;
struct kvm_ioapic {TYPE_4__ rtc_status; union kvm_ioapic_redirect_entry* redirtbl; } ;
struct TYPE_5__ {struct kvm_ioapic* vioapic; } ;
struct TYPE_6__ {TYPE_1__ arch; } ;


 size_t VAR_0 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int *,int ,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_ioapic*) ;
 int FUNC_5 (size_t,int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1)
{
 bool VAR_2, VAR_3;
 struct kvm_ioapic *VAR_4 = VAR_1->kvm->arch.vioapic;
 struct dest_map *VAR_5 = &VAR_4->rtc_status.dest_map;
 union kvm_ioapic_redirect_entry *VAR_6;

 VAR_6 = &VAR_4->redirtbl[VAR_0];
 if (!FUNC_2(VAR_1, ((void*)0), 0, VAR_6->fields.dest_id,
    VAR_6->fields.dest_mode))
  return;

 VAR_2 = FUNC_3(VAR_1, VAR_6->fields.vector);
 VAR_3 = FUNC_5(VAR_1->vcpu_id, VAR_5->map);

 if (VAR_2 == VAR_3)
  return;

 if (VAR_2) {
  FUNC_1(VAR_1->vcpu_id, VAR_5->map);
  VAR_5->vectors[VAR_1->vcpu_id] = VAR_6->fields.vector;
  VAR_4->rtc_status.pending_eoi++;
 } else {
  FUNC_0(VAR_1->vcpu_id, VAR_5->map);
  VAR_4->rtc_status.pending_eoi--;
  FUNC_4(VAR_4);
 }
}
