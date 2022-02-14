
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int switch_db_regs; int dr7; int dr6; int * db; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_3)
{
 FUNC_1(VAR_3->arch.db[0], 0);
 FUNC_1(VAR_3->arch.db[1], 1);
 FUNC_1(VAR_3->arch.db[2], 2);
 FUNC_1(VAR_3->arch.db[3], 3);
 FUNC_1(VAR_3->arch.dr6, 6);
 VAR_3->arch.dr7 = FUNC_3(VAR_1);

 VAR_3->arch.switch_db_regs &= ~VAR_2;
 FUNC_0(FUNC_2(VAR_3), VAR_0);
}
