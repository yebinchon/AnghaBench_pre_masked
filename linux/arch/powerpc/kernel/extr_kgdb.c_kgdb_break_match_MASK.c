
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_0)
{
 if (FUNC_3(VAR_0))
  return 0;

 if (FUNC_2(0, FUNC_1(FUNC_0(VAR_0)), 0, VAR_0) != 0)
  return 0;
 return 1;
}
