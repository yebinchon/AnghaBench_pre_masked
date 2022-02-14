
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_enable_cap {int cap; int* args; scalar_t__ flags; } ;
struct TYPE_2__ {int disabled_quirks; int nr_reserved_ioapic_pins; int x2apic_format; int x2apic_broadcast_quirk_disabled; int mwait_in_guest; int hlt_in_guest; int pause_in_guest; int cstate_in_guest; int guest_can_read_msr_platform_info; int exception_payload_enabled; int irqchip_mode; } ;
struct kvm {TYPE_1__ arch; int lock; int created_vcpus; } ;


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
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

int FUNC_6(struct kvm *VAR_12,
       struct kvm_enable_cap *VAR_13)
{
 int VAR_14;

 if (VAR_13->flags)
  return -VAR_1;

 switch (VAR_13->cap) {
 case 133:
  VAR_12->arch.disabled_quirks = VAR_13->args[0];
  VAR_14 = 0;
  break;
 case 130: {
  FUNC_3(&VAR_12->lock);
  VAR_14 = -VAR_1;
  if (VAR_13->args[0] > VAR_11)
   goto split_irqchip_unlock;
  VAR_14 = -VAR_0;
  if (FUNC_0(VAR_12))
   goto split_irqchip_unlock;
  if (VAR_12->created_vcpus)
   goto split_irqchip_unlock;
  VAR_14 = FUNC_2(VAR_12);
  if (VAR_14)
   goto split_irqchip_unlock;

  FUNC_5();
  VAR_12->arch.irqchip_mode = VAR_2;
  VAR_12->arch.nr_reserved_ioapic_pins = VAR_13->args[0];
  VAR_14 = 0;
split_irqchip_unlock:
  FUNC_4(&VAR_12->lock);
  break;
 }
 case 129:
  VAR_14 = -VAR_1;
  if (VAR_13->args[0] & ~VAR_5)
   break;

  if (VAR_13->args[0] & VAR_4)
   VAR_12->arch.x2apic_format = 1;
  if (VAR_13->args[0] & VAR_3)
   VAR_12->arch.x2apic_broadcast_quirk_disabled = 1;

  VAR_14 = 0;
  break;
 case 128:
  VAR_14 = -VAR_1;
  if (VAR_13->args[0] & ~VAR_10)
   break;

  if ((VAR_13->args[0] & VAR_8) &&
   FUNC_1())
   VAR_12->arch.mwait_in_guest = 1;
  if (VAR_13->args[0] & VAR_7)
   VAR_12->arch.hlt_in_guest = 1;
  if (VAR_13->args[0] & VAR_9)
   VAR_12->arch.pause_in_guest = 1;
  if (VAR_13->args[0] & VAR_6)
   VAR_12->arch.cstate_in_guest = 1;
  VAR_14 = 0;
  break;
 case 131:
  VAR_12->arch.guest_can_read_msr_platform_info = VAR_13->args[0];
  VAR_14 = 0;
  break;
 case 132:
  VAR_12->arch.exception_payload_enabled = VAR_13->args[0];
  VAR_14 = 0;
  break;
 default:
  VAR_14 = -VAR_1;
  break;
 }
 return VAR_14;
}
