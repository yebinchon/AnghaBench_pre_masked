
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int exception; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int (* patch_hypercall ) (struct kvm_vcpu*,char*) ;} ;


 struct kvm_vcpu* FUNC_0 (struct x86_emulate_ctxt*) ;
 int FUNC_1 (struct x86_emulate_ctxt*,unsigned long,char*,int,int *) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (struct kvm_vcpu*,char*) ;

__attribute__((used)) static int FUNC_4(struct x86_emulate_ctxt *VAR_1)
{
 struct kvm_vcpu *VAR_2 = FUNC_0(VAR_1);
 char VAR_3[3];
 unsigned long VAR_4 = FUNC_2(VAR_2);

 VAR_0->patch_hypercall(VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_4, VAR_3, 3,
  &VAR_1->exception);
}
