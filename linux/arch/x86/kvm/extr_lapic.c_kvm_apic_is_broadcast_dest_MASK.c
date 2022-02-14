
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_lapic_irq {scalar_t__ dest_id; } ;
struct kvm_lapic {int dummy; } ;
struct kvm_apic_map {scalar_t__ mode; } ;
struct TYPE_2__ {scalar_t__ x2apic_broadcast_quirk_disabled; } ;
struct kvm {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*) ;

__attribute__((used)) static bool FUNC_1(struct kvm *VAR_3, struct kvm_lapic **VAR_4,
  struct kvm_lapic_irq *VAR_5, struct kvm_apic_map *VAR_6)
{
 if (VAR_3->arch.x2apic_broadcast_quirk_disabled) {
  if ((VAR_5->dest_id == VAR_0 &&
    VAR_6->mode != VAR_1))
   return 1;
  if (VAR_5->dest_id == VAR_2)
   return 1;
 } else {
  bool VAR_7 = VAR_4 && *VAR_4 && FUNC_0(*VAR_4);
  if (VAR_5->dest_id == (VAR_7 ?
                       VAR_2 : VAR_0))
   return 1;
 }

 return 0;
}
