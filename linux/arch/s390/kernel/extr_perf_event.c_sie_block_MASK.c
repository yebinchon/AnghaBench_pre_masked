
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {scalar_t__* empty1; } ;
struct pt_regs {scalar_t__* gprs; } ;
struct kvm_s390_sie_block {int dummy; } ;



__attribute__((used)) static struct kvm_s390_sie_block *FUNC_0(struct pt_regs *VAR_0)
{
 struct stack_frame *VAR_1 = (struct stack_frame *) VAR_0->gprs[15];

 if (!VAR_1)
  return ((void*)0);

 return (struct kvm_s390_sie_block *) VAR_1->empty1[0];
}
