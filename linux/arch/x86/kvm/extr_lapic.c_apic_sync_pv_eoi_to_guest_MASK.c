
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_lapic {int highest_isr_cache; int vcpu; scalar_t__ irr_pending; } ;


 scalar_t__ FUNC_0 (struct kvm_lapic*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0,
     struct kvm_lapic *VAR_1)
{
 if (!FUNC_1(VAR_0) ||

     VAR_1->irr_pending ||

     VAR_1->highest_isr_cache == -1 ||

     FUNC_0(VAR_1, VAR_1->highest_isr_cache)) {




  return;
 }

 FUNC_2(VAR_1->vcpu);
}
