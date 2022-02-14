
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int apicv_active; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_lapic {scalar_t__ isr_count; int highest_isr_cache; struct kvm_vcpu* vcpu; scalar_t__ regs; } ;
struct TYPE_4__ {int (* hwapic_isr_update ) (struct kvm_vcpu*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(int VAR_3, struct kvm_lapic *VAR_4)
{
 struct kvm_vcpu *VAR_5;

 if (FUNC_1(VAR_3, VAR_4->regs + VAR_0))
  return;

 VAR_5 = VAR_4->vcpu;






 if (FUNC_3(VAR_5->arch.apicv_active))
  VAR_2->hwapic_isr_update(VAR_5, VAR_3);
 else {
  ++VAR_4->isr_count;
  FUNC_0(VAR_4->isr_count > VAR_1);





  VAR_4->highest_isr_cache = VAR_3;
 }
}
