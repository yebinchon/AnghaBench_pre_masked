
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct switch_stack {int dummy; } ;
struct pt_regs {int cr_ipsr; } ;
struct ia64_fpreg {int dummy; } ;
struct TYPE_4__ {struct ia64_fpreg* fph; } ;
struct TYPE_5__ {TYPE_1__ thread; } ;


 int FUNC_0 (char*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 size_t FUNC_3 (struct pt_regs*,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5 (unsigned long VAR_3, struct ia64_fpreg *VAR_4, struct pt_regs *VAR_5)
{
 struct switch_stack *VAR_6 = (struct switch_stack *)VAR_5 - 1;
 unsigned long VAR_7;
 if (VAR_3 >= VAR_0) {
  FUNC_4(VAR_2);
  VAR_2->thread.fph[FUNC_3(VAR_5, VAR_3)] = *VAR_4;
 } else {



  if (FUNC_1(VAR_3)) {
   VAR_7 = (unsigned long)VAR_6;
  } else {
   VAR_7 = (unsigned long)VAR_5;
  }

  FUNC_0("tmp_base=%lx offset=%d\n", VAR_7, FUNC_2(VAR_3));

  VAR_7 += FUNC_2(VAR_3);
  *(struct ia64_fpreg *)VAR_7 = *VAR_4;







  VAR_5->cr_ipsr |= VAR_1;
 }
}
