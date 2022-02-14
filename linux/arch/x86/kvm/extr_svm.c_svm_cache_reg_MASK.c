
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int walk_mmu; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum kvm_reg { ____Placeholder_kvm_reg } kvm_reg ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;

 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1, enum kvm_reg VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(!VAR_0);
  FUNC_3(VAR_1, VAR_1->arch.walk_mmu, FUNC_2(VAR_1));
  break;
 default:
  FUNC_0();
 }
}
