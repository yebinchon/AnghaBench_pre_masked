
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long ip; unsigned long sp; int flags; int cs; void* ss; void* es; void* ds; scalar_t__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct pt_regs*,int ) ;

void
FUNC_2(struct pt_regs *VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 FUNC_1(VAR_3, 0);
 VAR_3->fs = 0;
 VAR_3->ds = VAR_2;
 VAR_3->es = VAR_2;
 VAR_3->ss = VAR_2;
 VAR_3->cs = VAR_1;
 VAR_3->ip = VAR_4;
 VAR_3->sp = VAR_5;
 VAR_3->flags = VAR_0;
 FUNC_0();
}
