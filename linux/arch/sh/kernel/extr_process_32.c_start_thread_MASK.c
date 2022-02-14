
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; unsigned long* regs; int sr; scalar_t__ pr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct pt_regs *VAR_2, unsigned long VAR_3,
    unsigned long VAR_4)
{
 VAR_2->pr = 0;
 VAR_2->sr = VAR_0;
 VAR_2->pc = VAR_3;
 VAR_2->regs[15] = VAR_4;

 FUNC_0(VAR_1);
}
