
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dsisr; } ;


 long FUNC_0 (struct pt_regs*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

long FUNC_1(struct pt_regs *VAR_2)
{

 VAR_2->dsisr &= 0x0000ffff;

 return FUNC_0(VAR_2, VAR_0, VAR_1);
}
