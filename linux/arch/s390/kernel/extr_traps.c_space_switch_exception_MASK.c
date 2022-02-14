
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mask; } ;
struct pt_regs {TYPE_1__ psw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*,int ,int ,char*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

void FUNC_2(struct pt_regs *VAR_3)
{

 if (FUNC_1(VAR_3))
  VAR_3->psw.mask |= VAR_1;

 FUNC_0(VAR_3, VAR_2, VAR_0, "space switch event");
}
