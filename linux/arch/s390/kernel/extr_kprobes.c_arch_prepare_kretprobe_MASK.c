
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long* gprs; } ;
struct kretprobe_instance {int * ret_addr; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;

void FUNC_0(struct kretprobe_instance *VAR_1, struct pt_regs *VAR_2)
{
 VAR_1->ret_addr = (kprobe_opcode_t *) VAR_2->gprs[14];


 VAR_2->gprs[14] = (unsigned long) &VAR_0;
}
