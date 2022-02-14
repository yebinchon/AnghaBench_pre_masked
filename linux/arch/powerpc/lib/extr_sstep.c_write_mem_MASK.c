
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pt_regs*,unsigned long,int) ;
 int FUNC_1 (unsigned long,unsigned long,int,struct pt_regs*) ;
 int FUNC_2 (unsigned long,unsigned long,int,struct pt_regs*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1, unsigned long VAR_2, int VAR_3,
          struct pt_regs *VAR_4)
{
 if (!FUNC_0(VAR_4, VAR_2, VAR_3))
  return -VAR_0;
 if ((VAR_2 & (VAR_3 - 1)) == 0)
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
}
