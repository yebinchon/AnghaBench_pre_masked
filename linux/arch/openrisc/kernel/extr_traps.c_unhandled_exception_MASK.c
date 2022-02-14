
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (char*,struct pt_regs*,int) ;
 int FUNC_1 (char*,int,int) ;

void FUNC_2(struct pt_regs *VAR_0, int VAR_1, int VAR_2)
{
 FUNC_1("Unable to handle exception at EA =0x%x, vector 0x%x",
        VAR_1, VAR_2);
 FUNC_0("Oops", VAR_0, 9);
}
