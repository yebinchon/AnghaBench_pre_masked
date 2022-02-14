
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {unsigned long nip; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct pt_regs*) ;
 int FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

unsigned long FUNC_4(struct pt_regs *VAR_1)
{
 bool VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 && FUNC_3(VAR_1))
  return FUNC_0(VAR_0) + FUNC_1(VAR_1);
 else if (VAR_2)
  return 0;
 else
  return VAR_1->nip;
}
