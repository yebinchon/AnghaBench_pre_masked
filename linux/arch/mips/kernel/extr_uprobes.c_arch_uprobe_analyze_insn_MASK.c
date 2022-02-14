
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mips_instruction {int word; } ;
struct mm_struct {int dummy; } ;
struct arch_uprobe {int * ixol; int * insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (union mips_instruction) ;
 size_t FUNC_1 (union mips_instruction) ;
 int FUNC_2 (char*) ;

int FUNC_3(struct arch_uprobe *VAR_2,
 struct mm_struct *VAR_3, unsigned long VAR_4)
{
 union mips_instruction VAR_5;





 if (VAR_4 & 0x03)
  return -VAR_0;

 VAR_5.word = VAR_2->insn[0];

 if (FUNC_0(VAR_5)) {
  FUNC_2("Uprobes for compact branches are not supported\n");
  return -VAR_0;
 }

 VAR_2->ixol[0] = VAR_2->insn[FUNC_1(VAR_5)];
 VAR_2->ixol[1] = VAR_1;

 return 0;
}
