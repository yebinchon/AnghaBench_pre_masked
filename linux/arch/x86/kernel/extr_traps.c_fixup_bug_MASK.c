
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int ip; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct pt_regs*) ;

int FUNC_1(struct pt_regs *VAR_2, int VAR_3)
{
 if (VAR_3 != VAR_1)
  return 0;

 switch (FUNC_0(VAR_2->ip, VAR_2)) {
 case 129:
 case 130:
  break;

 case 128:
  VAR_2->ip += VAR_0;
  return 1;
 }

 return 0;
}
