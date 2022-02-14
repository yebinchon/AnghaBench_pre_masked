
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,struct pt_regs*) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct pt_regs *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = ((VAR_1 >> 19) & 0xf);
 if (VAR_2 == 11 || VAR_2 == 14)
  return 8;
 VAR_2 &= 3;
 if (!VAR_2)
  return 4;
 else if (VAR_2 == 3)
  return 16;
 else if (VAR_2 == 2)
  return 2;
 else {
  FUNC_1("Impossible unaligned trap. insn=%08x\n", VAR_1);
  FUNC_0("Byte sized unaligned access?!?!", VAR_0);







  return 0;
 }
}
