
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dsisr; int msr; } ;


 scalar_t__ FUNC_0 (int ) ;
 long FUNC_1 (struct pt_regs*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

long FUNC_2(struct pt_regs *VAR_2)
{
 if (FUNC_0(VAR_2->msr) && VAR_2->dsisr == 0x02000000)
  return 1;

 return FUNC_1(VAR_2, VAR_0, VAR_1);
}
