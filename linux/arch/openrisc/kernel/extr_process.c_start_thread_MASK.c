
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; unsigned long sr; unsigned long sp; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct pt_regs*,int ,int) ;
 unsigned long FUNC_1 (int ) ;

void FUNC_2(struct pt_regs *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_0) & ~VAR_1;

 FUNC_0(VAR_2, 0, sizeof(struct pt_regs));

 VAR_2->pc = VAR_3;
 VAR_2->sr = VAR_5;
 VAR_2->sp = VAR_4;
}
