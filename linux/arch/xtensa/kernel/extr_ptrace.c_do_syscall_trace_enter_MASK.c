
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int syscall; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct pt_regs*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pt_regs*,int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct pt_regs *VAR_4)
{
 if (FUNC_1(VAR_1) &&
     FUNC_3(VAR_4))
  VAR_4->syscall = VAR_0;

 if (FUNC_1(VAR_2))
  FUNC_2(VAR_4, FUNC_0(VAR_3, VAR_4));
}
