
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uml_pt_regs {int dummy; } ;
struct siginfo {int dummy; } ;
struct TYPE_3__ {int * fault_catcher; } ;
struct TYPE_4__ {TYPE_1__ thread; } ;


 int FUNC_0 (int *,int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int,struct siginfo*,struct uml_pt_regs*) ;

void FUNC_2(int VAR_1, struct siginfo *VAR_2, struct uml_pt_regs *VAR_3)
{
 if (VAR_0->thread.fault_catcher != ((void*)0))
  FUNC_0(VAR_0->thread.fault_catcher, 1);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}
