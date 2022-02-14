
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* get_interrupt_shadow ) (struct kvm_vcpu*) ;int (* set_interrupt_shadow ) (struct kvm_vcpu*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_1->get_interrupt_shadow(VAR_2);







 if (VAR_4 & VAR_3)
  VAR_3 = 0;
 if (FUNC_3(VAR_4 || VAR_3)) {
  VAR_1->set_interrupt_shadow(VAR_2, VAR_3);
  if (!VAR_3)
   FUNC_0(VAR_0, VAR_2);
 }
}
