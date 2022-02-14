
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic_irq {int trig_mode; int level; int vector; int delivery_mode; } ;
struct kvm_lapic {int dummy; } ;
struct dest_map {int dummy; } ;


 int FUNC_0 (struct kvm_lapic*,int ,int ,int ,int ,struct dest_map*) ;

int FUNC_1(struct kvm_vcpu *VAR_0, struct kvm_lapic_irq *VAR_1,
       struct dest_map *VAR_2)
{
 struct kvm_lapic *VAR_3 = VAR_0->arch.apic;

 return FUNC_0(VAR_3, VAR_1->delivery_mode, VAR_1->vector,
   VAR_1->level, VAR_1->trig_mode, VAR_2);
}
