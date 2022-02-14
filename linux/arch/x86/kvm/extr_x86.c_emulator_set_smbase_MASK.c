
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct x86_emulate_ctxt {int dummy; } ;
struct TYPE_2__ {int smbase; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;

__attribute__((used)) static void FUNC_1(struct x86_emulate_ctxt *VAR_0, u64 VAR_1)
{
 struct kvm_vcpu *VAR_2 = FUNC_0(VAR_0);

 VAR_2->arch.smbase = VAR_1;
}
