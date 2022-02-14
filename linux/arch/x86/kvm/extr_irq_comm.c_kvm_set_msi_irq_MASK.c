
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_lapic_irq {int dest_id; int vector; int dest_mode; int trig_mode; int delivery_mode; int msi_redir_hint; int level; scalar_t__ shorthand; } ;
struct TYPE_4__ {int address_lo; int data; scalar_t__ address_hi; } ;
struct kvm_kernel_irq_routing_entry {TYPE_2__ msi; } ;
struct TYPE_3__ {scalar_t__ x2apic_format; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,int) ;

void FUNC_2(struct kvm *VAR_7, struct kvm_kernel_irq_routing_entry *VAR_8,
       struct kvm_lapic_irq *VAR_9)
{
 FUNC_1(VAR_8->msi.address_lo | (VAR_7->arch.x2apic_format ?
                                      (u64)VAR_8->msi.address_hi << 32 : 0),
                       VAR_8->msi.data);

 VAR_9->dest_id = (VAR_8->msi.address_lo &
   VAR_0) >> VAR_1;
 if (VAR_7->arch.x2apic_format)
  VAR_9->dest_id |= FUNC_0(VAR_8->msi.address_hi);
 VAR_9->vector = (VAR_8->msi.data &
   VAR_5) >> VAR_6;
 VAR_9->dest_mode = (1 << VAR_2) & VAR_8->msi.address_lo;
 VAR_9->trig_mode = (1 << VAR_4) & VAR_8->msi.data;
 VAR_9->delivery_mode = VAR_8->msi.data & 0x700;
 VAR_9->msi_redir_hint = ((VAR_8->msi.address_lo
  & VAR_3) > 0);
 VAR_9->level = 1;
 VAR_9->shorthand = 0;
}
