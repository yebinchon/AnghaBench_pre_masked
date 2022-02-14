
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (struct pt_regs*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

bool FUNC_4(unsigned int VAR_2, struct pt_regs *VAR_3)
{
 int VAR_4 = 1;

 if (VAR_2 == VAR_0) {
  FUNC_2();
  FUNC_0(VAR_3);
  FUNC_3();
 }

 else if (VAR_2 == VAR_1)
  FUNC_1(VAR_3);
 else
  VAR_4 = 0;
 return VAR_4;
}
