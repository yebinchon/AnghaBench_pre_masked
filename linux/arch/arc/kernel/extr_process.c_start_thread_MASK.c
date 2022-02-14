
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long sp; unsigned long ret; int status32; int lp_start; int lp_end; scalar_t__ eflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct pt_regs * VAR_3, unsigned long VAR_4, unsigned long VAR_5)
{
 VAR_3->sp = VAR_5;
 VAR_3->ret = VAR_4;






 VAR_3->status32 = VAR_2 | VAR_1 | VAR_0;






 VAR_3->lp_start = 0x10;
 VAR_3->lp_end = 0x80;
}
