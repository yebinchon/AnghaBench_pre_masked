
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,struct pt_regs*,unsigned long) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct pt_regs*) ;

__attribute__((used)) static void FUNC_3(int VAR_0, char *VAR_1, unsigned long VAR_2,
       struct pt_regs *VAR_3)
{
 if (FUNC_2(VAR_3))
  FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_3, VAR_2);
}
