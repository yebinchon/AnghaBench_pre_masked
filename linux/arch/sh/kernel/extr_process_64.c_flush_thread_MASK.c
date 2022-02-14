
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {struct pt_regs* kregs; struct pt_regs* uregs; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;
 struct pt_regs VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_1(void)
{
 if(VAR_1->thread.kregs==&VAR_2) {
          VAR_1->thread.kregs =
             ((struct pt_regs *)(VAR_0 + (unsigned long) VAR_1) - 1);
   VAR_1->thread.uregs = VAR_1->thread.kregs;
 }
}
