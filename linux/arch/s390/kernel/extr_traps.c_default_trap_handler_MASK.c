
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pt_regs*,int ,int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct pt_regs *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1, VAR_0, 0);
  FUNC_1(VAR_0);
 } else
  FUNC_0(VAR_1, "Unknown program exception");
}
