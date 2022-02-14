
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu_hv_synic {int sint; } ;
struct TYPE_2__ {int apic; } ;
struct kvm_vcpu {int vcpu_id; TYPE_1__ arch; int kvm; } ;
struct kvm_lapic_irq {int vector; int level; int delivery_mode; int dest_mode; int shorthand; } ;
typedef int irq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct kvm_lapic_irq*,int *) ;
 int FUNC_2 (struct kvm_lapic_irq*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu_hv_synic*,int ) ;
 struct kvm_vcpu* FUNC_5 (struct kvm_vcpu_hv_synic*) ;
 int FUNC_6 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu_hv_synic *VAR_5, u32 VAR_6)
{
 struct kvm_vcpu *VAR_7 = FUNC_5(VAR_5);
 struct kvm_lapic_irq VAR_8;
 int VAR_9, VAR_10;

 if (VAR_6 >= FUNC_0(VAR_5->sint))
  return -VAR_3;

 VAR_10 = FUNC_3(FUNC_4(VAR_5, VAR_6));
 if (VAR_10 < 0)
  return -VAR_4;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.shorthand = VAR_1;
 VAR_8.dest_mode = VAR_0;
 VAR_8.delivery_mode = VAR_2;
 VAR_8.vector = VAR_10;
 VAR_8.level = 1;

 VAR_9 = FUNC_1(VAR_7->kvm, VAR_7->arch.apic, &VAR_8, ((void*)0));
 FUNC_6(VAR_7->vcpu_id, VAR_6, VAR_8.vector, VAR_9);
 return VAR_9;
}
