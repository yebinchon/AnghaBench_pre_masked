
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {scalar_t__ isr_count; int highest_isr_cache; struct kvm_vcpu* vcpu; scalar_t__ regs; } ;
struct TYPE_4__ {int (* hwapic_isr_update ) (struct kvm_vcpu*,int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct kvm_lapic*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(int VAR_2, struct kvm_lapic *VAR_3)
{
 struct kvm_vcpu *VAR_4;
 if (!FUNC_1(VAR_2, VAR_3->regs + VAR_0))
  return;

 VAR_4 = VAR_3->vcpu;
 if (FUNC_4(VAR_4->arch.apicv_active))
  VAR_1->hwapic_isr_update(VAR_4,
            FUNC_2(VAR_3));
 else {
  --VAR_3->isr_count;
  FUNC_0(VAR_3->isr_count < 0);
  VAR_3->highest_isr_cache = -1;
 }
}
