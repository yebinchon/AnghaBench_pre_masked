
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {unsigned long nip; int trap; int msr; } ;
struct TYPE_2__ {int * insn; } ;
struct kprobe {TYPE_1__ ainsn; int * addr; } ;
struct instruction_op {int dummy; } ;
typedef int kprobe_opcode_t ;


 int VAR_0 ;
 int FUNC_0 (struct instruction_op*,struct pt_regs*,int ) ;
 int FUNC_1 (struct pt_regs*,struct instruction_op*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int VAR_1 ;
 int FUNC_4 (struct pt_regs*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_5(struct kprobe *VAR_2)
{
 struct pt_regs VAR_3;
 struct instruction_op VAR_4;
 unsigned long VAR_5 = 0;






 if (VAR_2->addr == (kprobe_opcode_t *)&VAR_1)
  return (unsigned long)VAR_2->addr + sizeof(kprobe_opcode_t);







 if (!FUNC_3((unsigned long)VAR_2->addr))
  return 0;

 FUNC_4(&VAR_3, 0, sizeof(struct pt_regs));
 VAR_3.nip = (unsigned long)VAR_2->addr;
 VAR_3.trap = 0x0;
 VAR_3.msr = VAR_0;
 if (!FUNC_2(*VAR_2->ainsn.insn) &&
   FUNC_0(&VAR_4, &VAR_3, *VAR_2->ainsn.insn) == 1) {
  FUNC_1(&VAR_3, &VAR_4);
  VAR_5 = VAR_3.nip;
 }

 return VAR_5;
}
