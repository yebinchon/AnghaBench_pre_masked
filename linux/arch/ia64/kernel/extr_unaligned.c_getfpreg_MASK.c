
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct switch_stack {int dummy; } ;
struct pt_regs {int dummy; } ;
struct ia64_fpreg {int dummy; } ;
struct TYPE_4__ {struct ia64_fpreg* fph; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int FUNC_0 (char*,int ,unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct ia64_fpreg*) ;
 int FUNC_4 (struct ia64_fpreg*) ;
 size_t FUNC_5 (struct pt_regs*,unsigned long) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7 (unsigned long VAR_2, struct ia64_fpreg *VAR_3, struct pt_regs *VAR_4)
{
 struct switch_stack *VAR_5 = (struct switch_stack *) VAR_4 - 1;
 unsigned long VAR_6;
 if (VAR_2 >= VAR_0) {
  FUNC_6(VAR_1);
  *VAR_3 = VAR_1->thread.fph[FUNC_5(VAR_4, VAR_2)];
 } else {




  switch(VAR_2) {
  case 0:
   FUNC_3(VAR_3);
   break;
  case 1:
   FUNC_4(VAR_3);
   break;
  default:



   VAR_6 = FUNC_1(VAR_2) ? (unsigned long)VAR_5
       : (unsigned long)VAR_4;

   FUNC_0("is_sw=%d tmp_base=%lx offset=0x%x\n",
          FUNC_1(VAR_2), VAR_6, FUNC_2(VAR_2));

   VAR_6 += FUNC_2(VAR_2);
   *VAR_3 = *(struct ia64_fpreg *)VAR_6;
  }
 }
}
