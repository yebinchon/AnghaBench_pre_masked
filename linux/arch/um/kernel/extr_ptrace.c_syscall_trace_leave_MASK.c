
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int regs; } ;
struct TYPE_2__ {int ptrace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pt_regs*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pt_regs*,int ) ;

void FUNC_5(struct pt_regs *VAR_5)
{
 int VAR_6 = VAR_4->ptrace;

 FUNC_0(VAR_5);


 if (VAR_6 & VAR_0)
  FUNC_1(&VAR_5->regs, 0);

 if (!FUNC_3(VAR_3))
  return;

 FUNC_4(VAR_5, 0);

 if (VAR_6 & VAR_1)
  FUNC_2(VAR_2);
}
