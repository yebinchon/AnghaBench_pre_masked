
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dr6; int dr7; int db; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_debugregs {int dr6; int dr7; int db; scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_1,
         struct kvm_debugregs *VAR_2)
{
 if (VAR_2->flags)
  return -VAR_0;

 if (VAR_2->dr6 & ~0xffffffffull)
  return -VAR_0;
 if (VAR_2->dr7 & ~0xffffffffull)
  return -VAR_0;

 FUNC_3(VAR_1->arch.db, VAR_2->db, sizeof(VAR_1->arch.db));
 FUNC_0(VAR_1);
 VAR_1->arch.dr6 = VAR_2->dr6;
 FUNC_1(VAR_1);
 VAR_1->arch.dr7 = VAR_2->dr7;
 FUNC_2(VAR_1);

 return 0;
}
