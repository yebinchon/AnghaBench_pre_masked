
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long dsisr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct pt_regs *VAR_2)
{
 unsigned long VAR_3 = VAR_2->dsisr;

 if (VAR_3 & VAR_0) {
  FUNC_1("Instruction");
  FUNC_0(VAR_1, VAR_3 & ~VAR_0);
 } else
  FUNC_1("Data");
 FUNC_1(" machine check in kernel mode.\n");

 return 0;
}
