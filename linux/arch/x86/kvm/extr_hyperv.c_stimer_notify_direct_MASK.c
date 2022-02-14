
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int apic_vector; } ;
struct kvm_vcpu_hv_stimer {TYPE_1__ config; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_lapic_irq {int vector; int delivery_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_lapic_irq*,int *) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_2 (struct kvm_vcpu_hv_stimer*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu_hv_stimer *VAR_1)
{
 struct kvm_vcpu *VAR_2 = FUNC_2(VAR_1);
 struct kvm_lapic_irq VAR_3 = {
  .delivery_mode = VAR_0,
  .vector = VAR_1->config.apic_vector
 };

 if (FUNC_1(VAR_2))
  return !FUNC_0(VAR_2, &VAR_3, ((void*)0));
 return 0;
}
