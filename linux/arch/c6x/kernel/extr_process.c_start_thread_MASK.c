
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {unsigned int pc; unsigned long sp; int tsr; } ;
struct TYPE_3__ {unsigned long usp; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(struct pt_regs *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 VAR_3 -= 8;

 VAR_1->pc = VAR_2;
 VAR_1->sp = VAR_3;
 VAR_1->tsr |= 0x40;
 VAR_0->thread.usp = VAR_3;
}
