
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_1(struct pt_regs *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_1);

 return (VAR_2 & ~(VAR_0 - 1)) == (VAR_3 & ~(VAR_0 - 1));
}
