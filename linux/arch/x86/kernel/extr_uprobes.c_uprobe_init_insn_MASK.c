
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int nbytes; } ;
struct insn {TYPE_1__ opcode; } ;
struct arch_uprobe {int insn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct insn*) ;
 int FUNC_1 (struct insn*) ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 (struct insn*) ;
 int FUNC_3 (struct insn*) ;
 int FUNC_4 (struct insn*,int ,int,int) ;
 scalar_t__ FUNC_5 (struct insn*) ;
 scalar_t__ FUNC_6 (struct insn*) ;
 scalar_t__ FUNC_7 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct arch_uprobe *VAR_5, struct insn *VAR_6, bool VAR_7)
{
 u32 volatile *VAR_8;

 FUNC_4(VAR_6, VAR_5->insn, sizeof(VAR_5->insn), VAR_7);

 FUNC_3(VAR_6);
 if (!FUNC_2(VAR_6))
  return -VAR_0;

 if (FUNC_6(VAR_6))
  return -VAR_1;


 if (FUNC_5(VAR_6))
  return -VAR_1;

 if (VAR_7)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;

 if (FUNC_7(FUNC_0(VAR_6), (unsigned long *)VAR_8))
  return 0;

 if (VAR_6->opcode.nbytes == 2) {
  if (FUNC_7(FUNC_1(VAR_6), (unsigned long *)VAR_2))
   return 0;
 }

 return -VAR_1;
}
