
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int * gr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pt_regs*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct pt_regs*,int ) ;
 int FUNC_3 (struct pt_regs*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void FUNC_5(struct pt_regs *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_1) ||
  FUNC_1(VAR_0);

 FUNC_0(VAR_4);






 if (VAR_5 || FUNC_1(VAR_2))
  FUNC_3(VAR_4, VAR_5);
}
