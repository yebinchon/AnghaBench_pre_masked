
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct pt_regs*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct pt_regs *VAR_2)
{
 int VAR_3 = -1;

 while ((VAR_3 = FUNC_1(VAR_3 + 1)) != VAR_0)
  FUNC_0(VAR_1, VAR_3, VAR_2);
}
