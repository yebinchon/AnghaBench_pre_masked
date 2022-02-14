
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pt_regs*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct pt_regs*,int *,int ) ;
 scalar_t__ FUNC_3 (struct pt_regs*) ;

void FUNC_4(struct pt_regs *VAR_4)
{
 FUNC_1(VAR_0);

 FUNC_0(VAR_4, FUNC_3(VAR_4) ? VAR_2 : VAR_1);




 if (!FUNC_3(VAR_4))
  FUNC_2(VAR_3, VAR_4, ((void*)0), VAR_0);
}
