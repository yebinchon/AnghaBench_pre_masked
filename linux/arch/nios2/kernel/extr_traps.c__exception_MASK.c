
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int,int,unsigned long) ;
 int FUNC_1 (char*,struct pt_regs*,int) ;
 int FUNC_2 (struct pt_regs*) ;

void FUNC_3(int VAR_0, struct pt_regs *VAR_1, int VAR_2, unsigned long VAR_3)
{
 if (!FUNC_2(VAR_1))
  FUNC_1("Exception in kernel mode", VAR_1, VAR_0);

 FUNC_0(VAR_0, VAR_2, VAR_3);
}
