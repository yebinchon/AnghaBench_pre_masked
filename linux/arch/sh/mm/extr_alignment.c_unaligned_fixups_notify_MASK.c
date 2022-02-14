
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int comm; } ;
struct pt_regs {int dummy; } ;
typedef int insn_size_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*,int ,int ,void*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct task_struct *VAR_3, insn_size_t VAR_4,
        struct pt_regs *VAR_5)
{
 if (FUNC_3(VAR_5) && (VAR_2 & VAR_0))
  FUNC_1("Fixing up unaligned userspace access "
     "in \"%s\" pid=%d pc=0x%p ins=0x%04hx\n",
     VAR_3->comm, FUNC_2(VAR_3),
     (void *)FUNC_0(VAR_5), VAR_4);
 else if (VAR_1)
  FUNC_1("Fixing up unaligned kernel access "
     "in \"%s\" pid=%d pc=0x%p ins=0x%04hx\n",
     VAR_3->comm, FUNC_2(VAR_3),
     (void *)FUNC_0(VAR_5), VAR_4);
}
