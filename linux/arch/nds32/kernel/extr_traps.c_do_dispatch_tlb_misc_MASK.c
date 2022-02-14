
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned long,struct pt_regs*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned long,struct pt_regs*) ;

void FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
     unsigned long VAR_4, struct pt_regs *VAR_5)
{
 VAR_4 = VAR_4 & (VAR_1 | VAR_0);
 if ((VAR_4 & VAR_0) < 5) {

  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 } else
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
