
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int flags; int cs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (struct pt_regs*) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static unsigned long FUNC_3(struct pt_regs *VAR_3)
{
 if (FUNC_2(VAR_3) && !FUNC_1(VAR_3) &&
     VAR_3->cs != VAR_1)
  return FUNC_0(VAR_3->cs);

 return 0;
}
