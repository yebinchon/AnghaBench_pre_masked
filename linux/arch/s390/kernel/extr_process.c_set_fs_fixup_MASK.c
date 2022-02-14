
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int int_code; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 struct pt_regs* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(void)
{
 struct pt_regs *VAR_1 = FUNC_1();
 static bool VAR_2;

 FUNC_2(VAR_0);
 if (VAR_2)
  return;
 FUNC_0(1, "Unbalanced set_fs - int code: 0x%x\n", VAR_1->int_code);
 FUNC_3(VAR_1);
 VAR_2 = 1;
}
