
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 () ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct pt_regs*,int ,unsigned long) ;
 int FUNC_2 (struct pt_regs*,unsigned long,int ) ;
 int FUNC_3 (struct pt_regs*) ;
 scalar_t__ FUNC_4 (struct pt_regs*) ;

void FUNC_5(struct pt_regs *VAR_4, unsigned long VAR_5, long VAR_6)
{
 if (VAR_6 == -VAR_0) {
  if (FUNC_4(VAR_4))
   FUNC_1(VAR_3, VAR_4, VAR_2, VAR_5);
  else
   FUNC_2(VAR_4, VAR_5, VAR_3);
 } else if (VAR_6 == -VAR_1) {
  FUNC_3(VAR_4);
 } else {
  FUNC_0();
 }
}
