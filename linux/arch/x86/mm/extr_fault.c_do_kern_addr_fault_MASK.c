
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pt_regs*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct pt_regs*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static void
FUNC_5(struct pt_regs *VAR_5, unsigned long VAR_6,
     unsigned long VAR_7)
{





 FUNC_0(VAR_6 & VAR_0);
 if (!(VAR_6 & (VAR_2 | VAR_3 | VAR_1))) {
  if (FUNC_4(VAR_7) >= 0)
   return;
 }


 if (FUNC_3(VAR_6, VAR_7))
  return;


 if (FUNC_2(VAR_5, VAR_4))
  return;
 FUNC_1(VAR_5, VAR_6, VAR_7);
}
