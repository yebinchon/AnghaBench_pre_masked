
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pc; int lo; int hi; int * gprs; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_regs {int pc; int lo; int hi; int * gpr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->arch.gprs); VAR_2++)
  VAR_1->gpr[VAR_2] = VAR_0->arch.gprs[VAR_2];

 VAR_1->hi = VAR_0->arch.hi;
 VAR_1->lo = VAR_0->arch.lo;
 VAR_1->pc = VAR_0->arch.pc;

 FUNC_2(VAR_0);
 return 0;
}
