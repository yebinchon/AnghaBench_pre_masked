
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dr7; int db; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_debugregs {unsigned long dr6; int reserved; scalar_t__ flags; int dr7; int db; } ;


 int FUNC_0 (struct kvm_vcpu*,int,unsigned long*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0,
          struct kvm_debugregs *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(VAR_1->db, VAR_0->arch.db, sizeof(VAR_0->arch.db));
 FUNC_0(VAR_0, 6, &VAR_2);
 VAR_1->dr6 = VAR_2;
 VAR_1->dr7 = VAR_0->arch.dr7;
 VAR_1->flags = 0;
 FUNC_2(&VAR_1->reserved, 0, sizeof(VAR_1->reserved));
}
