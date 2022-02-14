
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_4__ {int fpc; } ;
struct TYPE_5__ {TYPE_1__ fpu; } ;
struct TYPE_6__ {TYPE_2__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct pt_regs*,int) ;
 int FUNC_1 (struct pt_regs*,int ,int ,char*) ;
 int FUNC_2 () ;

void FUNC_3(struct pt_regs *VAR_4)
{
 FUNC_2();
 if (VAR_3->thread.fpu.fpc & VAR_0)
  FUNC_0(VAR_4, VAR_3->thread.fpu.fpc);
 else
  FUNC_1(VAR_4, VAR_2, VAR_1, "data exception");
}
