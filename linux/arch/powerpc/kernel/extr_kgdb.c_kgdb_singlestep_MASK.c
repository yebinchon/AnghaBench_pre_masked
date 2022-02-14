
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct pt_regs*) ;
 scalar_t__ FUNC_1 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_2(struct pt_regs *VAR_1)
{
 if (FUNC_1(VAR_1))
  return 0;

 FUNC_0(0, VAR_0, 0, VAR_1);

 return 1;
}
