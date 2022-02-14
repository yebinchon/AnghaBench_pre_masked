
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long pc; unsigned long r1; int msr; scalar_t__ pt_mode; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct pt_regs *VAR_2, unsigned long VAR_3, unsigned long VAR_4)
{
 VAR_2->pc = VAR_3;
 VAR_2->r1 = VAR_4;
 VAR_2->pt_mode = 0;




}
