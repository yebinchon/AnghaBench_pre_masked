
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct kretprobe_instance {unsigned long* fp; int * ret_addr; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 unsigned long* FUNC_0 (struct pt_regs*) ;

void FUNC_1(struct kretprobe_instance *VAR_1, struct pt_regs *VAR_2)
{
 unsigned long *VAR_3 = FUNC_0(VAR_2);

 VAR_1->ret_addr = (kprobe_opcode_t *) *VAR_3;
 VAR_1->fp = VAR_3;


 *VAR_3 = (unsigned long) &VAR_0;
}
