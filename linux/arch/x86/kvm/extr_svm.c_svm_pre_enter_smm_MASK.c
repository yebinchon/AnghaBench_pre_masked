
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vmcb; } ;
struct vcpu_svm {TYPE_3__* vmcb; TYPE_1__ nested; } ;
struct TYPE_8__ {int * regs; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {int rip; int rsp; int rax; } ;
struct TYPE_7__ {TYPE_2__ save; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (int ,char*,int,int) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct kvm_vcpu *VAR_4, char *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 if (FUNC_0(VAR_4)) {

  FUNC_2(VAR_3, VAR_5, 0x7ed8, 1);

  FUNC_2(VAR_3, VAR_5, 0x7ee0, VAR_6->nested.vmcb);

  VAR_6->vmcb->save.rax = VAR_4->arch.regs[VAR_0];
  VAR_6->vmcb->save.rsp = VAR_4->arch.regs[VAR_2];
  VAR_6->vmcb->save.rip = VAR_4->arch.regs[VAR_1];

  VAR_7 = FUNC_1(VAR_6);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
